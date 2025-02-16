/*==================================================================================================
*   Project              : RTD AUTOSAR 4.7
*   Platform             : CORTEXM
*   Peripheral           : LPUART_FLEXIO
*   Dependencies         : none
*
*   Autosar Version      : 4.7.0
*   Autosar Revision     : ASR_REL_4_7_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 2.0.0
*   Build Version        : S32K1_RTD_2_0_0_QLP1_D2408_ASR_REL_4_7_REV_0000_20240809
*
*   Copyright 2020-2024 NXP Semiconductors
*
*
*   NXP Confidential. This software is owned or controlled by NXP and may only be
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/

#ifndef FLEXIO_LIN_IP_SA_BOARD_INITPERIPHERALS_PBCFG_H
#define FLEXIO_LIN_IP_SA_BOARD_INITPERIPHERALS_PBCFG_H


/**
*   @file
*
*   @addtogroup FLEXIO_IP
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
* 4) user callback header files
==================================================================================================*/

#include "Flexio_Lin_Ip_Types.h"

/*==================================================================================================
*                                SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define FLEXIO_LIN_IP_SA_BOARD_INITPERIPHERALS_PBCFG_VENDOR_ID                     43
#define FLEXIO_LIN_IP_SA_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MAJOR_VERSION      4
#define FLEXIO_LIN_IP_SA_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MINOR_VERSION      7
#define FLEXIO_LIN_IP_SA_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_REVISION_VERSION   0
#define FLEXIO_LIN_IP_SA_BOARD_INITPERIPHERALS_PBCFG_SW_MAJOR_VERSION              2
#define FLEXIO_LIN_IP_SA_BOARD_INITPERIPHERALS_PBCFG_SW_MINOR_VERSION              0
#define FLEXIO_LIN_IP_SA_BOARD_INITPERIPHERALS_PBCFG_SW_PATCH_VERSION              0

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/
/* Checks against Flexio_Lin_Ip_Types.h */
#if (FLEXIO_LIN_IP_SA_BOARD_INITPERIPHERALS_PBCFG_VENDOR_ID != FLEXIO_LIN_IP_TYPES_VENDOR_ID)
    #error "Flexio_Lin_Ip_Sa_BOARD_INITPERIPHERALS_PBcfg.h and Flexio_Lin_Ip_Types.h have different vendor ids"
#endif
/* Check if current file and Flexio_Lin_Ip_Types header file are of the same Autosar version */
#if ((FLEXIO_LIN_IP_SA_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MAJOR_VERSION    != FLEXIO_LIN_IP_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (FLEXIO_LIN_IP_SA_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MINOR_VERSION    != FLEXIO_LIN_IP_TYPES_AR_RELEASE_MINOR_VERSION) || \
     (FLEXIO_LIN_IP_SA_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_REVISION_VERSION != FLEXIO_LIN_IP_TYPES_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Flexio_Lin_Ip_Sa_BOARD_INITPERIPHERALS_PBcfg.h and Flexio_Lin_Ip_Types.h are different"
#endif
/* Check if current file and Flexio_Lin_Ip_Types header file are of the same Software version */
#if ((FLEXIO_LIN_IP_SA_BOARD_INITPERIPHERALS_PBCFG_SW_MAJOR_VERSION != FLEXIO_LIN_IP_TYPES_SW_MAJOR_VERSION) || \
     (FLEXIO_LIN_IP_SA_BOARD_INITPERIPHERALS_PBCFG_SW_MINOR_VERSION != FLEXIO_LIN_IP_TYPES_SW_MINOR_VERSION) || \
     (FLEXIO_LIN_IP_SA_BOARD_INITPERIPHERALS_PBCFG_SW_PATCH_VERSION != FLEXIO_LIN_IP_TYPES_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Flexio_Lin_Ip_Sa_BOARD_INITPERIPHERALS_PBcfg.h and Flexio_Lin_Ip_Types.h are different"
#endif

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                        LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL VARIABLES
==================================================================================================*/
#define FLEXIO_LIN_IP_CONFIG_SA_BOARD_INITPERIPHERALS_PB \
    extern const Flexio_Lin_Ip_UserConfigType Flexio_Lin_Ip_Sa_pHwConfigPB_0_BOARD_INITPERIPHERALS;\
    extern const Flexio_Lin_Ip_UserConfigType Flexio_Lin_Ip_Sa_pHwConfigPB_1_BOARD_INITPERIPHERALS;\
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

#endif /* FLEXIO_LIN_IP_SA_BOARD_INITPERIPHERALS_PBCFG_H */

