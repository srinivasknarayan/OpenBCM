/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from Logical Table mapping files.
 *
 * Tool: $SDK/INTERNAL/fltg/bin/fltg
 *
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
/* Logical Table Adaptor for component bcmfp */
/* Handler: bcm56880_a0_dna_4_7_11_lta_bcmfp_fp_vlan_info_cth_handler */
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmfp/bcmfp_vlan_stage_info.h>



const bcmltd_generic_arg_t
bcm56880_a0_dna_4_7_11_lta_bcmfp_fp_vlan_info_cth_handler_arg = {
    .sid = FP_VLAN_INFOt,
    .values = 0,
    .value = NULL,
    .user_data = NULL
};

const bcmltd_table_handler_t
bcm56880_a0_dna_4_7_11_lta_bcmfp_fp_vlan_info_cth_handler = {
    .validate = bcmfp_vlan_stage_info_validate,
    .op_insert       = bcmfp_vlan_stage_info_insert,
    .op_lookup       = bcmfp_vlan_stage_info_lookup,
    .op_delete       = bcmfp_vlan_stage_info_delete,
    .op_update       = bcmfp_vlan_stage_info_update,
    .op_first        = bcmfp_vlan_stage_info_first,
    .op_next         = bcmfp_vlan_stage_info_next,
    .ha       = NULL,
    .arg      = &bcm56880_a0_dna_4_7_11_lta_bcmfp_fp_vlan_info_cth_handler_arg
};

