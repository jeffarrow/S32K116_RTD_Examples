/*==================================================================================================
*   Project              : RTD AUTOSAR 4.7
*   Platform             : CORTEXM
*   Peripheral           : FTFC
*   Dependencies         : None
*
*   Autosar Version      : 4.7.0
*   Autosar Revision     : ASR_REL_4_7_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 2.0.0
*   Build Version        : S32K1_RTD_2_0_0_QLP1_D2408_ASR_REL_4_7_REV_0000_20240809
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

#ifndef FTFC_MEM_INFLS_IP_AC_H
#define FTFC_MEM_INFLS_IP_AC_H

/**
 * @file       Ftfc_Mem_InFls_Ip_Ac.h
 *
 * @addtogroup FTFC_MEM_INFLS_IP
 * @{
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

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define FTFC_MEM_INFLS_IP_AC_VENDOR_ID                      43
#define FTFC_MEM_INFLS_IP_AC_AR_RELEASE_MAJOR_VERSION       4
#define FTFC_MEM_INFLS_IP_AC_AR_RELEASE_MINOR_VERSION       7
#define FTFC_MEM_INFLS_IP_AC_AR_RELEASE_REVISION_VERSION    0
#define FTFC_MEM_INFLS_IP_AC_SW_MAJOR_VERSION               2
#define FTFC_MEM_INFLS_IP_AC_SW_MINOR_VERSION               0
#define FTFC_MEM_INFLS_IP_AC_SW_PATCH_VERSION               0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                     FUNCTION PROTOTYPES
==================================================================================================*/
#define MEM_43_INFLS_START_SEC_CODE_AC
#include "Mem_43_INFLS_MemMap.h"

#ifdef _LINARO_C_S32K1XX_
    void Ftfc_Mem_InFls_Ip_AccessCode(void (*CallBack)( void ) ) __attribute__ ((section (".acfls_code_rom")));
#else
    void Ftfc_Mem_InFls_Ip_AccessCode(void (*CallBack)( void ) );
#endif

#define MEM_43_INFLS_STOP_SEC_CODE_AC
#include "Mem_43_INFLS_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* FTFC_MEM_INFLS_IP_AC_H */
