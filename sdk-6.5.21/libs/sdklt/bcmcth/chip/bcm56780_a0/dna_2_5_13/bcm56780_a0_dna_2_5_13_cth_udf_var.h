/*****************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by xfc_map_parser
 * from the NPL output file(s) YML.
 * Edits to this file will be lost when it is regenerated.
 *
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 * All Rights Reserved.$
 *
 * Tool Path: $SDK/INTERNAL/fltg/xfc_map_parser
 */


/*!
 *.UDF data header file for generated data
 */

#ifndef BCM56780_A0_DNA_2_5_13_CTH_UDF_VAR_H
#define BCM56780_A0_DNA_2_5_13_CTH_UDF_VAR_H

#include <sal/sal_libc.h>
#include <shr/shr_error.h>
#include <bcmltd/bcmltd_types.h>
#include <bcmcth/bcmcth_udf_internal.h>

/*! Maximum entries in IPARSER_HFE_POLICY table. */
#define BCM56780_A0_DNA_2_5_13_UDF_IPARSER_HFE_POLICY_INDEX_MAX                     64

/*! Maximum  commands per entry in IPARSER_HFE_POLICY table. */
#define BCM56780_A0_DNA_2_5_13_UDF_IPARSER_HFE_POLICY_COMMAND_MAX                   20

