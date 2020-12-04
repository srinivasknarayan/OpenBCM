/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/npl/bcm56880_a0/dna_4_7_11/bcm56880_a0_dna_4_7_11_R_ECN_CONTROL.map.ltl for
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
/* R_ECN_CONTROL field init */
static const bcmlrd_field_data_t bcm56880_a0_dna_4_7_11_lrd_r_ecn_control_map_field_data_mmd[] = {
    { /* 0 RESPONSIVE_DEFAULT */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56880_a0_dna_4_7_11_lrd_r_ecn_control_map_field_data = {
    .fields = 1,
    .field = bcm56880_a0_dna_4_7_11_lrd_r_ecn_control_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56880_a0_dna_4_7_11_lrd_r_ecn_controlt_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
};

static const bcmlrd_map_attr_t bcm56880_a0_dna_4_7_11_lrd_r_ecn_controlt_attr_group = {
    .attributes = 1,
    .attr = bcm56880_a0_dna_4_7_11_lrd_r_ecn_controlt_attr_entry,
};

static const bcmlrd_map_entry_t bcm56880_a0_dna_4_7_11_lrd_r_ecn_controlt_ifsl70_data_constant_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 32,
            .maxbit    = 32,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_R_ECN_CONTROLt_RESPONSIVE_DEFAULTf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_INDEX,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
};
static const bcmlrd_map_group_t bcm56880_a0_dna_4_7_11_lrd_r_ecn_control_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = IFSL70_DATA_CONSTANTm,
        },
        .entries = 2,
        .entry = bcm56880_a0_dna_4_7_11_lrd_r_ecn_controlt_ifsl70_data_constant_map_entry
    },
};
const bcmlrd_map_t bcm56880_a0_dna_4_7_11_lrd_r_ecn_control_map = {
    .src_id = BCM56880_A0_DNA_4_7_11_R_ECN_CONTROLt,
    .field_data = &bcm56880_a0_dna_4_7_11_lrd_r_ecn_control_map_field_data,
    .groups = 1,
    .group  = bcm56880_a0_dna_4_7_11_lrd_r_ecn_control_map_group,
    .table_attr = &bcm56880_a0_dna_4_7_11_lrd_r_ecn_controlt_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
