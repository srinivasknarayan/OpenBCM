/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated from the registers file.
 * Edits to this file will be lost when it is regenerated.
 *
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 *
 * File:        allmems_y.i
 * Purpose:     Independent memory descriptions.
 */

#if defined(BCM_56725_A0) || defined(BCM_56820_A0)
    { /* SOC_MEM_INT_Y_ARB_TDM_TABLEm */ 
        /* mem            Y_ARB_TDM_TABLEm */
        /* flags       */ SOC_MEM_FLAG_VALID |
                          SOC_MEM_FLAG_CACHABLE, /* 0x22 */
        /* cmp_fn      */ _soc_mem_cmp_undef,
        /* *null_entry */ _soc_mem_entry_null_zeroes,
        /* index_min   */ 0,
        /* index_max   */ 127,
        /* minblock    */ 4,
        /* maxblock    */ 4,
        /* blocks      */ 0x10,
        /* blocks_hi   */ 0,
        /* base        */ 0x06008000,
        /* gran        */ 1,
        /* data_bits   */ 6,
        /* bytes       */ 1,
        /* nFields     */ 2,
        /* *fields     */ soc_X_ARB_TDM_TABLEm_fields,
        /* *views      */ NULL,
        /* *views_num  */ NULL,
        /* snoop_cb    */ NULL, 
        /* snoop_user_data */ NULL, 
        /* snoop_flags */ 0,
        /* mem severity */ SOC_MEM_SEVERE_MISSING,
        /* type */ SOC_MEM_TYPE_NORMAL,
        /* ecc type */ SOC_MEM_ECC_TYPE_NONE,
        /* impl */ SOC_MEM_IMPL_NORMAL,
        /* cmic_mor_clks       */ 0,
        /* pipe stage number/offset */ 6,
    },
#endif /* chips */