/*! Enum defines abstract packet headers for UDF extraction. */
typedef enum bcm56780_a0_dna_2_5_13_udf_hdr_format_e {
    /*! INNER_L3_L4_HDR - ICMP */
    BCM56780_A0_DNA_2_5_13_UDF_INNER_L3_L4_HDR_ICMP               = 0,

    /*! OUTER_L3_L4_HDR - PROG_EXT_2 */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_PROG_EXT_2         = 1,

    /*! OUTER_L3_L4_HDR - PROG_EXT_1 */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_PROG_EXT_1         = 2,

    /*! OUTER_L3_L4_HDR - ESP_EXT */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_ESP_EXT            = 3,

    /*! INNER_L3_L4_HDR - TCP_LAST_16BYTES */
    BCM56780_A0_DNA_2_5_13_UDF_INNER_L3_L4_HDR_TCP_LAST_16BYTES   = 4,

    /*! INNER_L3_L4_HDR - BFD */
    BCM56780_A0_DNA_2_5_13_UDF_INNER_L3_L4_HDR_BFD                = 5,

    /*! OUTER_L3_L4_HDR - GRE */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_GRE                = 6,

    /*! INNER_L3_L4_HDR - ETHERTYPE */
    BCM56780_A0_DNA_2_5_13_UDF_INNER_L3_L4_HDR_ETHERTYPE          = 7,

    /*! OUTER_L3_L4_HDR - UNKNOWN_L3 */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_UNKNOWN_L3         = 8,

    /*! OUTER_L3_L4_HDR - IFA_HEADER */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_IFA_HEADER         = 9,

    /*! INNER_L3_L4_HDR - RARP */
    BCM56780_A0_DNA_2_5_13_UDF_INNER_L3_L4_HDR_RARP               = 10,

    /*! OUTER_L3_L4_HDR - GRE_SEQ */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_GRE_SEQ            = 11,

    /*! OUTER_L3_L4_HDR - UNKNOWN_L5 */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_UNKNOWN_L5         = 12,

    /*! OUTER_L3_L4_HDR - UNKNOWN_L4 */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_UNKNOWN_L4         = 13,

    /*! INNER_L3_L4_HDR - ROUT_EXT_2 */
    BCM56780_A0_DNA_2_5_13_UDF_INNER_L3_L4_HDR_ROUT_EXT_2         = 14,

    /*! OUTER_L3_L4_HDR - ETHERTYPE */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_ETHERTYPE          = 15,

    /*! INNER_L3_L4_HDR - ROUT_EXT_1 */
    BCM56780_A0_DNA_2_5_13_UDF_INNER_L3_L4_HDR_ROUT_EXT_1         = 16,

    /*! INNER_L3_L4_HDR - DEST_OPT_EXT_2 */
    BCM56780_A0_DNA_2_5_13_UDF_INNER_L3_L4_HDR_DEST_OPT_EXT_2     = 17,

    /*! OUTER_L3_L4_HDR - FRAG_EXT_2 */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_FRAG_EXT_2         = 18,

    /*! OUTER_L3_L4_HDR - FRAG_EXT_1 */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_FRAG_EXT_1         = 19,

    /*! INNER_L3_L4_HDR - DEST_OPT_EXT_1 */
    BCM56780_A0_DNA_2_5_13_UDF_INNER_L3_L4_HDR_DEST_OPT_EXT_1     = 20,

    /*! OUTER_L3_L4_HDR - IGMP */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_IGMP               = 21,

    /*! INNER_L3_L4_HDR - WESP_EXT_2 */
    BCM56780_A0_DNA_2_5_13_UDF_INNER_L3_L4_HDR_WESP_EXT_2         = 22,

    /*! INNER_L3_L4_HDR - IGMP */
    BCM56780_A0_DNA_2_5_13_UDF_INNER_L3_L4_HDR_IGMP               = 23,

    /*! OUTER_L3_L4_HDR - DEST_OPT_EXT_2 */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_DEST_OPT_EXT_2     = 24,

    /*! OUTER_L2_HDR - ITAG */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L2_HDR_ITAG                  = 25,

    /*! OUTER_L2_HDR - L2 */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L2_HDR_L2                    = 26,

    /*! OUTER_L3_L4_HDR - ARP */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_ARP                = 27,

    /*! INNER_L3_L4_HDR - ARP */
    BCM56780_A0_DNA_2_5_13_UDF_INNER_L3_L4_HDR_ARP                = 28,

    /*! OUTER_L3_L4_HDR - GRE_KEY */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_GRE_KEY            = 29,

    /*! INNER_L3_L4_HDR - TCP_FIRST_4BYTES */
    BCM56780_A0_DNA_2_5_13_UDF_INNER_L3_L4_HDR_TCP_FIRST_4BYTES   = 30,

    /*! OUTER_L3_L4_HDR - P_1588 */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_P_1588             = 31,

    /*! OUTER_L3_L4_HDR - HOP_BY_HOP_EXT_2 */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_HOP_BY_HOP_EXT_2   = 32,

    /*! OUTER_L3_L4_HDR - HOP_BY_HOP_EXT_1 */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_HOP_BY_HOP_EXT_1   = 33,

    /*! OUTER_L3_L4_HDR - TCP_FIRST_4BYTES */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_TCP_FIRST_4BYTES   = 34,

    /*! OUTER_L3_L4_HDR - MPLS_LABEL_2 */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_MPLS_LABEL_2       = 35,

    /*! INNER_L2_HDR - CNTAG */
    BCM56780_A0_DNA_2_5_13_UDF_INNER_L2_HDR_CNTAG                 = 36,

    /*! INNER_L3_L4_HDR - ESP_EXT */
    BCM56780_A0_DNA_2_5_13_UDF_INNER_L3_L4_HDR_ESP_EXT            = 37,

    /*! OUTER_L3_L4_HDR - MPLS_LABEL_6 */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_MPLS_LABEL_6       = 38,

    /*! INNER_L3_L4_HDR - AUTH_EXT_2 */
    BCM56780_A0_DNA_2_5_13_UDF_INNER_L3_L4_HDR_AUTH_EXT_2         = 39,

    /*! INNER_L2_HDR - ETAG */
    BCM56780_A0_DNA_2_5_13_UDF_INNER_L2_HDR_ETAG                  = 40,

    /*! INNER_L3_L4_HDR - AUTH_EXT_1 */
    BCM56780_A0_DNA_2_5_13_UDF_INNER_L3_L4_HDR_AUTH_EXT_1         = 41,

    /*! INNER_L3_L4_HDR - P_1588 */
    BCM56780_A0_DNA_2_5_13_UDF_INNER_L3_L4_HDR_P_1588             = 42,

    /*! INNER_L2_HDR - ITAG */
    BCM56780_A0_DNA_2_5_13_UDF_INNER_L2_HDR_ITAG                  = 43,

    /*! INNER_L3_L4_HDR - IPV6 */
    BCM56780_A0_DNA_2_5_13_UDF_INNER_L3_L4_HDR_IPV6               = 44,

    /*! INNER_L3_L4_HDR - IPV4 */
    BCM56780_A0_DNA_2_5_13_UDF_INNER_L3_L4_HDR_IPV4               = 45,

    /*! OUTER_L2_HDR - SVTAG */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L2_HDR_SVTAG                 = 46,

    /*! OUTER_L2_HDR - CNTAG */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L2_HDR_CNTAG                 = 47,

    /*! OUTER_L2_HDR - HG3_EXT_0 */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L2_HDR_HG3_EXT_0             = 48,

    /*! OUTER_L3_L4_HDR - MPLS_LABEL_1 */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_MPLS_LABEL_1       = 49,

    /*! OUTER_L2_HDR - ETAG */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L2_HDR_ETAG                  = 50,

    /*! INNER_L2_HDR - L2 */
    BCM56780_A0_DNA_2_5_13_UDF_INNER_L2_HDR_L2                    = 51,

    /*! INNER_L3_L4_HDR - WESP_EXT_1 */
    BCM56780_A0_DNA_2_5_13_UDF_INNER_L3_L4_HDR_WESP_EXT_1         = 52,

    /*! INNER_L3_L4_HDR - PROG_EXT_2 */
    BCM56780_A0_DNA_2_5_13_UDF_INNER_L3_L4_HDR_PROG_EXT_2         = 53,

    /*! OUTER_L3_L4_HDR - MPLS_CW */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_MPLS_CW            = 54,

    /*! INNER_L2_HDR - SNAP_OR_LLC */
    BCM56780_A0_DNA_2_5_13_UDF_INNER_L2_HDR_SNAP_OR_LLC           = 55,

    /*! OUTER_L3_L4_HDR - RARP */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_RARP               = 56,

    /*! OUTER_L3_L4_HDR - BFD */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_BFD                = 57,

    /*! OUTER_L3_L4_HDR - MPLS_LABEL_3 */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_MPLS_LABEL_3       = 58,

    /*! OUTER_L3_L4_HDR - IPV4 */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_IPV4               = 59,

    /*! OUTER_L3_L4_HDR - IPV6 */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_IPV6               = 60,

    /*! OUTER_L3_L4_HDR - GPE */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_GPE                = 61,

    /*! INNER_L2_HDR - OTAG */
    BCM56780_A0_DNA_2_5_13_UDF_INNER_L2_HDR_OTAG                  = 62,

    /*! OUTER_L3_L4_HDR - IFA_METADATA */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_IFA_METADATA       = 63,

    /*! OUTER_L3_L4_HDR - ROUT_EXT_1 */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_ROUT_EXT_1         = 64,

    /*! OUTER_L3_L4_HDR - MPLS_ACH */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_MPLS_ACH           = 65,

    /*! OUTER_L3_L4_HDR - ROUT_EXT_2 */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_ROUT_EXT_2         = 66,

    /*! OUTER_L2_HDR - VNTAG */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L2_HDR_VNTAG                 = 67,

    /*! INNER_L3_L4_HDR - FRAG_EXT_1 */
    BCM56780_A0_DNA_2_5_13_UDF_INNER_L3_L4_HDR_FRAG_EXT_1         = 68,

    /*! INNER_L3_L4_HDR - FRAG_EXT_2 */
    BCM56780_A0_DNA_2_5_13_UDF_INNER_L3_L4_HDR_FRAG_EXT_2         = 69,

    /*! OUTER_L3_L4_HDR - GRE_CHKSUM */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_GRE_CHKSUM         = 70,

    /*! OUTER_L2_HDR - SNAP_OR_LLC */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L2_HDR_SNAP_OR_LLC           = 71,

    /*! OUTER_L2_HDR - HG3_BASE */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L2_HDR_HG3_BASE              = 72,

    /*! OUTER_L3_L4_HDR - ICMP */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_ICMP               = 73,

    /*! OUTER_L3_L4_HDR - MPLS_LABEL_5 */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_MPLS_LABEL_5       = 74,

    /*! SYS_HDR - LOOPBACK */
    BCM56780_A0_DNA_2_5_13_UDF_SYS_HDR_LOOPBACK                   = 75,

    /*! OUTER_L2_HDR - OTAG */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L2_HDR_OTAG                  = 76,

    /*! OUTER_L3_L4_HDR - GRE_ROUT */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_GRE_ROUT           = 77,

    /*! INNER_L3_L4_HDR - UNKNOWN_L4 */
    BCM56780_A0_DNA_2_5_13_UDF_INNER_L3_L4_HDR_UNKNOWN_L4         = 78,

    /*! INNER_L3_L4_HDR - UNKNOWN_L5 */
    BCM56780_A0_DNA_2_5_13_UDF_INNER_L3_L4_HDR_UNKNOWN_L5         = 79,

    /*! INNER_L3_L4_HDR - UNKNOWN_L3 */
    BCM56780_A0_DNA_2_5_13_UDF_INNER_L3_L4_HDR_UNKNOWN_L3         = 80,

    /*! SYS_HDR - EP_NIH */
    BCM56780_A0_DNA_2_5_13_UDF_SYS_HDR_EP_NIH                     = 81,

    /*! INNER_L3_L4_HDR - HOP_BY_HOP_EXT_1 */
    BCM56780_A0_DNA_2_5_13_UDF_INNER_L3_L4_HDR_HOP_BY_HOP_EXT_1   = 82,

    /*! OUTER_L3_L4_HDR - MPLS_LABEL_0 */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_MPLS_LABEL_0       = 83,

    /*! INNER_L3_L4_HDR - HOP_BY_HOP_EXT_2 */
    BCM56780_A0_DNA_2_5_13_UDF_INNER_L3_L4_HDR_HOP_BY_HOP_EXT_2   = 84,

    /*! OUTER_L3_L4_HDR - VXLAN */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_VXLAN              = 85,

    /*! OUTER_L3_L4_HDR - DEST_OPT_EXT_1 */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_DEST_OPT_EXT_1     = 86,

    /*! INNER_L3_L4_HDR - UDP */
    BCM56780_A0_DNA_2_5_13_UDF_INNER_L3_L4_HDR_UDP                = 87,

    /*! OUTER_L3_L4_HDR - MPLS_LABEL_4 */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_MPLS_LABEL_4       = 88,

    /*! OUTER_L3_L4_HDR - WESP_EXT_2 */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_WESP_EXT_2         = 89,

    /*! OUTER_L3_L4_HDR - WESP_EXT_1 */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_WESP_EXT_1         = 90,

    /*! OUTER_L3_L4_HDR - AUTH_EXT_1 */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_AUTH_EXT_1         = 91,

    /*! OUTER_L3_L4_HDR - UDP */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_UDP                = 92,

    /*! OUTER_L3_L4_HDR - AUTH_EXT_2 */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_AUTH_EXT_2         = 93,

    /*! INNER_L2_HDR - VNTAG */
    BCM56780_A0_DNA_2_5_13_UDF_INNER_L2_HDR_VNTAG                 = 94,

    /*! OUTER_L3_L4_HDR - TCP_LAST_16BYTES */
    BCM56780_A0_DNA_2_5_13_UDF_OUTER_L3_L4_HDR_TCP_LAST_16BYTES   = 95,

    /*! INNER_L3_L4_HDR - PROG_EXT_1 */
    BCM56780_A0_DNA_2_5_13_UDF_INNER_L3_L4_HDR_PROG_EXT_1         = 96,
} bcm56780_a0_dna_2_5_13_udf_hdr_format_t;

