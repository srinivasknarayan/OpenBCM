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
/* Logical Table Adaptor for component bcmcth */
/* Handler: bcm56880_a0_dna_4_7_11_lta_bcmcth_l3_ipv4_multicast_2_strength_profile_resource_info_cth_handler */
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmcth/bcmcth_spm_resource_info.h>



const bcmltd_generic_arg_t
bcm56880_a0_dna_4_7_11_lta_bcmcth_l3_ipv4_multicast_2_strength_profile_resource_info_cth_handler_arg = {
    .sid = BCM56880_A0_DNA_4_7_11_L3_IPV4_MULTICAST_2_STRENGTH_PROFILE_RESOURCE_INFOt,
    .values = 0,
    .value = NULL,
    .user_data = NULL
};

const bcmltd_table_handler_t
bcm56880_a0_dna_4_7_11_lta_bcmcth_l3_ipv4_multicast_2_strength_profile_resource_info_cth_handler = {
    .validate = bcmcth_spm_resource_info_validate,
    .op_insert       = bcmcth_spm_resource_info_insert,
    .op_lookup       = bcmcth_spm_resource_info_lookup,
    .op_delete       = bcmcth_spm_resource_info_delete,
    .op_update       = bcmcth_spm_resource_info_update,
    .op_first        = bcmcth_spm_resource_info_first,
    .op_next         = bcmcth_spm_resource_info_next,
    .ha       = NULL,
    .arg      = &bcm56880_a0_dna_4_7_11_lta_bcmcth_l3_ipv4_multicast_2_strength_profile_resource_info_cth_handler_arg
};

