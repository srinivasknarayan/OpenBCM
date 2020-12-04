/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/ctr/bcm56780_a0/bcm56780_a0_CTR_SEC_DECRYPT_MACSEC_SA_POLICY.map.ltl for
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
/* CTR_SEC_DECRYPT_MACSEC_SA_POLICY field init */
static const bcmlrd_field_data_t bcm56780_a0_lrd_ctr_sec_decrypt_macsec_sa_policy_map_field_data_mmd[] = {
    { /* 0 SEC_BLOCK_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_lrd_ifd_u8_0x5,
      .depth = 0,
      .width = 3,
      .edata = NULL,
    },
    { /* 1 SEC_DECRYPT_MACSEC_SA_POLICY_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0x7ff,
      .depth = 0,
      .width = 11,
      .edata = NULL,
    },
    { /* 2 STRICT_UNUSED_SA_PKTS */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_u64_0x0,
      .def = &bcm56780_a0_lrd_ifd_u64_0x0,
      .max = &bcm56780_a0_lrd_ifd_u64_0xffffffffff,
      .depth = 0,
      .width = 40,
      .edata = NULL,
    },
    { /* 3 STRICT_INVALID_PKTS */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_u64_0x0,
      .def = &bcm56780_a0_lrd_ifd_u64_0x0,
      .max = &bcm56780_a0_lrd_ifd_u64_0xffffffffff,
      .depth = 0,
      .width = 40,
      .edata = NULL,
    },
    { /* 4 UNUSED_SA_PKTS */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_u64_0x0,
      .def = &bcm56780_a0_lrd_ifd_u64_0x0,
      .max = &bcm56780_a0_lrd_ifd_u64_0xffffffffff,
      .depth = 0,
      .width = 40,
      .edata = NULL,
    },
    { /* 5 INVALID_PKTS */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_u64_0x0,
      .def = &bcm56780_a0_lrd_ifd_u64_0x0,
      .max = &bcm56780_a0_lrd_ifd_u64_0xffffffffff,
      .depth = 0,
      .width = 40,
      .edata = NULL,
    },
    { /* 6 OK_PKTS */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_u64_0x0,
      .def = &bcm56780_a0_lrd_ifd_u64_0x0,
      .max = &bcm56780_a0_lrd_ifd_u64_0xffffffffff,
      .depth = 0,
      .width = 40,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56780_a0_lrd_ctr_sec_decrypt_macsec_sa_policy_map_field_data = {
    .fields = 7,
    .field = bcm56780_a0_lrd_ctr_sec_decrypt_macsec_sa_policy_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56780_a0_lrd_ctr_sec_decrypt_macsec_sa_policyt_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INSTANCE_MAX_INDEX,
        .value = 5,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INSTANCE_MIN_INDEX,
        .value = 0,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = TRUE,
    },
    { /* 3 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_SHARED_INDEX,
        .value = CTR_SEC_DECRYPT_MACSEC_SA_POLICYt,
    },
    { /* 4 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 2047,
    },
    { /* 5 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56780_a0_lrd_ctr_sec_decrypt_macsec_sa_policyt_attr_group = {
    .attributes = 6,
    .attr = bcm56780_a0_lrd_ctr_sec_decrypt_macsec_sa_policyt_attr_entry,
};

static const bcmlrd_map_entry_t bcm56780_a0_lrd_ctr_sec_decrypt_macsec_sa_policyt_isec_mib_sa_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_INSTANCE,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 2,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = CTR_SEC_DECRYPT_MACSEC_SA_POLICYt_SEC_BLOCK_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 2,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_INDEX,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 10,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = CTR_SEC_DECRYPT_MACSEC_SA_POLICYt_SEC_DECRYPT_MACSEC_SA_POLICY_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 10,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = SECYRXSASTATSNOTUSINGSAPKTSf,
            .field_idx = 0,
            .minbit    = 256,
            .maxbit    = 295,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = CTR_SEC_DECRYPT_MACSEC_SA_POLICYt_STRICT_UNUSED_SA_PKTSf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 39,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = SECYRXSASTATSNOTVALIDPKTSf,
            .field_idx = 0,
            .minbit    = 192,
            .maxbit    = 231,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = CTR_SEC_DECRYPT_MACSEC_SA_POLICYt_STRICT_INVALID_PKTSf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 39,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = SECYRXSASTATSUNUSEDSAPKTSf,
            .field_idx = 0,
            .minbit    = 128,
            .maxbit    = 167,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = CTR_SEC_DECRYPT_MACSEC_SA_POLICYt_UNUSED_SA_PKTSf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 39,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 5 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = SECYRXSASTATSINVALIDPKTSf,
            .field_idx = 0,
            .minbit    = 64,
            .maxbit    = 103,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = CTR_SEC_DECRYPT_MACSEC_SA_POLICYt_INVALID_PKTSf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 39,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 6 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = SECYRXSASTATSOKPKTSf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 39,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = CTR_SEC_DECRYPT_MACSEC_SA_POLICYt_OK_PKTSf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 39,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
};
static const bcmlrd_map_entry_t
bcm56780_a0_lrd_bcmltx_ctr_sec_decrypt_macsec_sa_policy_table_entry_limit_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_TABLE_ENTRY_LIMIT_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            /* handler: bcm56780_a0_lta_bcmltx_ctr_sec_decrypt_macsec_sa_policy_sec_valid_table_entry_limit_handler */
            .handler_id = BCMLTD_TABLE_ENTRY_LIMIT_BCM56780_A0_LTA_BCMLTX_CTR_SEC_DECRYPT_MACSEC_SA_POLICY_SEC_VALID_TABLE_ENTRY_LIMIT_HANDLER_ID
        }
    },
};
static const bcmlrd_map_group_t bcm56780_a0_lrd_ctr_sec_decrypt_macsec_sa_policy_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = ISEC_MIB_SAm,
        },
        .entries = 7,
        .entry = bcm56780_a0_lrd_ctr_sec_decrypt_macsec_sa_policyt_isec_mib_sa_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_TABLE_ENTRY_LIMIT,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56780_a0_lrd_bcmltx_ctr_sec_decrypt_macsec_sa_policy_table_entry_limit_entry
    },
};
const bcmlrd_map_t bcm56780_a0_lrd_ctr_sec_decrypt_macsec_sa_policy_map = {
    .src_id = CTR_SEC_DECRYPT_MACSEC_SA_POLICYt,
    .field_data = &bcm56780_a0_lrd_ctr_sec_decrypt_macsec_sa_policy_map_field_data,
    .groups = 2,
    .group  = bcm56780_a0_lrd_ctr_sec_decrypt_macsec_sa_policy_map_group,
    .table_attr = &bcm56780_a0_lrd_ctr_sec_decrypt_macsec_sa_policyt_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