/*! Max enum defines abstract packet headers for udf extraction. */
#define BCM56780_A0_DNA_2_5_13_UDF_HDR_FORMAT_LAST_COUNT 97

/*! Enum defines hfe table type for parsing stage. */
typedef enum bcm56780_a0_dna_2_5_13_udf_hfe_policy_table_e {
    /*! IPARSER0 HFE POLICY TABLE 0  */
    BCM56780_A0_DNA_2_5_13_UDF_IPARSER0_HFE_POLICY_TABLE_0  = 0,

    /*! IPARSER1 HFE POLICY TABLE 0  */
    BCM56780_A0_DNA_2_5_13_UDF_IPARSER1_HFE_POLICY_TABLE_0  = 1,

    /*! IPARSER1 HFE POLICY TABLE 1  */
    BCM56780_A0_DNA_2_5_13_UDF_IPARSER1_HFE_POLICY_TABLE_1  = 2,

    /*! IPARSER1 HFE POLICY TABLE 2  */
    BCM56780_A0_DNA_2_5_13_UDF_IPARSER1_HFE_POLICY_TABLE_2  = 3,

    /*! IPARSER1 HFE POLICY TABLE 3  */
    BCM56780_A0_DNA_2_5_13_UDF_IPARSER1_HFE_POLICY_TABLE_3  = 4,

    /*! IPARSER1 HFE POLICY TABLE 4  */
    BCM56780_A0_DNA_2_5_13_UDF_IPARSER1_HFE_POLICY_TABLE_4  = 5,

    /*! IPARSER1 HFE POLICY TABLE 5  */
    BCM56780_A0_DNA_2_5_13_UDF_IPARSER1_HFE_POLICY_TABLE_5  = 6,

    /*! IPARSER2 HFE POLICY TABLE 0  */
    BCM56780_A0_DNA_2_5_13_UDF_IPARSER2_HFE_POLICY_TABLE_0  = 7,

    /*! IPARSER2 HFE POLICY TABLE 1  */
    BCM56780_A0_DNA_2_5_13_UDF_IPARSER2_HFE_POLICY_TABLE_1  = 8,

    /*! IPARSER2 HFE POLICY TABLE 2  */
    BCM56780_A0_DNA_2_5_13_UDF_IPARSER2_HFE_POLICY_TABLE_2  = 9,

    /*! IPARSER2 HFE POLICY TABLE 3  */
    BCM56780_A0_DNA_2_5_13_UDF_IPARSER2_HFE_POLICY_TABLE_3  = 10,

    /*! IPARSER2 HFE POLICY TABLE 4  */
    BCM56780_A0_DNA_2_5_13_UDF_IPARSER2_HFE_POLICY_TABLE_4  = 11,

    /*! IPARSER HFE POLICY TABLE MAX */
    BCM56780_A0_DNA_2_5_13_UDF_IPARSER_HFE_POLICY_TABLE_MAX = 12,
} bcm56780_a0_dna_2_5_13_udf_hfe_policy_table_t;

