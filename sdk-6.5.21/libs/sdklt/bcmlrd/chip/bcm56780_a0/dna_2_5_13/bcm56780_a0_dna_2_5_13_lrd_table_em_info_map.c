/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/table/bcm56780_a0/bcm56780_a0_TABLE_EM_INFO.map.ltl for
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
#include <bcmltd/id/bcm56780_a0/dna_2_5_13/bcm56780_a0_dna_2_5_13_ltd_id.h> /* LTID_T */
#include <bcmltd/id/bcmltd_common_id.h> /* LTID_T */
#include <bcmltd/bcmltd_handler.h>
/* TABLE_EM_INFO field init */
static const bcmlrd_field_data_t bcm56780_a0_dna_2_5_13_lrd_table_em_info_map_field_data_mmd[] = {
    { /* 0 TABLE_ID */
      .flags = BCMLTD_FIELD_F_KEY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = BCM56780_A0_DNA_2_5_13_LRD_LTID_T_DATA,
    },
    { /* 1 LOOKUP_CNT */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 2 GROUP_CNT */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 3 DEVICE_EM_GROUP_ID */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x120,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x120,
      .depth = 64,
      .width = 9,
      .edata = BCM56780_A0_DNA_2_5_13_LRD_DEVICE_EM_GROUP_ID_VALUE_T_DATA,
    },
};
const bcmlrd_map_field_data_t bcm56780_a0_dna_2_5_13_lrd_table_em_info_map_field_data = {
    .fields = 4,
    .field = bcm56780_a0_dna_2_5_13_lrd_table_em_info_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56780_a0_dna_2_5_13_lrd_table_em_infot_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_ENTRY_LIMIT,
        .value = 102,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
};

static const bcmlrd_map_attr_t bcm56780_a0_dna_2_5_13_lrd_table_em_infot_attr_group = {
    .attributes = 2,
    .attr = bcm56780_a0_dna_2_5_13_lrd_table_em_infot_attr_entry,
};

static const bcmlrd_map_entry_t bcm56780_a0_dna_2_5_13_lrd_bcmimm_table_em_info_entry[] = {
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
            /* handler: bcm56780_a0_dna_2_5_13_lta_bcmimm_table_em_info_cth_handler */
            .handler_id = BCMLTD_TABLE_BCM56780_A0_DNA_2_5_13_LTA_BCMIMM_TABLE_EM_INFO_CTH_HANDLER_ID
        }
    },
};
static const bcmlrd_map_group_t bcm56780_a0_dna_2_5_13_lrd_table_em_info_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_CUSTOM,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56780_a0_dna_2_5_13_lrd_bcmimm_table_em_info_entry
    },
};
const bcmlrd_map_t bcm56780_a0_dna_2_5_13_lrd_table_em_info_map = {
    .src_id = TABLE_EM_INFOt,
    .field_data = &bcm56780_a0_dna_2_5_13_lrd_table_em_info_map_field_data,
    .groups = 1,
    .group  = bcm56780_a0_dna_2_5_13_lrd_table_em_info_map_group,
    .table_attr = &bcm56780_a0_dna_2_5_13_lrd_table_em_infot_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE
};
