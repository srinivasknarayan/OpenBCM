/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/meter/bcm56780_a0/bcm56780_a0_METER_EGR_FP_GRANULARITY_INFO.map.ltl for
 *      bcm56780_a0
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
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_field_data.h>
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56780_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "bcm56780_a0_lrd_enumpool.h"
#include <bcmltd/bcmltd_handler.h>
/* METER_EGR_FP_GRANULARITY_INFO field init */
static const bcmlrd_field_data_t bcm56780_a0_lrd_meter_egr_fp_granularity_info_map_field_data_mmd[] = {
    { /* 0 METER_EGR_FP_GRANULARITY_INFO_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_lrd_ifd_u8_0x7,
      .depth = 0,
      .width = 3,
      .edata = NULL,
    },
    { /* 1 MIN_RATE_KBPS */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
    { /* 2 MAX_RATE_KBPS */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
    { /* 3 MIN_BURST_KBITS */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
    { /* 4 MAX_BURST_KBITS */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
    { /* 5 MIN_RATE_PPS */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
    { /* 6 MAX_RATE_PPS */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
    { /* 7 MIN_BURST_PKTS */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
    { /* 8 MAX_BURST_PKTS */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56780_a0_lrd_meter_egr_fp_granularity_info_map_field_data = {
    .fields = 9,
    .field = bcm56780_a0_lrd_meter_egr_fp_granularity_info_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56780_a0_lrd_meter_egr_fp_granularity_infot_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 7,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56780_a0_lrd_meter_egr_fp_granularity_infot_attr_group = {
    .attributes = 3,
    .attr = bcm56780_a0_lrd_meter_egr_fp_granularity_infot_attr_entry,
};

static const bcmlrd_map_entry_t bcm56780_a0_lrd_bcmcth_meter_egr_fp_granularity_info_entry[] = {
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
            /* handler: bcm56780_a0_lta_bcmcth_meter_egr_fp_granularity_info_cth_handler */
            .handler_id = BCMLTD_TABLE_BCM56780_A0_LTA_BCMCTH_METER_EGR_FP_GRANULARITY_INFO_CTH_HANDLER_ID
        }
    },
};
static const bcmlrd_map_group_t bcm56780_a0_lrd_meter_egr_fp_granularity_info_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_CUSTOM,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56780_a0_lrd_bcmcth_meter_egr_fp_granularity_info_entry
    },
};
const bcmlrd_map_t bcm56780_a0_lrd_meter_egr_fp_granularity_info_map = {
    .src_id = METER_EGR_FP_GRANULARITY_INFOt,
    .field_data = &bcm56780_a0_lrd_meter_egr_fp_granularity_info_map_field_data,
    .groups = 1,
    .group  = bcm56780_a0_lrd_meter_egr_fp_granularity_info_map_group,
    .table_attr = &bcm56780_a0_lrd_meter_egr_fp_granularity_infot_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE
};
