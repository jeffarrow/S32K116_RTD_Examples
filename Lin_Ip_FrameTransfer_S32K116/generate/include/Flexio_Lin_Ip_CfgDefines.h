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

#ifndef FLEXIO_LIN_IP_CFG_DEFINES_H
#define FLEXIO_LIN_IP_CFG_DEFINES_H

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
#include "Mcal.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define FLEXIO_LIN_IP_CFG_DEFINES_VENDOR_ID                    43
#define FLEXIO_LIN_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION     4
#define FLEXIO_LIN_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION     7
#define FLEXIO_LIN_IP_CFG_DEFINES_AR_RELEASE_REVISION_VERSION  0
#define FLEXIO_LIN_IP_CFG_DEFINES_SW_MAJOR_VERSION             2
#define FLEXIO_LIN_IP_CFG_DEFINES_SW_MINOR_VERSION             0
#define FLEXIO_LIN_IP_CFG_DEFINES_SW_PATCH_VERSION             0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if current file and Mcal.h header file are of the same Autosar version */
    #if ((FLEXIO_LIN_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION != MCAL_AR_RELEASE_MAJOR_VERSION) || \
         (FLEXIO_LIN_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION != MCAL_AR_RELEASE_MINOR_VERSION))
        #error "AUTOSAR Version Numbers of Flexio_Lin_Ip_Cfg.h and Mcal.h are different"
    #endif
#endif /* DISABLE_MCAL_INTERMODULE_ASR_CHECK */

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                            ENUMS
==================================================================================================*/

/*==================================================================================================
*                               STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#ifndef FLEXIO_0_CH_1_USED
    #define FLEXIO_0_CH_1_USED
#else
    #error "CHANNEL_1 cannot be used by LIN driver. Channel locked by another driver!"
#endif

#ifndef LIN_CHANNEL_1_USED
    #define LIN_CHANNEL_1_USED
#else
    #error "CHANNEL_1 cannot be used by LIN driver. Channel locked by other driver!"
#endif

#ifndef FLEXIO_0_PIN_5_USED
    #define FLEXIO_0_PIN_5_USED
#else
    #error "PIN_5 cannot be used by LIN driver. Pin used by another driver!"
#endif

#ifndef FLEXIO_0_CH_0_USED
    #define FLEXIO_0_CH_0_USED
#else
    #error "CHANNEL_0 cannot be used by LIN driver. Channel locked by another driver!"
#endif

#ifndef LIN_CHANNEL_0_USED
    #define LIN_CHANNEL_0_USED
#else
    #error "CHANNEL_0 cannot be used by LIN driver. Channel locked by other driver!"
#endif

#ifndef FLEXIO_0_PIN_4_USED
    #define FLEXIO_0_PIN_4_USED
#else
    #error "PIN_4 cannot be used by LIN driver. Pin used by another driver!"
#endif

#ifndef FLEXIO_0_CH_2_USED
    #define FLEXIO_0_CH_2_USED
#else
    #error "CHANNEL_2 cannot be used by LIN driver. Channel locked by another driver!"
#endif

#ifndef LIN_CHANNEL_2_USED
    #define LIN_CHANNEL_2_USED
#else
    #error "CHANNEL_2 cannot be used by LIN driver. Channel locked by other driver!"
#endif

#ifndef FLEXIO_0_PIN_1_USED
    #define FLEXIO_0_PIN_1_USED
#else
    #error "PIN_1 cannot be used by LIN driver. Pin used by another driver!"
#endif

#ifndef FLEXIO_0_CH_3_USED
    #define FLEXIO_0_CH_3_USED
#else
    #error "CHANNEL_3 cannot be used by LIN driver. Channel locked by another driver!"
#endif

#ifndef LIN_CHANNEL_3_USED
    #define LIN_CHANNEL_3_USED
#else
    #error "CHANNEL_3 cannot be used by LIN driver. Channel locked by other driver!"
#endif

#ifndef FLEXIO_0_PIN_0_USED
    #define FLEXIO_0_PIN_0_USED
#else
    #error "PIN_0 cannot be used by LIN driver. Pin used by another driver!"
#endif

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

#endif /*FLEXIO_LIN_IP_CFG_DEFINES_H */

