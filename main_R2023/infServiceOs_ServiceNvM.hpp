#pragma once
/******************************************************************************/
/* File   : infServiceOs_ServiceNvM.hpp                                       */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "infServiceEcuM_ServiceOs.hpp"
#include "infServiceSwcOs_ServiceOs.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define NvM_InitBlocksRom_ServiceOs                                                                              \
   ,  {                                                                                                          \
            {SERVICEOS_AR_RELEASE_VERSION_MAJOR, SERVICEOS_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'} \
         ,  &ServiceEcuM                                                                                         \
         ,  &ServiceSwcOs                                                                                        \
      }                                                                                                          \

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

