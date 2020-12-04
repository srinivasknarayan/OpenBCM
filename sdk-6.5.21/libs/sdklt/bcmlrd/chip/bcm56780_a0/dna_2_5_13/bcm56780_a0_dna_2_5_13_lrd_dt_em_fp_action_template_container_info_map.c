/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/npl/bcm56780_a0/dna_2_5_13/bcm56780_a0_dna_2_5_13_DT_EM_FP_ACTION_TEMPLATE_CONTAINER_INFO.map.ltl for
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
/* DT_EM_FP_ACTION_TEMPLATE_CONTAINER_INFO field init */
static const bcmlrd_field_data_t bcm56780_a0_dna_2_5_13_lrd_dt_em_fp_action_template_container_info_map_field_data_mmd[] = {
    { /* 0 FIELD_ACTION */
      .flags = BCMLTD_FIELD_F_KEY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x1,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x1,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0xd,
      .depth = 0,
      .width = 4,
      .edata = BCM56780_A0_DNA_2_5_13_LRD_DT_EM_FP_ACTION_TEMPLATE_FIELDS_T_DATA,
    },
    { /* 1 NUM_CONTAINERS */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 2 CONT_ID */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0xffff,
      .depth = 1,
      .width = 16,
      .edata = NULL,
    },
    { /* 3 CONT_SIZE */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0xffff,
      .depth = 1,
      .width = 16,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56780_a0_dna_2_5_13_lrd_dt_em_fp_action_template_container_info_map_field_data = {
    .fields = 4,
    .field = bcm56780_a0_dna_2_5_13_lrd_dt_em_fp_action_template_container_info_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56780_a0_dna_2_5_13_lrd_dt_em_fp_action_template_container_infot_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_ENTRY_LIMIT,
        .value = 1,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
};

static const bcmlrd_map_attr_t bcm56780_a0_dna_2_5_13_lrd_dt_em_fp_action_template_container_infot_attr_group = {
    .attributes = 2,
    .attr = bcm56780_a0_dna_2_5_13_lrd_dt_em_fp_action_template_container_infot_attr_entry,
};

static const bcmlrd_map_entry_t bcm56780_a0_dna_2_5_13_lrd_bcmfp_dt_em_fp_action_template_container_info_entry[] = {
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
            /* handler: bcm56780_a0_dna_2_5_13_lta_bcmfp_dt_em_fp_action_template_container_info_cth_handler */
            .handler_id = BCMLTD_TABLE_BCM56780_A0_DNA_2_5_13_LTA_BCMFP_DT_EM_FP_ACTION_TEMPLATE_CONTAINER_INFO_CTH_HANDLER_ID
        }
    },
};
static const bcmlrd_map_group_t bcm56780_a0_dna_2_5_13_lrd_dt_em_fp_action_template_container_info_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_CUSTOM,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56780_a0_dna_2_5_13_lrd_bcmfp_dt_em_fp_action_template_container_info_entry
    },
};
const bcmlrd_map_t bcm56780_a0_dna_2_5_13_lrd_dt_em_fp_action_template_container_info_map = {
    .src_id = BCM56780_A0_DNA_2_5_13_DT_EM_FP_ACTION_TEMPLATE_CONTAINER_INFOt,
    .field_data = &bcm56780_a0_dna_2_5_13_lrd_dt_em_fp_action_template_container_info_map_field_data,
    .groups = 1,
    .group  = bcm56780_a0_dna_2_5_13_lrd_dt_em_fp_action_template_container_info_map_group,
    .table_attr = &bcm56780_a0_dna_2_5_13_lrd_dt_em_fp_action_template_container_infot_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE
};
