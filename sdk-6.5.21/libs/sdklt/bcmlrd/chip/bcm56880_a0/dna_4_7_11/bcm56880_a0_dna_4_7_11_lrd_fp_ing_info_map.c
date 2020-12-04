/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/npl/bcm56880_a0/dna_4_7_11/bcm56880_a0_dna_4_7_11_FP_ING_INFO.map.ltl for
 *      bcm56880_a0 variant dna_4_7_11
 *
 * Tool: $SDK/INTERNAL/fltg/bin/fltg
 *
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
#include <bcmlrd/bcmlrd_internal.h>
#include <bcmlrd/chip/bcmlrd_id.h>
#include <bcmlrd/chip/bcm56880_a0/dna_4_7_11/bcm56880_a0_dna_4_7_11_lrd_field_data.h>
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56880_a0/dna_4_7_11/bcm56880_a0_dna_4_7_11_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56880_a0/dna_4_7_11/bcm56880_a0_dna_4_7_11_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56880_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "../bcm56880_a0_lrd_enumpool.h"
#include "bcm56880_a0_dna_4_7_11_lrd_enumpool.h"
#include <bcmltd/bcmltd_handler.h>
/* FP_ING_INFO field init */
static const bcmlrd_field_data_t bcm56880_a0_dna_4_7_11_lrd_fp_ing_info_map_field_data_mmd[] = {
    { /* 0 NUM_SLICES */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56880_a0_dna_4_7_11_lrd_fp_ing_info_map_field_data = {
    .fields = 1,
    .field = bcm56880_a0_dna_4_7_11_lrd_fp_ing_info_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56880_a0_dna_4_7_11_lrd_fp_ing_infot_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_ENTRY_LIMIT,
        .value = 1,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
};

static const bcmlrd_map_attr_t bcm56880_a0_dna_4_7_11_lrd_fp_ing_infot_attr_group = {
    .attributes = 2,
    .attr = bcm56880_a0_dna_4_7_11_lrd_fp_ing_infot_attr_entry,
};

static const bcmlrd_map_entry_t bcm56880_a0_dna_4_7_11_lrd_bcmfp_fp_ing_info_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_TABLE_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            /* handler: bcm56880_a0_dna_4_7_11_lta_bcmfp_fp_ing_info_cth_handler */
            .handler_id = BCMLTD_TABLE_BCM56880_A0_DNA_4_7_11_LTA_BCMFP_FP_ING_INFO_CTH_HANDLER_ID
        }
    },
};
static const bcmlrd_map_group_t bcm56880_a0_dna_4_7_11_lrd_fp_ing_info_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_CUSTOM,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56880_a0_dna_4_7_11_lrd_bcmfp_fp_ing_info_entry
    },
};
const bcmlrd_map_t bcm56880_a0_dna_4_7_11_lrd_fp_ing_info_map = {
    .src_id = FP_ING_INFOt,
    .field_data = &bcm56880_a0_dna_4_7_11_lrd_fp_ing_info_map_field_data,
    .groups = 1,
    .group  = bcm56880_a0_dna_4_7_11_lrd_fp_ing_info_map_group,
    .table_attr = &bcm56880_a0_dna_4_7_11_lrd_fp_ing_infot_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE
};
