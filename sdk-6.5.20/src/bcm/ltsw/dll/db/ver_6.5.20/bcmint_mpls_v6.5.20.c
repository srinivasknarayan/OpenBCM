/*************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by HA parser from YAML formated file.
 * Edits to this file will be lost when it is regenerated.
 * Tool: bcmha/scripts/issu_db_gen.py
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#include <bcmissu/issu_types.h>
#include "mpls_ha.h"

const issu_enum_symbol_t bcmissu_enum_mpls_ha_vpws_vpn_member_state_t_v6_5_20[9] = {
    {"STATE_INVALID", 0},
    {"STATE_INIT", 1},
    {"STATE_ACC", 2},
    {"STATE_ACC_ACC", 3},
    {"STATE_PRIMARY", 4},
    {"STATE_ACC_PRIMARY", 5},
    {"STATE_PRIMARY_BACKUP", 6},
    {"STATE_ALL", 7},
    {NULL, 0}
};

static const issu_field_t bcmissu_fields_vpws_vpn_member_info_t[] = {
    {
        .fid = 0x8c6eb472,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x0e4af7d0,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x095f2624,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x8a277038,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x9ed39e2e,
        .width = sizeof(vpws_vpn_member_state_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = 0xee922c5b45815912,
        .is_local_enum = true,
        .enum_type_name = NULL,
    },
};

static uint32_t vpws_vpn_member_info_t_field_offset_get (bcmissu_field_id_t field_id)
{
    vpws_vpn_member_info_t var;

    switch (field_id) {
        case 0x8c6eb472:
            return ((uint8_t *)&var.acc_id) - (uint8_t *)&var;
        case 0x0e4af7d0:
            return ((uint8_t *)&var.acc_id2) - (uint8_t *)&var;
        case 0x095f2624:
            return ((uint8_t *)&var.primary_id) - (uint8_t *)&var;
        case 0x8a277038:
            return ((uint8_t *)&var.backup_id) - (uint8_t *)&var;
        case 0x9ed39e2e:
            return ((uint8_t *)&var.state) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_mpls_ha_vpws_vpn_member_info_t_v6_5_20 = {
    .offset_get_func = vpws_vpn_member_info_t_field_offset_get,
    .generic_size = sizeof(vpws_vpn_member_info_t),
    .field_count = 5,
    .fields = bcmissu_fields_vpws_vpn_member_info_t,
};

static const issu_field_t bcmissu_fields_xfs_mpls_vp_info_t[] = {
    {
        .fid = 0x15c46c6e,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0xd304ba20,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x19c5fc35,
        .width = sizeof(uint16_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x5b60a00a,
        .width = sizeof(uint16_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x901555fb,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x1a33cfe3,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x69d3ecd5,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x8125ba88,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x7e3e3593,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x571adeb6,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x3a487154,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0xd0644b03,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x01faf383,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
};

static uint32_t xfs_mpls_vp_info_t_field_offset_get (bcmissu_field_id_t field_id)
{
    xfs_mpls_vp_info_t var;

    switch (field_id) {
        case 0x15c46c6e:
            return ((uint8_t *)&var.criteria) - (uint8_t *)&var;
        case 0xd304ba20:
            return ((uint8_t *)&var.label) - (uint8_t *)&var;
        case 0x19c5fc35:
            return ((uint8_t *)&var.outer_vlan) - (uint8_t *)&var;
        case 0x5b60a00a:
            return ((uint8_t *)&var.inner_vlan) - (uint8_t *)&var;
        case 0x901555fb:
            return ((uint8_t *)&var.port) - (uint8_t *)&var;
        case 0x1a33cfe3:
            return ((uint8_t *)&var.port_group) - (uint8_t *)&var;
        case 0x69d3ecd5:
            return ((uint8_t *)&var.vpless_port) - (uint8_t *)&var;
        case 0x8125ba88:
            return ((uint8_t *)&var.vpless_port_group) - (uint8_t *)&var;
        case 0x7e3e3593:
            return ((uint8_t *)&var.vpless) - (uint8_t *)&var;
        case 0x571adeb6:
            return ((uint8_t *)&var.failover_vp) - (uint8_t *)&var;
        case 0x3a487154:
            return ((uint8_t *)&var.vpless_egress_if) - (uint8_t *)&var;
        case 0xd0644b03:
            return ((uint8_t *)&var.match_count) - (uint8_t *)&var;
        case 0x01faf383:
            return ((uint8_t *)&var.vpn) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_mpls_ha_xfs_mpls_vp_info_t_v6_5_20 = {
    .offset_get_func = xfs_mpls_vp_info_t_field_offset_get,
    .generic_size = sizeof(xfs_mpls_vp_info_t),
    .field_count = 13,
    .fields = bcmissu_fields_xfs_mpls_vp_info_t,
};

static const issu_field_t bcmissu_fields_xfs_mpls_special_label_control_t[] = {
    {
        .fid = 0xda0c51ef,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x45875a80,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x1aec9c5d,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
};

static uint32_t xfs_mpls_special_label_control_t_field_offset_get (bcmissu_field_id_t field_id)
{
    xfs_mpls_special_label_control_t var;

    switch (field_id) {
        case 0xda0c51ef:
            return ((uint8_t *)&var.mpls_hdr) - (uint8_t *)&var;
        case 0x45875a80:
            return ((uint8_t *)&var.mpls_hdr_mask) - (uint8_t *)&var;
        case 0x1aec9c5d:
            return ((uint8_t *)&var.used) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_mpls_ha_xfs_mpls_special_label_control_t_v6_5_20 = {
    .offset_get_func = xfs_mpls_special_label_control_t_field_offset_get,
    .generic_size = sizeof(xfs_mpls_special_label_control_t),
    .field_count = 3,
    .fields = bcmissu_fields_xfs_mpls_special_label_control_t,
};
