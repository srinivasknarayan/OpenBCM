/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/ctr/bcm56990_b0/bcm56990_b0_CTR_EGR_EFLEX_ACTION_PROFILE_INFO.map.ltl for
 *      bcm56990_b0
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
#include <bcmlrd/chip/bcm56990_b0/bcm56990_b0_lrd_field_data.h>
#include <bcmlrd/chip/bcm56990_b0/bcm56990_b0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56990_b0/bcm56990_b0_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56990_b0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "bcm56990_b0_lrd_enumpool.h"
#include <bcmltd/bcmltd_handler.h>
/* CTR_EGR_EFLEX_ACTION_PROFILE_INFO field init */
static const bcmlrd_field_data_t bcm56990_b0_lrd_ctr_egr_eflex_action_profile_info_map_field_data_mmd[] = {
    { /* 0 CTR_EGR_EFLEX_ACTION_PROFILE_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_b0_lrd_ifd_u16_0x1,
      .def = &bcm56990_b0_lrd_ifd_u16_0x1,
      .max = &bcm56990_b0_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 1 POOL_ID */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56990_b0_lrd_ifd_u8_0x0,
      .def = &bcm56990_b0_lrd_ifd_u8_0x0,
      .max = &bcm56990_b0_lrd_ifd_u8_0x7,
      .depth = 0,
      .width = 3,
      .edata = NULL,
    },
    { /* 2 BASE_INDEX */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56990_b0_lrd_ifd_u8_0x0,
      .def = &bcm56990_b0_lrd_ifd_u8_0x0,
      .max = &bcm56990_b0_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 3 NUM_POOLS */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56990_b0_lrd_ifd_u8_0x1,
      .def = &bcm56990_b0_lrd_ifd_u8_0x1,
      .max = &bcm56990_b0_lrd_ifd_u8_0x8,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 4 TOP_INDEX */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56990_b0_lrd_ifd_u8_0x0,
      .def = &bcm56990_b0_lrd_ifd_u8_0x0,
      .max = &bcm56990_b0_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 5 SHADOW_VALID */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_b0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 6 SHADOW_POOL_ID */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56990_b0_lrd_ifd_u8_0x0,
      .def = &bcm56990_b0_lrd_ifd_u8_0x0,
      .max = &bcm56990_b0_lrd_ifd_u8_0x7,
      .depth = 0,
      .width = 3,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56990_b0_lrd_ctr_egr_eflex_action_profile_info_map_field_data = {
    .fields = 7,
    .field = bcm56990_b0_lrd_ctr_egr_eflex_action_profile_info_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56990_b0_lrd_ctr_egr_eflex_action_profile_infot_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_ENTRY_LIMIT,
        .value = 60,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = true,
    },
};

static const bcmlrd_map_attr_t bcm56990_b0_lrd_ctr_egr_eflex_action_profile_infot_attr_group = {
    .attributes = 2,
    .attr = bcm56990_b0_lrd_ctr_egr_eflex_action_profile_infot_attr_entry,
};

static const bcmlrd_map_entry_t bcm56990_b0_lrd_bcmimm_ctr_egr_eflex_action_profile_info_entry[] = {
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
            /* handler: bcm56990_b0_lta_bcmimm_ctr_egr_eflex_action_profile_info_cth_handler */
            .handler_id = BCMLTD_TABLE_BCM56990_B0_LTA_BCMIMM_CTR_EGR_EFLEX_ACTION_PROFILE_INFO_CTH_HANDLER_ID
        }
    },
};
const bcmlrd_field_selector_t bcm56990_b0_lrd_ctr_egr_eflex_action_profile_info_map_select[] = {
    { /* Node:0, Type:ROOT, SHADOW_VALID */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_ROOT,
        .field_id = CTR_EGR_EFLEX_ACTION_PROFILE_INFOt_SHADOW_VALIDf,
        .group_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .entry_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .selection_parent = BCMLRD_INVALID_SELECTOR_INDEX,
        .group = BCMLRD_INVALID_SELECTOR_INDEX,
        .selector_id = BCMLRD_INVALID_SELECTOR_INDEX,
        .selector_value = BCMLRD_INVALID_SELECTOR_INDEX
    },
    { /* Node:1, Type:FIELD, SHADOW_POOL_ID */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_FIELD,
        .field_id = CTR_EGR_EFLEX_ACTION_PROFILE_INFOt_SHADOW_POOL_IDf,
        .group_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .entry_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .selection_parent = 0,
        .group = 0,
        .selector_id = CTR_EGR_EFLEX_ACTION_PROFILE_INFOt_SHADOW_VALIDf,
        .selector_value = TRUE
    },
};

const bcmlrd_field_selector_data_t bcm56990_b0_lrd_ctr_egr_eflex_action_profile_info_map_select_data = {
    .num_field_selector = 2,
    .field_selector = bcm56990_b0_lrd_ctr_egr_eflex_action_profile_info_map_select,
};

static const bcmlrd_map_group_t bcm56990_b0_lrd_ctr_egr_eflex_action_profile_info_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_CUSTOM,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56990_b0_lrd_bcmimm_ctr_egr_eflex_action_profile_info_entry
    },
};
const bcmlrd_map_t bcm56990_b0_lrd_ctr_egr_eflex_action_profile_info_map = {
    .src_id = CTR_EGR_EFLEX_ACTION_PROFILE_INFOt,
    .field_data = &bcm56990_b0_lrd_ctr_egr_eflex_action_profile_info_map_field_data,
    .groups = 1,
    .group  = bcm56990_b0_lrd_ctr_egr_eflex_action_profile_info_map_group,
    .table_attr = &bcm56990_b0_lrd_ctr_egr_eflex_action_profile_infot_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE,
    .sel = &bcm56990_b0_lrd_ctr_egr_eflex_action_profile_info_map_select_data,
};
