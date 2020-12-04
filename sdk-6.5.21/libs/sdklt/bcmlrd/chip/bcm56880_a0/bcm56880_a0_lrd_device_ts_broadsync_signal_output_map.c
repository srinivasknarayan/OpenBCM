/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/device/bcm56880_a0/bcm56880_a0_DEVICE_TS_BROADSYNC_SIGNAL_OUTPUT.map.ltl for
 *      bcm56880_a0
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
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_field_data.h>
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56880_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "bcm56880_a0_lrd_enumpool.h"
#include <bcmltd/bcmltd_handler.h>
/* DEVICE_TS_BROADSYNC_SIGNAL_OUTPUT field init */
static const bcmlrd_field_data_t bcm56880_a0_lrd_device_ts_broadsync_signal_output_map_field_data_mmd[] = {
    { /* 0 DEVICE_TS_BROADSYNC_SIGNAL_OUTPUT_ID */
      .flags = BCMLTD_FIELD_F_KEY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56880_a0_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_lrd_ifd_u32_0x5,
      .depth = 0,
      .width = 3,
      .edata = BCM56880_A0_LRD_DEVICE_TS_GPIO_PIN_T_DATA,
    },
    { /* 1 FREQUENCY */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_lrd_ifd_u32_0x1,
      .max = &bcm56880_a0_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
    { /* 2 OPERATIONAL_STATE */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56880_a0_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_lrd_ifd_u32_0x1,
      .depth = 0,
      .width = 1,
      .edata = BCMLTD_COMMON_DEVICE_TS_BROADSYNC_OPERATIONAL_STATE_T_DATA,
    },
};
const bcmlrd_map_field_data_t bcm56880_a0_lrd_device_ts_broadsync_signal_output_map_field_data = {
    .fields = 3,
    .field = bcm56880_a0_lrd_device_ts_broadsync_signal_output_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56880_a0_lrd_device_ts_broadsync_signal_outputt_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = TRUE,
    },
};

static const bcmlrd_map_attr_t bcm56880_a0_lrd_device_ts_broadsync_signal_outputt_attr_group = {
    .attributes = 1,
    .attr = bcm56880_a0_lrd_device_ts_broadsync_signal_outputt_attr_entry,
};

static const bcmlrd_map_entry_t bcm56880_a0_lrd_bcmimm_device_ts_broadsync_signal_output_entry[] = {
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
            /* handler: bcm56880_a0_lta_bcmimm_device_ts_broadsync_signal_output_cth_handler */
            .handler_id = BCMLTD_TABLE_BCM56880_A0_LTA_BCMIMM_DEVICE_TS_BROADSYNC_SIGNAL_OUTPUT_CTH_HANDLER_ID
        }
    },
};
static const bcmlrd_map_entry_t
bcm56880_a0_lrd_bcmltx_device_ts_broadsync_signal_output_validate_entry[] = {
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
            /* handler: bcm56880_a0_lta_bcmltx_device_ts_broadsync_signal_output_std_val_fv_handler */
            .handler_id = BCMLTD_VALIDATE_BCM56880_A0_LTA_BCMLTX_DEVICE_TS_BROADSYNC_SIGNAL_OUTPUT_STD_VAL_FV_HANDLER_ID
        }
    },
};
static const bcmlrd_map_group_t bcm56880_a0_lrd_device_ts_broadsync_signal_output_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_CUSTOM,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56880_a0_lrd_bcmimm_device_ts_broadsync_signal_output_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_VALIDATION,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56880_a0_lrd_bcmltx_device_ts_broadsync_signal_output_validate_entry
    },
};
const bcmlrd_map_t bcm56880_a0_lrd_device_ts_broadsync_signal_output_map = {
    .src_id = DEVICE_TS_BROADSYNC_SIGNAL_OUTPUTt,
    .field_data = &bcm56880_a0_lrd_device_ts_broadsync_signal_output_map_field_data,
    .groups = 2,
    .group  = bcm56880_a0_lrd_device_ts_broadsync_signal_output_map_group,
    .table_attr = &bcm56880_a0_lrd_device_ts_broadsync_signal_outputt_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
