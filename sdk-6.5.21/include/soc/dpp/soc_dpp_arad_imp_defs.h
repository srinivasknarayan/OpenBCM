/*
 * 
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 * This file is auto-generated by autoCoder
 * DO NOT EDIT THIS FILE!
 */
#ifndef SOC_DPP_ARAD_IMP_DEFS
#define SOC_DPP_ARAD_IMP_DEFS

#include <soc/defs.h>
#ifdef BCM_ARAD_SUPPORT

#define SOC_DPP_GET_ARAD_IMP_DEFS(dpp_define)    SOC_DPP_##dpp_define##_ARAD
#define SOC_DPP_FIRST_FABRIC_PORT_ARAD                       (256)
#define SOC_DPP_IHP_STP_TABLE_NOF_LONGS_ARAD                 (5)
#define SOC_DPP_IHB_PINFO_PMF_NOF_LONGS_ARAD                 (1)
#define SOC_DPP_IHB_PTC_INFO_NOF_LONGS_ARAD                  (1)
#define SOC_DPP_IHB_PMF_PROGRAM_SELECTION_CAM_NOF_LONGS_ARAD (6)




#else 
#define SOC_DPP_GET_ARAD_IMP_DEFS(dpp_define)    0
#endif 
#endif 

