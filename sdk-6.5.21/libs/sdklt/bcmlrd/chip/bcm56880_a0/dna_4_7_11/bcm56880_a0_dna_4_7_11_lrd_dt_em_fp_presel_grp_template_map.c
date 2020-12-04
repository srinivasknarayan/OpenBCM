/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/npl/bcm56880_a0/dna_4_7_11/bcm56880_a0_dna_4_7_11_DT_EM_FP_PRESEL_GRP_TEMPLATE.map.ltl for
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
/* DT_EM_FP_PRESEL_GRP_TEMPLATE field init */
static const bcmlrd_field_data_t bcm56880_a0_dna_4_7_11_lrd_dt_em_fp_presel_grp_template_map_field_data_mmd[] = {
    { /* 0 DT_EM_FP_PRESEL_GRP_TEMPLATE_INDEX */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u32_0x1,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u32_0x1,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u32_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 1 ING_CMD_BUS_L2_IIF_OPAQUE_CTRL_ID */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 2 ING_CMD_BUS_L3_IIF_OPAQUE_CTRL_ID */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 3 ING_CMD_BUS_VFI_OPAQUE_CTRL_ID */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 4 ING_CMD_BUS_SVP_OPAQUE_CTRL_ID */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 5 ING_CMD_BUS_PROTOCOL_PKT_OPAQUE_CTRL_ID */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 6 ING_CMD_BUS_DEVICE_PORT_OPAQUE_CMD1 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 7 ING_CMD_BUS_HG3_FLAGS */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 8 ING_CMD_BUS_SYSTEM_OPCODE */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 9 ING_CMD_BUS_LOOPBACK_HDR_TYPE */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 10 ING_CMD_BUS_LOOPBACK_HDR_FLAGS */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 11 ING_CMD_BUS_FIXED_HVE_RESULT_SET_0 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 12 ING_CMD_BUS_FIXED_HVE_RESULT_SET_1 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 13 ING_CMD_BUS_FLEX_HVE_RESULT_SET_1 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 14 ING_CMD_BUS_NUM_OF_FWD_EXT_HEADERS */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x3,
      .depth = 0,
      .width = 2,
      .edata = NULL,
    },
    { /* 15 ING_CMD_BUS_SPANNING_TREE_STATE */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x3,
      .depth = 0,
      .width = 2,
      .edata = NULL,
    },
    { /* 16 ING_CMD_BUS_MY_STATION_1_HIT */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 17 ING_CMD_BUS_TUNNEL_PROCESSING_RESULTS_1 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 18 ING_CMD_BUS_PKT_FLOW_ELIGIBILITY */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 19 ING_CMD_BUS_LEARN_COMMANDS */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 20 ING_CMD_BUS_L4_VALID */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 21 INGRESS_PKT_OUTER_L2_HDR_VNTAG */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 22 INGRESS_PKT_SYS_HDR_LOOPBACK */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 23 INGRESS_PKT_OUTER_L3_L4_HDR_GRE_ROUT */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 24 INGRESS_PKT_INNER_L3_L4_HDR_TCP_FIRST_4BYTES */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 25 INGRESS_PKT_INNER_L3_L4_HDR_P_1588 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 26 INGRESS_PKT_OUTER_L3_L4_HDR_RARP */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 27 INGRESS_PKT_OUTER_L3_L4_HDR_NONE */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 28 INGRESS_PKT_OUTER_L3_L4_HDR_AUTH_EXT_2 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 29 INGRESS_PKT_OUTER_L2_HDR_ITAG */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 30 INGRESS_PKT_OUTER_L3_L4_HDR_AUTH_EXT_1 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 31 INGRESS_PKT_OUTER_L3_L4_HDR_UNKNOWN_L3 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 32 INGRESS_PKT_OUTER_L3_L4_HDR_MPLS4 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 33 INGRESS_PKT_OUTER_L2_HDR_NONE */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 34 INGRESS_PKT_INNER_L3_L4_HDR_FRAG_EXT_1 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 35 INGRESS_PKT_INNER_L3_L4_HDR_ETHERTYPE */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 36 INGRESS_PKT_OUTER_L3_L4_HDR_MPLS5 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 37 INGRESS_PKT_INNER_L2_HDR_OTAG */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 38 INGRESS_PKT_OUTER_L3_L4_HDR_TCP_FIRST_4BYTES */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 39 INGRESS_PKT_INNER_L2_HDR_ETAG */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 40 INGRESS_PKT_INNER_L3_L4_HDR_IPV6 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 41 INGRESS_PKT_OUTER_L2_HDR_HG3_EXT_0 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 42 INGRESS_PKT_INNER_L3_L4_HDR_ESP_EXT */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 43 INGRESS_PKT_INNER_L3_L4_HDR_FRAG_EXT_2 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 44 INGRESS_PKT_INNER_L3_L4_HDR_UDP */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 45 INGRESS_PKT_OUTER_L3_L4_HDR_IGMP */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 46 INGRESS_PKT_OUTER_L3_L4_HDR_IFA_METADATA */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 47 INGRESS_PKT_INNER_L2_HDR_SNAP_OR_LLC */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 48 INGRESS_PKT_OUTER_L3_L4_HDR_ARP */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 49 INGRESS_PKT_INNER_L3_L4_HDR_IGMP */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 50 INGRESS_PKT_OUTER_L3_L4_HDR_MPLS3 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 51 INGRESS_PKT_INNER_L3_L4_HDR_ARP */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 52 INGRESS_PKT_OUTER_L3_L4_HDR_MPLS2 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 53 INGRESS_PKT_OUTER_L3_L4_HDR_MPLS0 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 54 INGRESS_PKT_INNER_L2_HDR_VNTAG */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 55 INGRESS_PKT_INNER_L3_L4_HDR_RARP */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 56 INGRESS_PKT_INNER_L3_L4_HDR_ICMP */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 57 INGRESS_PKT_INNER_L2_HDR_NONE */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 58 INGRESS_PKT_OUTER_L3_L4_HDR_GPE */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 59 INGRESS_PKT_INNER_L2_HDR_ITAG */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 60 INGRESS_PKT_INNER_L3_L4_HDR_AUTH_EXT_1 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 61 INGRESS_PKT_OUTER_L3_L4_HDR_ESP_EXT */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 62 INGRESS_PKT_OUTER_L3_L4_HDR_P_1588 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 63 INGRESS_PKT_OUTER_L2_HDR_SNAP_OR_LLC */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 64 INGRESS_PKT_OUTER_L3_L4_HDR_FRAG_EXT_2 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 65 INGRESS_PKT_INNER_L2_HDR_L2 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 66 INGRESS_PKT_INNER_L3_L4_HDR_UNKNOWN_L4 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 67 INGRESS_PKT_OUTER_L3_L4_HDR_UNKNOWN_L4 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 68 INGRESS_PKT_OUTER_L3_L4_HDR_GRE_CHKSUM */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 69 INGRESS_PKT_OUTER_L3_L4_HDR_UNKNOWN_L5 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 70 INGRESS_PKT_OUTER_L2_HDR_L2 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 71 INGRESS_PKT_OUTER_L3_L4_HDR_VXLAN */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 72 INGRESS_PKT_OUTER_L2_HDR_OTAG */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 73 INGRESS_PKT_INNER_L3_L4_HDR_NONE */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 74 INGRESS_PKT_INNER_L3_L4_HDR_UNKNOWN_L3 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 75 INGRESS_PKT_OUTER_L3_L4_HDR_UDP */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 76 INGRESS_PKT_INNER_L3_L4_HDR_BFD */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 77 INGRESS_PKT_OUTER_L3_L4_HDR_MPLS1 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 78 INGRESS_PKT_INNER_L3_L4_HDR_TCP_LAST_16BYTES */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 79 INGRESS_PKT_OUTER_L2_HDR_ETAG */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 80 INGRESS_PKT_OUTER_L2_HDR_HG3_BASE */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 81 INGRESS_PKT_INNER_L3_L4_HDR_IPV4 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 82 INGRESS_PKT_INNER_L3_L4_HDR_AUTH_EXT_2 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 83 INGRESS_PKT_OUTER_L3_L4_HDR_MPLS6 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 84 INGRESS_PKT_OUTER_L3_L4_HDR_FRAG_EXT_1 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 85 INGRESS_PKT_OUTER_L3_L4_HDR_IPV4 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 86 INGRESS_PKT_OUTER_L3_L4_HDR_ICMP */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 87 INGRESS_PKT_SYS_HDR_NONE */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 88 INGRESS_PKT_INNER_L3_L4_HDR_UNKNOWN_L5 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 89 INGRESS_PKT_OUTER_L3_L4_HDR_GRE */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 90 INGRESS_PKT_OUTER_L3_L4_HDR_IPV6 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 91 INGRESS_PKT_OUTER_L3_L4_HDR_BFD */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 92 INGRESS_PKT_OUTER_L3_L4_HDR_MPLS_CW */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 93 INGRESS_PKT_OUTER_L3_L4_HDR_ETHERTYPE */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 94 INGRESS_PKT_OUTER_L3_L4_HDR_MPLS_ACH */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 95 INGRESS_PKT_OUTER_L3_L4_HDR_GRE_KEY */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 96 INGRESS_PKT_OUTER_L3_L4_HDR_TCP_LAST_16BYTES */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 97 INGRESS_PKT_OUTER_L3_L4_HDR_GRE_SEQ */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 98 DROP_DECISION */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56880_a0_dna_4_7_11_lrd_dt_em_fp_presel_grp_template_map_field_data = {
    .fields = 99,
    .field = bcm56880_a0_dna_4_7_11_lrd_dt_em_fp_presel_grp_template_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56880_a0_dna_4_7_11_lrd_dt_em_fp_presel_grp_templatet_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_ENTRY_LIMIT,
        .value = 1,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
};

static const bcmlrd_map_attr_t bcm56880_a0_dna_4_7_11_lrd_dt_em_fp_presel_grp_templatet_attr_group = {
    .attributes = 2,
    .attr = bcm56880_a0_dna_4_7_11_lrd_dt_em_fp_presel_grp_templatet_attr_entry,
};

static const bcmlrd_map_entry_t bcm56880_a0_dna_4_7_11_lrd_bcmimm_dt_em_fp_presel_grp_template_entry[] = {
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
            /* handler: bcm56880_a0_dna_4_7_11_lta_bcmimm_dt_em_fp_presel_grp_template_cth_handler */
            .handler_id = BCMLTD_TABLE_BCM56880_A0_DNA_4_7_11_LTA_BCMIMM_DT_EM_FP_PRESEL_GRP_TEMPLATE_CTH_HANDLER_ID
        }
    },
};
static const bcmlrd_map_group_t bcm56880_a0_dna_4_7_11_lrd_dt_em_fp_presel_grp_template_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_CUSTOM,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56880_a0_dna_4_7_11_lrd_bcmimm_dt_em_fp_presel_grp_template_entry
    },
};
const bcmlrd_map_t bcm56880_a0_dna_4_7_11_lrd_dt_em_fp_presel_grp_template_map = {
    .src_id = BCM56880_A0_DNA_4_7_11_DT_EM_FP_PRESEL_GRP_TEMPLATEt,
    .field_data = &bcm56880_a0_dna_4_7_11_lrd_dt_em_fp_presel_grp_template_map_field_data,
    .groups = 1,
    .group  = bcm56880_a0_dna_4_7_11_lrd_dt_em_fp_presel_grp_template_map_group,
    .table_attr = &bcm56880_a0_dna_4_7_11_lrd_dt_em_fp_presel_grp_templatet_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