/*! Containter list for FWD of size 1 byte. */
typedef enum bcm56780_a0_dna_2_5_13_udf_fwd_1_byte_cont_e {
    /*! ing_fld_fwd_2__cont_3 */
    BCM56780_A0_DNA_2_5_13_UDF_FWD_ING_FLD_FWD_2__CONT_3 = 43,

    /*! ing_fld_fwd_2__cont_4 */
    BCM56780_A0_DNA_2_5_13_UDF_FWD_ING_FLD_FWD_2__CONT_4 = 44,

    /*! ing_fld_fwd_2__cont_5 */
    BCM56780_A0_DNA_2_5_13_UDF_FWD_ING_FLD_FWD_2__CONT_5 = 45,

    /*! ing_fld_fwd_2__cont_6 */
    BCM56780_A0_DNA_2_5_13_UDF_FWD_ING_FLD_FWD_2__CONT_6 = 46,

    /*! ing_fld_fwd_2__cont_7 */
    BCM56780_A0_DNA_2_5_13_UDF_FWD_ING_FLD_FWD_2__CONT_7 = 47,
} bcm56780_a0_dna_2_5_13_udf_fwd_1_byte_cont_t;

/*! Containter list for FWD.of size 2 bytes. */
typedef enum bcm56780_a0_dna_2_5_13_udf_fwd_2_byte_cont_e {
    /*! ing_fld_fwd_1__cont_18 */
    BCM56780_A0_DNA_2_5_13_UDF_FWD_ING_FLD_FWD_1__CONT_18 = 34,

    /*! ing_fld_fwd_1__cont_19 */
    BCM56780_A0_DNA_2_5_13_UDF_FWD_ING_FLD_FWD_1__CONT_19 = 35,

    /*! ing_fld_fwd_1__cont_20 */
    BCM56780_A0_DNA_2_5_13_UDF_FWD_ING_FLD_FWD_1__CONT_20 = 36,

    /*! ing_fld_fwd_1__cont_21 */
    BCM56780_A0_DNA_2_5_13_UDF_FWD_ING_FLD_FWD_1__CONT_21 = 37,

    /*! ing_fld_fwd_1__cont_22 */
    BCM56780_A0_DNA_2_5_13_UDF_FWD_ING_FLD_FWD_1__CONT_22 = 38,

    /*! ing_fld_fwd_1__cont_23 */
    BCM56780_A0_DNA_2_5_13_UDF_FWD_ING_FLD_FWD_1__CONT_23 = 39,
} bcm56780_a0_dna_2_5_13_udf_fwd_2_byte_cont_t;

