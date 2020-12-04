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
/* Logical Table Adaptor for component bcmltx */
/* Handler: bcm56880_a0_dna_4_7_11_lta_bcmltx_r_mirror_encap_profile_10_subfield_rxfrm_table_commit_handler */
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmltx/bcmltx_subfield_rxfrm_table_commit.h>


extern bcmltd_rev_subfield_transform_info_t bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_acc_r_mirror_encap_profile_10t_dataf_info;

static const bcmltd_generic_arg_t
bcm56880_a0_dna_4_7_11_lta_bcmltx_r_mirror_encap_profile_10_subfield_rxfrm_comp_data = {
    .sid       = BCM56880_A0_DNA_4_7_11_R_MIRROR_ENCAP_PROFILE_10t,
    .values    = 0,
    .value     = NULL,
    .user_data = (void *)&bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_acc_r_mirror_encap_profile_10t_dataf_info
};

const bcmltd_table_commit_handler_t
bcm56880_a0_dna_4_7_11_lta_bcmltx_r_mirror_encap_profile_10_subfield_rxfrm_table_commit_handler_c0 = {
    .prepare = bcmltx_subfield_rxfrm_table_prepare,
    .commit  = bcmltx_subfield_rxfrm_table_commit,
    .abort   = bcmltx_subfield_rxfrm_table_abort,
    .arg     = &bcm56880_a0_dna_4_7_11_lta_bcmltx_r_mirror_encap_profile_10_subfield_rxfrm_comp_data
};


