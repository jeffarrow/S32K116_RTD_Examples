/*==================================================================================================
 *   Copyright 2020-2023 NXP Semiconductors
 *
 *   NXP Confidential. This software is owned or controlled by NXP and may only be
 *   used strictly in accordance with the applicable license terms. By expressly
 *   accepting such terms or by downloading, installing, activating and/or otherwise
 *   using the software, you are agreeing that you have read, and that you agree to
 *   comply with and are bound by, such license terms. If you do not agree to be
 *   bound by the applicable license terms, then you may not retain, install,
 *   activate or otherwise use the software.
==================================================================================================*/

/**
 *   @file          main.c
 *   @brief         This file contains sample code only. It is not part of the production code deliverables.
 *
 *   @addtogroup    main_module main module documentation
 *   @{
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
#include "Ftfc_Mem_InFls_Ip.h"

#include "check_example.h"

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/
/* Test the first sector of D_FLASH */
#define EXAMPLE_SECTOR_START_ADDR       (FTFC_MEM_INFLS_IP_D_FLASH_BASE_ADDR + 0x000000UL)

/* Test data size = 128 bytes */
#define EXAMPLE_BUF_SIZE                (FTFC_MEM_INFLS_IP_WRITE_DOUBLE_WORD * 16U)

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/


/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/
#define MEM_43_INFLS_START_SEC_VAR_INIT_8_NO_CACHEABLE
#include "Mem_43_INFLS_MemMap.h"

uint8 TxBuffer[EXAMPLE_BUF_SIZE];
uint8 RxBuffer[EXAMPLE_BUF_SIZE];

#define MEM_43_INFLS_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
#include "Mem_43_INFLS_MemMap.h"

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
static void    Example_CheckAssert(boolean Condition);
static void    Example_InitBuffers(uint32 Length);
static boolean Example_VerifyBuffers(uint32 Length);

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
/**
 * @brief Implement a simple assert macro
 *
 * @param  Condition
 * @return void
 */
static void Example_CheckAssert(boolean Condition)
{
    while (!Condition)
    {
        /* Loop forever */
    }
}


static void Example_InitBuffers(uint32 Length)
{
    uint32 i;

    for (i = 0U; i < Length; i++)
    {
        TxBuffer[i] = (uint8)i;
        RxBuffer[i] = 0U;
    }
}

static boolean Example_VerifyBuffers(uint32 Length)
{
    uint32 i;

    for (i = 0U; i < Length; i++)
    {
        if (RxBuffer[i] != TxBuffer[i])
        {
            return FALSE;
        }
    }
    return TRUE;
}

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
/**
* @brief        Main function of the example
* @details      Initializes IP FTFC driver and erase, write, read, compare internal flash memory
*/
int main(void)
{
    Clock_Ip_StatusType t_ClockStatus;
    Ftfc_Mem_InFls_Ip_StatusType t_ReturnValue;

    uint32 t_SectorAddr   = EXAMPLE_SECTOR_START_ADDR;
    uint32 t_BufferSize   = EXAMPLE_BUF_SIZE;
    uint32 t_Index;

    /* Initialize clock */
    t_ClockStatus = Clock_Ip_Init(&Clock_Ip_aClockConfig[0]);
    Example_CheckAssert(t_ClockStatus == CLOCK_IP_SUCCESS);

    /* Initialize FTFC driver */
    Ftfc_Mem_InFls_Ip_Init(&Ftfc_Mem_InFls_Ip_InitCfg);

    /* Initialize buffers */
    Example_InitBuffers(t_BufferSize);

    /* Erase sector */
    Ftfc_Mem_InFls_Ip_SectorErase(t_SectorAddr);
    do
    {
        t_ReturnValue = Ftfc_Mem_InFls_Ip_SectorEraseStatus();
    }
    while (STATUS_FTFC_MEM_INFLS_IP_BUSY == t_ReturnValue);
    Example_CheckAssert(STATUS_FTFC_MEM_INFLS_IP_SUCCESS == t_ReturnValue);

    /* Write data */
    for (t_Index = 0U; t_Index < t_BufferSize; t_Index += FTFC_MEM_INFLS_IP_WRITE_DOUBLE_WORD)
    {
        Ftfc_Mem_InFls_Ip_Write(t_SectorAddr + t_Index, &TxBuffer[t_Index], FTFC_MEM_INFLS_IP_WRITE_DOUBLE_WORD);
        do
        {
            t_ReturnValue = Ftfc_Mem_InFls_Ip_WriteStatus();
        }
        while (STATUS_FTFC_MEM_INFLS_IP_BUSY == t_ReturnValue);
        Example_CheckAssert(STATUS_FTFC_MEM_INFLS_IP_SUCCESS == t_ReturnValue);
    }

    /* Read data */
    t_ReturnValue = Ftfc_Mem_InFls_Ip_Read(t_SectorAddr, RxBuffer, t_BufferSize);
    Example_CheckAssert(STATUS_FTFC_MEM_INFLS_IP_SUCCESS == t_ReturnValue);

    /* Compare the written data */
    t_ReturnValue = Ftfc_Mem_InFls_Ip_Compare(t_SectorAddr, TxBuffer, t_BufferSize);
    Example_CheckAssert(STATUS_FTFC_MEM_INFLS_IP_SUCCESS == t_ReturnValue);

    /* Compare data between Tx and Rx buffer */
    Example_CheckAssert(TRUE == Example_VerifyBuffers(t_BufferSize));

    /* If we get here it means the test has passed */
    Exit_Example(TRUE);
    return (0U);
}

#ifdef __cplusplus
}
#endif

/** @} */
