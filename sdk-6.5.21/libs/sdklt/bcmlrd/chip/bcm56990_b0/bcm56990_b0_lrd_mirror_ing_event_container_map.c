/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/mirror/bcm56990_b0/bcm56990_b0_MIRROR_ING_EVENT_CONTAINER.map.ltl for
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
/* MIRROR_ING_EVENT_CONTAINER field init */
static const bcmlrd_field_data_t bcm56990_b0_lrd_mirror_ing_event_container_map_field_data_mmd[] = {
    { /* 0 MIRROR_ING_EVENT_CONTAINER_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_b0_lrd_ifd_u8_0x0,
      .def = &bcm56990_b0_lrd_ifd_u8_0x0,
      .max = &bcm56990_b0_lrd_ifd_u8_0x3,
      .depth = 0,
      .width = 2,
      .edata = NULL,
    },
    { /* 1 MIRROR */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_b0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 2 MIRROR_INSTANCE_ID */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_u8_0x0,
      .def = &bcm56990_b0_lrd_ifd_u8_0x0,
      .max = &bcm56990_b0_lrd_ifd_u8_0x7,
      .depth = 0,
      .width = 3,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56990_b0_lrd_mirror_ing_event_container_map_field_data = {
    .fields = 3,
    .field = bcm56990_b0_lrd_mirror_ing_event_container_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56990_b0_lrd_mirror_ing_event_containert_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TRACK_INDEX_MAX_INDEX,
        .value = 3,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TRACK_INDEX_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56990_b0_lrd_mirror_ing_event_containert_attr_group = {
    .attributes = 3,
    .attr = bcm56990_b0_lrd_mirror_ing_event_containert_attr_entry,
};


const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_copy_field_src_field_desc_s26[1] = {
    {
        .field_id  = MIRROR_ING_EVENT_CONTAINERt_MIRROR_ING_EVENT_CONTAINER_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 3,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_copy_field_mirror_ing_event_container_dst_field_desc_d3[1] = {
    {
        .field_id  = BCMLRD_FIELD_TRACK_INDEX,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_copy_field_xfrm_handler_fwd_s26_d3_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_COPY_FIELD_XFRM_HANDLER_FWD_S26_D3_ID,
    .src_fields = 1,
    .src = bcm56990_b0_lrd_bcmltx_copy_field_src_field_desc_s26,
    .dst_fields = 1,
    .dst = bcm56990_b0_lrd_bcmltx_copy_field_mirror_ing_event_container_dst_field_desc_d3,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_copy_field_xfrm_handler_rev_s26_d3_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_COPY_FIELD_XFRM_HANDLER_REV_S26_D3_ID,
    .src_fields = 1,
    .src = bcm56990_b0_lrd_bcmltx_copy_field_mirror_ing_event_container_dst_field_desc_d3,
    .dst_fields = 1,
    .dst = bcm56990_b0_lrd_bcmltx_copy_field_src_field_desc_s26,
};


static const bcmlrd_map_entry_t bcm56990_b0_lrd_mirror_ing_event_containert_ing_mirror_on_drop_config_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = MIRROR_ENABLEf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MIRROR_ING_EVENT_CONTAINERt_MIRRORf,
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
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = MTP_INDEX0f,
            .field_idx = 0,
            .minbit    = 4,
            .maxbit    = 6,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MIRROR_ING_EVENT_CONTAINERt_MIRROR_INSTANCE_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 2,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = MIRROR_ENABLEf,
            .field_idx = 0,
            .minbit    = 1,
            .maxbit    = 1,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MIRROR_ING_EVENT_CONTAINERt_MIRRORf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = MTP_INDEX1f,
            .field_idx = 0,
            .minbit    = 7,
            .maxbit    = 9,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MIRROR_ING_EVENT_CONTAINERt_MIRROR_INSTANCE_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 2,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = MIRROR_ENABLEf,
            .field_idx = 0,
            .minbit    = 2,
            .maxbit    = 2,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MIRROR_ING_EVENT_CONTAINERt_MIRRORf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 5 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = MTP_INDEX2f,
            .field_idx = 0,
            .minbit    = 10,
            .maxbit    = 12,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MIRROR_ING_EVENT_CONTAINERt_MIRROR_INSTANCE_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 2,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 6 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = MIRROR_ENABLEf,
            .field_idx = 0,
            .minbit    = 3,
            .maxbit    = 3,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MIRROR_ING_EVENT_CONTAINERt_MIRRORf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 7 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = MTP_INDEX3f,
            .field_idx = 0,
            .minbit    = 13,
            .maxbit    = 15,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MIRROR_ING_EVENT_CONTAINERt_MIRROR_INSTANCE_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 2,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 8 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_KEY_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56990_b0_lta_bcmltx_copy_field_xfrm_handler_fwd_s26_d3 */
                .desc = &bcm56990_b0_lta_bcmltx_copy_field_xfrm_handler_fwd_s26_d3_desc,
            },
        },
    },
    { /* 9 */
        .entry_type = BCMLRD_MAP_ENTRY_REV_KEY_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56990_b0_lta_bcmltx_copy_field_xfrm_handler_rev_s26_d3 */
                .desc = &bcm56990_b0_lta_bcmltx_copy_field_xfrm_handler_rev_s26_d3_desc,
            },
        },
    },
};
const bcmlrd_field_selector_t bcm56990_b0_lrd_mirror_ing_event_container_map_select[] = {
    { /* Node:0, Type:ROOT, MIRROR_ING_EVENT_CONTAINER_ID */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_ROOT,
        .field_id = MIRROR_ING_EVENT_CONTAINERt_MIRROR_ING_EVENT_CONTAINER_IDf,
        .group_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .entry_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .selection_parent = BCMLRD_INVALID_SELECTOR_INDEX,
        .group = BCMLRD_INVALID_SELECTOR_INDEX,
        .selector_id = BCMLRD_INVALID_SELECTOR_INDEX,
        .selector_value = BCMLRD_INVALID_SELECTOR_INDEX
    },
    { /* Node:1, Type:Directmap, MIRROR:ING_MIRROR_ON_DROP_CONFIG.MIRROR_ENABLE */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = MIRROR_ING_EVENT_CONTAINERt_MIRRORf,
        .group_index = 0,
        .entry_index = 0,
        .selection_parent = 0,
        .group = 0,
        .selector_id = MIRROR_ING_EVENT_CONTAINERt_MIRROR_ING_EVENT_CONTAINER_IDf,
        .selector_value = 0
    },
    { /* Node:2, Type:Directmap, MIRROR_INSTANCE_ID:ING_MIRROR_ON_DROP_CONFIG.MTP_INDEX0 */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = MIRROR_ING_EVENT_CONTAINERt_MIRROR_INSTANCE_IDf,
        .group_index = 0,
        .entry_index = 1,
        .selection_parent = 0,
        .group = 0,
        .selector_id = MIRROR_ING_EVENT_CONTAINERt_MIRROR_ING_EVENT_CONTAINER_IDf,
        .selector_value = 0
    },
    { /* Node:3, Type:Directmap, MIRROR:ING_MIRROR_ON_DROP_CONFIG.MIRROR_ENABLE */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = MIRROR_ING_EVENT_CONTAINERt_MIRRORf,
        .group_index = 0,
        .entry_index = 2,
        .selection_parent = 0,
        .group = 1,
        .selector_id = MIRROR_ING_EVENT_CONTAINERt_MIRROR_ING_EVENT_CONTAINER_IDf,
        .selector_value = 1
    },
    { /* Node:4, Type:Directmap, MIRROR_INSTANCE_ID:ING_MIRROR_ON_DROP_CONFIG.MTP_INDEX1 */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = MIRROR_ING_EVENT_CONTAINERt_MIRROR_INSTANCE_IDf,
        .group_index = 0,
        .entry_index = 3,
        .selection_parent = 0,
        .group = 1,
        .selector_id = MIRROR_ING_EVENT_CONTAINERt_MIRROR_ING_EVENT_CONTAINER_IDf,
        .selector_value = 1
    },
    { /* Node:5, Type:Directmap, MIRROR:ING_MIRROR_ON_DROP_CONFIG.MIRROR_ENABLE */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = MIRROR_ING_EVENT_CONTAINERt_MIRRORf,
        .group_index = 0,
        .entry_index = 4,
        .selection_parent = 0,
        .group = 2,
        .selector_id = MIRROR_ING_EVENT_CONTAINERt_MIRROR_ING_EVENT_CONTAINER_IDf,
        .selector_value = 2
    },
    { /* Node:6, Type:Directmap, MIRROR_INSTANCE_ID:ING_MIRROR_ON_DROP_CONFIG.MTP_INDEX2 */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = MIRROR_ING_EVENT_CONTAINERt_MIRROR_INSTANCE_IDf,
        .group_index = 0,
        .entry_index = 5,
        .selection_parent = 0,
        .group = 2,
        .selector_id = MIRROR_ING_EVENT_CONTAINERt_MIRROR_ING_EVENT_CONTAINER_IDf,
        .selector_value = 2
    },
    { /* Node:7, Type:Directmap, MIRROR:ING_MIRROR_ON_DROP_CONFIG.MIRROR_ENABLE */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = MIRROR_ING_EVENT_CONTAINERt_MIRRORf,
        .group_index = 0,
        .entry_index = 6,
        .selection_parent = 0,
        .group = 3,
        .selector_id = MIRROR_ING_EVENT_CONTAINERt_MIRROR_ING_EVENT_CONTAINER_IDf,
        .selector_value = 3
    },
    { /* Node:8, Type:Directmap, MIRROR_INSTANCE_ID:ING_MIRROR_ON_DROP_CONFIG.MTP_INDEX3 */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = MIRROR_ING_EVENT_CONTAINERt_MIRROR_INSTANCE_IDf,
        .group_index = 0,
        .entry_index = 7,
        .selection_parent = 0,
        .group = 3,
        .selector_id = MIRROR_ING_EVENT_CONTAINERt_MIRROR_ING_EVENT_CONTAINER_IDf,
        .selector_value = 3
    },
};

const bcmlrd_field_selector_data_t bcm56990_b0_lrd_mirror_ing_event_container_map_select_data = {
    .num_field_selector = 9,
    .field_selector = bcm56990_b0_lrd_mirror_ing_event_container_map_select,
};

static const bcmlrd_map_group_t bcm56990_b0_lrd_mirror_ing_event_container_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = ING_MIRROR_ON_DROP_CONFIGr,
        },
        .entries = 10,
        .entry = bcm56990_b0_lrd_mirror_ing_event_containert_ing_mirror_on_drop_config_map_entry
    },
};
const bcmlrd_map_t bcm56990_b0_lrd_mirror_ing_event_container_map = {
    .src_id = MIRROR_ING_EVENT_CONTAINERt,
    .field_data = &bcm56990_b0_lrd_mirror_ing_event_container_map_field_data,
    .groups = 1,
    .group  = bcm56990_b0_lrd_mirror_ing_event_container_map_group,
    .table_attr = &bcm56990_b0_lrd_mirror_ing_event_containert_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE,
    .sel = &bcm56990_b0_lrd_mirror_ing_event_container_map_select_data,
};
