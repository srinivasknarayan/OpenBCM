/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/npl/bcm56780_a0/dna_2_5_13/bcm56780_a0_dna_2_5_13_R_MIRROR_ENCAP_PROFILE_11.map.ltl for
 *      bcm56780_a0 variant dna_2_5_13
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
#include <bcmlrd/chip/bcm56780_a0/dna_2_5_13/bcm56780_a0_dna_2_5_13_lrd_field_data.h>
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56780_a0/dna_2_5_13/bcm56780_a0_dna_2_5_13_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56780_a0/dna_2_5_13/bcm56780_a0_dna_2_5_13_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56780_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "../bcm56780_a0_lrd_enumpool.h"
#include "bcm56780_a0_dna_2_5_13_lrd_enumpool.h"
#include <bcmltd/bcmltd_handler.h>
/* R_MIRROR_ENCAP_PROFILE_11 field init */
static const bcmlrd_field_data_t bcm56780_a0_dna_2_5_13_lrd_r_mirror_encap_profile_11_map_field_data_mmd[] = {
    { /* 0 DATA */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_binary_0x0_320,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_binary_0x0_320,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_binary_0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff_320,
      .depth = 0,
      .width = 320,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56780_a0_dna_2_5_13_lrd_r_mirror_encap_profile_11_map_field_data = {
    .fields = 1,
    .field = bcm56780_a0_dna_2_5_13_lrd_r_mirror_encap_profile_11_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56780_a0_dna_2_5_13_lrd_r_mirror_encap_profile_11t_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
};

static const bcmlrd_map_attr_t bcm56780_a0_dna_2_5_13_lrd_r_mirror_encap_profile_11t_attr_group = {
    .attributes = 1,
    .attr = bcm56780_a0_dna_2_5_13_lrd_r_mirror_encap_profile_11t_attr_entry,
};

static const bcmlrd_map_entry_t bcm56780_a0_dna_2_5_13_lrd_r_mirror_encap_profile_11t_flex_editor_mirror_encap_0_profile_2_table_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 319,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_5_13_R_MIRROR_ENCAP_PROFILE_11t_DATAf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 319,
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
            .maxbit    = 3,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 11,
            }
        },
    },
};
static const bcmlrd_map_entry_t
bcm56780_a0_dna_2_5_13_lrd_bcmltx_r_mirror_encap_profile_11_validate_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_VALUE_FIELD_VALIDATION,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            /* handler: bcm56780_a0_dna_2_5_13_lta_bcmltx_r_mirror_encap_profile_11_std_val_fv_handler */
            .handler_id = BCMLTD_VALIDATE_BCM56780_A0_DNA_2_5_13_LTA_BCMLTX_R_MIRROR_ENCAP_PROFILE_11_STD_VAL_FV_HANDLER_ID
        }
    },
};
static const bcmlrd_map_group_t bcm56780_a0_dna_2_5_13_lrd_r_mirror_encap_profile_11_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = FLEX_EDITOR_MIRROR_ENCAP_0_PROFILE_2_TABLEm,
        },
        .entries = 2,
        .entry = bcm56780_a0_dna_2_5_13_lrd_r_mirror_encap_profile_11t_flex_editor_mirror_encap_0_profile_2_table_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_VALIDATION,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56780_a0_dna_2_5_13_lrd_bcmltx_r_mirror_encap_profile_11_validate_entry
    },
};
const bcmlrd_map_t bcm56780_a0_dna_2_5_13_lrd_r_mirror_encap_profile_11_map = {
    .src_id = BCM56780_A0_DNA_2_5_13_R_MIRROR_ENCAP_PROFILE_11t,
    .field_data = &bcm56780_a0_dna_2_5_13_lrd_r_mirror_encap_profile_11_map_field_data,
    .groups = 2,
    .group  = bcm56780_a0_dna_2_5_13_lrd_r_mirror_encap_profile_11_map_group,
    .table_attr = &bcm56780_a0_dna_2_5_13_lrd_r_mirror_encap_profile_11t_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
