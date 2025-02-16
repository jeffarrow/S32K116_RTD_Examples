/*==================================================================================================
*   Project              : RTD AUTOSAR 4.7 
*   Platform             : CORTEXM
*   Peripheral           : PORT_CI
*   Dependencies         : none
*
*   Autosar Version      : 4.7.0
*   Autosar Revision     : ASR_REL_4_7_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 2.0.0
*   Build Version        : S32K1_S32M24_RTD_2_0_0_QLP1_D2408_ASR_REL_4_7_REV_0000_20240809
*
*   Copyright 2020-2024 NXP Semiconductors
*
*   NXP Confidential. This software is owned or controlled by NXP and may only be
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v16.0
processor: S32K116
package_id: S32K116_LQFP48
mcu_data: PlatformSDK_S32K1_S32M24
processor_version: 0.0.0
pin_labels:
- {pin_num: '11', pin_signal: PTD15, label: LED, identifier: LED}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */
/*==================================================================================================*/

/**
*   @file      Port_Ci_Port_Ip_Cfg.c
*
*   @addtogroup Port_CFG
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Port_Ci_Port_Ip_Cfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define PORT_CI_PORT_IP_VENDOR_ID_CFG_C                       43
#define PORT_CI_PORT_IP_AR_RELEASE_MAJOR_VERSION_CFG_C        4
#define PORT_CI_PORT_IP_AR_RELEASE_MINOR_VERSION_CFG_C        7
#define PORT_CI_PORT_IP_AR_RELEASE_REVISION_VERSION_CFG_C     0
#define PORT_CI_PORT_IP_SW_MAJOR_VERSION_CFG_C                2
#define PORT_CI_PORT_IP_SW_MINOR_VERSION_CFG_C                0
#define PORT_CI_PORT_IP_SW_PATCH_VERSION_CFG_C                0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Port_Ci_Port_Ip_Cfg.c and Port_Ci_Port_Ip_Cfg.h are of the same vendor */
#if (PORT_CI_PORT_IP_VENDOR_ID_CFG_C != PORT_CI_PORT_IP_VENDOR_ID_CFG_H)
    #error "Port_Ci_Port_Ip_Cfg.c and Port_Ci_Port_Ip_Cfg.h have different vendor ids"
#endif
/* Check if Port_Ci_Port_Ip_Cfg.c and Port_Ci_Port_Ip_Cfg.h are of the same Autosar version */
#if ((PORT_CI_PORT_IP_AR_RELEASE_MAJOR_VERSION_CFG_C    != PORT_CI_PORT_IP_AR_RELEASE_MAJOR_VERSION_CFG_H) || \
     (PORT_CI_PORT_IP_AR_RELEASE_MINOR_VERSION_CFG_C    != PORT_CI_PORT_IP_AR_RELEASE_MINOR_VERSION_CFG_H) || \
     (PORT_CI_PORT_IP_AR_RELEASE_REVISION_VERSION_CFG_C != PORT_CI_PORT_IP_AR_RELEASE_REVISION_VERSION_CFG_H) \
    )
    #error "AutoSar Version Numbers of Port_Ci_Port_Ip_Cfg.c and Port_Ci_Port_Ip_Cfg.h are different"
#endif
/* Check if Port_Ci_Port_Ip_Cfg.c and Port_Ci_Port_Ip_Cfg.h are of the same Software version */
#if ((PORT_CI_PORT_IP_SW_MAJOR_VERSION_CFG_C != PORT_CI_PORT_IP_SW_MAJOR_VERSION_CFG_H) || \
     (PORT_CI_PORT_IP_SW_MINOR_VERSION_CFG_C != PORT_CI_PORT_IP_SW_MINOR_VERSION_CFG_H) || \
     (PORT_CI_PORT_IP_SW_PATCH_VERSION_CFG_C != PORT_CI_PORT_IP_SW_PATCH_VERSION_CFG_H)    \
    )
    #error "Software Version Numbers of Port_Ci_Port_Ip_Cfg.c and Port_Ci_Port_Ip_Cfg.h are different"
#endif

/*==================================================================================================
                             LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
                                             LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
                                            LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                           LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                           GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                           GLOBAL VARIABLES
==================================================================================================*/


/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: core0}
- pin_list:
  - {pin_num: '11', peripheral: PORTD, signal: 'port, 15', pin_signal: PTD15, direction: OUTPUT}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

#define PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Port_MemMap.h"

/* Generate array of configured pin structures */
Port_Ci_Port_Ip_PinSettingsConfig g_pin_mux_InitConfigArr_BOARD_InitPins[NUM_OF_CONFIGURED_PINS_BOARD_InitPins] = {
    {
        .portBase        = IP_PORTD,
        .gpioBase        = IP_PTD,
        .pinPortIdx      = 15U,
        .pullConfig      = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength   = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter   = (boolean)FALSE,
        .mux             = PORT_MUX_AS_GPIO,
        .lockRegister    = PORT_LOCK_REGISTER_DISABLED,
        .direction       = PORT_CI_PORT_PIN_OUT,
        .digitalFilter   = (boolean)FALSE,
        .initValue       = 0U,
    },
};

#define PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Port_MemMap.h"

/*==================================================================================================
                                      LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                           LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
                                           GLOBAL FUNCTIONS
==================================================================================================*/


#ifdef __cplusplus
}
#endif

/** @} */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