/*! Containter list for FWD of size 4 bytes. */
typedef enum bcm56780_a0_dna_2_5_13_udf_fwd_4_byte_cont_e {
    /*! ing_fld_fwd_0__cont_15 */
    BCM56780_A0_DNA_2_5_13_UDF_FWD_ING_FLD_FWD_0__CONT_15 = 15,
} bcm56780_a0_dna_2_5_13_udf_fwd_4_byte_cont_t;

/*! Containter list for iparser1 of size 1 bytes. */
typedef enum bcm56780_a0_dna_2_5_13_udf_iparser1_1_byte_cont_e {
    /*! ing_fld1_2__cont_3 */
    BCM56780_A0_DNA_2_5_13_UDF_IPARSER1_ING_FLD1_2__CONT_3 = 43,

    /*! ing_fld1_2__cont_4 */
    BCM56780_A0_DNA_2_5_13_UDF_IPARSER1_ING_FLD1_2__CONT_4 = 44,

    /*! ing_fld1_2__cont_5 */
    BCM56780_A0_DNA_2_5_13_UDF_IPARSER1_ING_FLD1_2__CONT_5 = 45,

    /*! ing_fld1_2__cont_6 */
    BCM56780_A0_DNA_2_5_13_UDF_IPARSER1_ING_FLD1_2__CONT_6 = 46,

    /*! ing_fld1_2__cont_7 */
    BCM56780_A0_DNA_2_5_13_UDF_IPARSER1_ING_FLD1_2__CONT_7 = 47,
} bcm56780_a0_dna_2_5_13_udf_iparser1_1_byte_cont_t;

