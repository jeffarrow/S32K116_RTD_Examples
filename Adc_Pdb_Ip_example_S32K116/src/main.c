/*
*   Copyright 2021 NXP
*
*   NXP Confidential. This software is owned or controlled by NXP and may only be used strictly
*   in accordance with the applicable license terms.  By expressly accepting
*   such terms or by downloading, installing, activating and/or otherwise using
*   the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms.  If you do not agree to
*   be bound by the applicable license terms, then you may not retain,
*   install, activate or otherwise use the software.
*
*   This file contains sample code only. It is not part of the production code deliverables.
*/

#ifdef __cplusplus
extern "C" {
#endif


/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Clock_Ip.h"
#include "IntCtrl_Ip.h"
#include "Adc_Ip.h"
#include "Pdb_Adc_Ip.h"

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
#define ADC_CONTROL_CH         (0U)
#define ADC_BANDGAP            (1200U) /* Vbandgap ~ 1.45V at 5.0V reference */
#define ADC_TOLERANCE(x,y)     ((x > y) ? (x - y) : (y - x))
#define RESULT_TOLERANCE       (150U)

/*==================================================================================================
*                                      EXTERN DECLARATIONS
==================================================================================================*/
extern void Adc_0_Isr(void);

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/
volatile boolean notif_triggered = FALSE;
volatile int exit_code = 0;
volatile uint16 data;

void AdcConversionCompleteNotif(const uint8 ControlChanIdx)
{
    notif_triggered = TRUE;
    data = Adc_Ip_GetConvData(ADCHWUNIT_0_VS_0_INSTANCE, ControlChanIdx);
    /* Checks the measured ADC data conversion */
    while (ADC_TOLERANCE(data, ADC_BANDGAP) > RESULT_TOLERANCE);
}



/*!
  \brief The main function for the project.
  \details The startup initialization sequence is the following:
 * - startup asm routine
 * - main()
*/
int main(void)
{
    Clock_Ip_StatusType clockStatus;
    Adc_Ip_StatusType adcStatus;

    /* Write your code here */
    clockStatus = Clock_Ip_Init(&Clock_Ip_aClockConfig[0]);
    while (clockStatus != CLOCK_IP_SUCCESS)
    {
        clockStatus = Clock_Ip_Init(&Clock_Ip_aClockConfig[0]);
    }
#if defined (FEATURE_CLOCK_IP_HAS_SPLL_CLK)
    /* Busy wait until the System PLL is locked */
    while (CLOCK_IP_PLL_LOCKED != Clock_Ip_GetPllStatus());
    Clock_Ip_DistributePll();
#endif

    /* Install and enable interrupt handlers */
    IntCtrl_Ip_InstallHandler(ADC0_IRQn, Adc_0_Isr, NULL_PTR);
    IntCtrl_Ip_EnableIrq(ADC0_IRQn);

    /**** Part 1: Start ADC software trigger conversions ****/
    Adc_Ip_Init(ADCHWUNIT_0_VS_0_INSTANCE, &AdcHwUnit_0_VS_0);
    adcStatus = Adc_Ip_DoCalibration(ADCHWUNIT_0_VS_0_INSTANCE);
    while (adcStatus != ADC_IP_STATUS_SUCCESS)
    {
        adcStatus = Adc_Ip_DoCalibration(ADCHWUNIT_0_VS_0_INSTANCE);
    }

    /* Start a software trigger conversion */
    Adc_Ip_StartConversion(ADCHWUNIT_0_VS_0_INSTANCE, ADC_IP_INPUTCHAN_BANDGAP, TRUE);
    /* Wait for the notification to be triggered and read the data */
    while (notif_triggered != TRUE);
    notif_triggered = FALSE;

    /**** Part 2: Start ADC hardware trigger conversions ****/
    Adc_Ip_SetTriggerMode(PDBHWUNIT_0_VS_0_INSTANCE, ADC_IP_TRIGGER_HARDWARE);
    Pdb_Adc_Ip_Init(PDBHWUNIT_0_VS_0_INSTANCE, &PdbHwUnit_0_VS_0);

    /* Start a software trigger on PDB to trigger ADC conversion */
    Pdb_Adc_Ip_SwTrigger(PDBHWUNIT_0_VS_0_INSTANCE);
    while (notif_triggered != TRUE);

    Adc_Ip_DeInit(ADCHWUNIT_0_VS_0_INSTANCE);
    Pdb_Adc_Ip_DeInit(PDBHWUNIT_0_VS_0_INSTANCE);
    for(;;)
    {
        if(exit_code != 0)
        {
            break;
        }
    }
    return exit_code;
}

/* END main */
/*!
** @}
*/