/*! Containter list for iparser1 of size 2 bytes. */
typedef enum bcm56780_a0_dna_2_5_13_udf_iparser1_2_byte_cont_e {
    /*! ing_fld1_1__cont_18 */
    BCM56780_A0_DNA_2_5_13_UDF_IPARSER1_ING_FLD1_1__CONT_18 = 34,

    /*! ing_fld1_1__cont_19 */
    BCM56780_A0_DNA_2_5_13_UDF_IPARSER1_ING_FLD1_1__CONT_19 = 35,

    /*! ing_fld1_1__cont_20 */
    BCM56780_A0_DNA_2_5_13_UDF_IPARSER1_ING_FLD1_1__CONT_20 = 36,

    /*! ing_fld1_1__cont_21 */
    BCM56780_A0_DNA_2_5_13_UDF_IPARSER1_ING_FLD1_1__CONT_21 = 37,

    /*! ing_fld1_1__cont_22 */
    BCM56780_A0_DNA_2_5_13_UDF_IPARSER1_ING_FLD1_1__CONT_22 = 38,

    /*! ing_fld1_1__cont_23 */
    BCM56780_A0_DNA_2_5_13_UDF_IPARSER1_ING_FLD1_1__CONT_23 = 39,
} bcm56780_a0_dna_2_5_13_udf_iparser1_2_byte_cont_t;

/*! Containter list for iparser2 of size 1 byte. */
typedef enum bcm56780_a0_dna_2_5_13_udf_iparser2_1_byte_cont_e {
    /*! ing_fld2_2__cont_3 */
    BCM56780_A0_DNA_2_5_13_UDF_IPARSER2_ING_FLD2_2__CONT_3 = 43,

    /*! ing_fld2_2__cont_4 */
    BCM56780_A0_DNA_2_5_13_UDF_IPARSER2_ING_FLD2_2__CONT_4 = 44,

    /*! ing_fld2_2__cont_5 */
    BCM56780_A0_DNA_2_5_13_UDF_IPARSER2_ING_FLD2_2__CONT_5 = 45,

    /*! ing_fld2_2__cont_6 */
    BCM56780_A0_DNA_2_5_13_UDF_IPARSER2_ING_FLD2_2__CONT_6 = 46,

    /*! ing_fld2_2__cont_7 */
    BCM56780_A0_DNA_2_5_13_UDF_IPARSER2_ING_FLD2_2__CONT_7 = 47,
} bcm56780_a0_dna_2_5_13_udf_iparser2_1_byte_cont_t;

/*! Containter list for iparser2 of size 2 bytes. */
typedef enum bcm56780_a0_dna_2_5_13_udf_iparser2_2_byte_cont_e {
    /*! ing_fld2_1__cont_18 */
    BCM56780_A0_DNA_2_5_13_UDF_IPARSER2_ING_FLD2_1__CONT_18 = 34,

    /*! ing_fld2_1__cont_19 */
    BCM56780_A0_DNA_2_5_13_UDF_IPARSER2_ING_FLD2_1__CONT_19 = 35,

    /*! ing_fld2_1__cont_20 */
    BCM56780_A0_DNA_2_5_13_UDF_IPARSER2_ING_FLD2_1__CONT_20 = 36,

    /*! ing_fld2_1__cont_21 */
    BCM56780_A0_DNA_2_5_13_UDF_IPARSER2_ING_FLD2_1__CONT_21 = 37,

    /*! ing_fld2_1__cont_22 */
    BCM56780_A0_DNA_2_5_13_UDF_IPARSER2_ING_FLD2_1__CONT_22 = 38,

    /*! ing_fld2_1__cont_23 */
    BCM56780_A0_DNA_2_5_13_UDF_IPARSER2_ING_FLD2_1__CONT_23 = 39,
} bcm56780_a0_dna_2_5_13_udf_iparser2_2_byte_cont_t;

/*!
 * Index and base offset of HFE policy table for given udf anchor.
 */
typedef struct bcm56780_a0_dna_2_5_13_udf_policy_table_index_info_s {
    /* HFE POLICY table index. */
    uint32_t index;

    /* HFE POLICY table base offset. */
    uint32_t base_offset;
} bcm56780_a0_dna_2_5_13_udf_policy_table_index_info_t;

/*!
 * List of HFE POLICY table for given udf anchor.
 */
typedef struct bcm56780_a0_dna_2_5_13_udf_hfe_tbl_info_s {
    /* HFE POLICY table type. */
    bcm56780_a0_dna_2_5_13_udf_hfe_policy_table_t tbl_type;

    /* Parser. */
    uint8_t parser;

    /* Number of entires need to be updated for each udf anchor. */
    uint32_t num_entries;

    /* Policy table entry information. */
    const bcm56780_a0_dna_2_5_13_udf_policy_table_index_info_t *hfe_index_info;
} bcm56780_a0_dna_2_5_13_udf_hfe_tbl_info_t;

/*!
 * udf anchor
 */
typedef struct bcm56780_a0_dna_2_5_13_udf_anchor_s {
    /* UDF header format. */
    bcm56780_a0_dna_2_5_13_udf_hdr_format_t hdr;

    /* Number of hfe policy tables. */
    uint32_t table_num;

    /* Table info. */
    const bcm56780_a0_dna_2_5_13_udf_hfe_tbl_info_t **table;
} bcm56780_a0_dna_2_5_13_udf_anchor_t;

/*!
 * Command map for each entry.
 */
typedef struct bcm56780_a0_dna_2_5_13_udf_hfe_policy_table_command_info_s {
    /* False for unused commands. */
    bool hfe_command[BCM56780_A0_DNA_2_5_13_UDF_IPARSER_HFE_POLICY_COMMAND_MAX];
} bcm56780_a0_dna_2_5_13_udf_hfe_policy_table_command_info_t;

/*!
 * Command map for all entry.
 */
typedef struct bcm56780_a0_dna_2_5_13_udf_hfe_policy_table_index_info_s {
    /* Map for command index. */
    bcm56780_a0_dna_2_5_13_udf_hfe_policy_table_command_info_t hfe_index[BCM56780_A0_DNA_2_5_13_UDF_IPARSER_HFE_POLICY_INDEX_MAX];
} bcm56780_a0_dna_2_5_13_udf_hfe_policy_table_index_info_t;


#endif  /* BCM56780_A0_DNA_2_5_13_CTH_UDF_VAR_H */