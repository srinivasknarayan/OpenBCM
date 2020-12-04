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
/* Handler: bcm56880_a0_lta_bcmltx_obm_port_idx_xfrm_handler */
#include <bcmlrd/bcmlrd_types.h>
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmltx/bcmtm/bcmltx_obm_port_idx.h>
#include <bcmdrd/chip/bcm56880_a0_enum.h>
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_xfrm_field_desc.h>

static const uint32_t
bcm56880_a0_lta_bcmltx_obm_port_idx_transform_arg0[2] = {
    8,
    32,
};

extern const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_obm_port_idx_src_field_desc_s0[];

extern const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_obm_port_idx_src_field_desc_s1[];

extern const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_obm_port_idx_ctr_tm_obm_port_drop_dst_field_desc_d0[];

extern const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_obm_port_idx_ctr_tm_obm_port_flow_ctrl_dst_field_desc_d0[];

static const
bcmltd_field_list_t
bcm56880_a0_lta_bcmltx_obm_port_idx_src_list_s0 = {
    .field_num = 1,
    .field_array = bcm56880_a0_lrd_bcmltx_obm_port_idx_src_field_desc_s0
};

static const
bcmltd_field_list_t
bcm56880_a0_lta_bcmltx_obm_port_idx_src_list_s1 = {
    .field_num = 1,
    .field_array = bcm56880_a0_lrd_bcmltx_obm_port_idx_src_field_desc_s1
};

static const bcmltd_field_list_t
bcm56880_a0_lrd_bcmltx_obm_port_idx_ctr_tm_obm_port_drop_dst_list_d0 = {
    .field_num = 3,
    .field_array = bcm56880_a0_lrd_bcmltx_obm_port_idx_ctr_tm_obm_port_drop_dst_field_desc_d0
};

static const bcmltd_field_list_t
bcm56880_a0_lrd_bcmltx_obm_port_idx_ctr_tm_obm_port_flow_ctrl_dst_list_d0 = {
    .field_num = 3,
    .field_array = bcm56880_a0_lrd_bcmltx_obm_port_idx_ctr_tm_obm_port_flow_ctrl_dst_field_desc_d0
};

static const uint32_t
bcm56880_a0_lta_bcmltx_obm_port_idx_transform_src_s0[1] = {
    CTR_TM_OBM_PORT_DROPt_PORT_IDf,
};

static const uint32_t
bcm56880_a0_lta_bcmltx_obm_port_idx_transform_src_s1[1] = {
    CTR_TM_OBM_PORT_FLOW_CTRLt_PORT_IDf,
};

static const uint32_t
bcm56880_a0_lrd_bcmltx_obm_port_idx_ctr_tm_obm_port_drop_transform_dst_d0[3] = {
    BCMLRD_FIELD_INDEX,
    BCMLRD_FIELD_INSTANCE,
    BCMLRD_FIELD_TABLE_SEL,
};

static const uint32_t
bcm56880_a0_lrd_bcmltx_obm_port_idx_ctr_tm_obm_port_flow_ctrl_transform_dst_d0[3] = {
    BCMLRD_FIELD_INDEX,
    BCMLRD_FIELD_INSTANCE,
    BCMLRD_FIELD_TABLE_SEL,
};

static const bcmltd_generic_arg_t
bcm56880_a0_lta_bcmltx_obm_port_idx_comp_data = {
    .sid       = CTR_TM_OBM_PORT_DROPt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_generic_arg_t
bcm56880_a0_lta_bcmltx_obm_port_idx_comp_data1 = {
    .sid       = CTR_TM_OBM_PORT_FLOW_CTRLt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_transform_arg_t
bcm56880_a0_lta_bcmltx_obm_port_idx_xfrm_handler_fwd_arg_s0_d0_x0_t0 = {
    .values      = 2,
    .value       = bcm56880_a0_lta_bcmltx_obm_port_idx_transform_arg0,
    .tables      = 4,
    .table       = bcm56880_a0_lrd_obm_port_idx_transform_tbl_t0,
    .fields      = 1,
    .field       = bcm56880_a0_lta_bcmltx_obm_port_idx_transform_src_s0,
    .field_list  = &bcm56880_a0_lta_bcmltx_obm_port_idx_src_list_s0,
    .rfields     = 3,
    .rfield      = bcm56880_a0_lrd_bcmltx_obm_port_idx_ctr_tm_obm_port_drop_transform_dst_d0,
    .rfield_list = &bcm56880_a0_lrd_bcmltx_obm_port_idx_ctr_tm_obm_port_drop_dst_list_d0,
    .comp_data   = &bcm56880_a0_lta_bcmltx_obm_port_idx_comp_data
};

static const bcmltd_transform_arg_t
bcm56880_a0_lta_bcmltx_obm_port_idx_xfrm_handler_fwd_arg_s0_d0_x0_t1 = {
    .values      = 2,
    .value       = bcm56880_a0_lta_bcmltx_obm_port_idx_transform_arg0,
    .tables      = 4,
    .table       = bcm56880_a0_lrd_obm_port_idx_transform_tbl_t1,
    .fields      = 1,
    .field       = bcm56880_a0_lta_bcmltx_obm_port_idx_transform_src_s0,
    .field_list  = &bcm56880_a0_lta_bcmltx_obm_port_idx_src_list_s0,
    .rfields     = 3,
    .rfield      = bcm56880_a0_lrd_bcmltx_obm_port_idx_ctr_tm_obm_port_drop_transform_dst_d0,
    .rfield_list = &bcm56880_a0_lrd_bcmltx_obm_port_idx_ctr_tm_obm_port_drop_dst_list_d0,
    .comp_data   = &bcm56880_a0_lta_bcmltx_obm_port_idx_comp_data
};

static const bcmltd_transform_arg_t
bcm56880_a0_lta_bcmltx_obm_port_idx_xfrm_handler_fwd_arg_s0_d0_x0_t2 = {
    .values      = 2,
    .value       = bcm56880_a0_lta_bcmltx_obm_port_idx_transform_arg0,
    .tables      = 4,
    .table       = bcm56880_a0_lrd_obm_port_idx_transform_tbl_t2,
    .fields      = 1,
    .field       = bcm56880_a0_lta_bcmltx_obm_port_idx_transform_src_s0,
    .field_list  = &bcm56880_a0_lta_bcmltx_obm_port_idx_src_list_s0,
    .rfields     = 3,
    .rfield      = bcm56880_a0_lrd_bcmltx_obm_port_idx_ctr_tm_obm_port_drop_transform_dst_d0,
    .rfield_list = &bcm56880_a0_lrd_bcmltx_obm_port_idx_ctr_tm_obm_port_drop_dst_list_d0,
    .comp_data   = &bcm56880_a0_lta_bcmltx_obm_port_idx_comp_data
};

static const bcmltd_transform_arg_t
bcm56880_a0_lta_bcmltx_obm_port_idx_xfrm_handler_fwd_arg_s0_d0_x0_t3 = {
    .values      = 2,
    .value       = bcm56880_a0_lta_bcmltx_obm_port_idx_transform_arg0,
    .tables      = 4,
    .table       = bcm56880_a0_lrd_obm_port_idx_transform_tbl_t3,
    .fields      = 1,
    .field       = bcm56880_a0_lta_bcmltx_obm_port_idx_transform_src_s0,
    .field_list  = &bcm56880_a0_lta_bcmltx_obm_port_idx_src_list_s0,
    .rfields     = 3,
    .rfield      = bcm56880_a0_lrd_bcmltx_obm_port_idx_ctr_tm_obm_port_drop_transform_dst_d0,
    .rfield_list = &bcm56880_a0_lrd_bcmltx_obm_port_idx_ctr_tm_obm_port_drop_dst_list_d0,
    .comp_data   = &bcm56880_a0_lta_bcmltx_obm_port_idx_comp_data
};

static const bcmltd_transform_arg_t
bcm56880_a0_lta_bcmltx_obm_port_idx_xfrm_handler_fwd_arg_s0_d0_x0_t4 = {
    .values      = 2,
    .value       = bcm56880_a0_lta_bcmltx_obm_port_idx_transform_arg0,
    .tables      = 4,
    .table       = bcm56880_a0_lrd_obm_port_idx_transform_tbl_t4,
    .fields      = 1,
    .field       = bcm56880_a0_lta_bcmltx_obm_port_idx_transform_src_s0,
    .field_list  = &bcm56880_a0_lta_bcmltx_obm_port_idx_src_list_s0,
    .rfields     = 3,
    .rfield      = bcm56880_a0_lrd_bcmltx_obm_port_idx_ctr_tm_obm_port_drop_transform_dst_d0,
    .rfield_list = &bcm56880_a0_lrd_bcmltx_obm_port_idx_ctr_tm_obm_port_drop_dst_list_d0,
    .comp_data   = &bcm56880_a0_lta_bcmltx_obm_port_idx_comp_data
};

static const bcmltd_transform_arg_t
bcm56880_a0_lta_bcmltx_obm_port_idx_xfrm_handler_fwd_arg_s0_d0_x0_t5 = {
    .values      = 2,
    .value       = bcm56880_a0_lta_bcmltx_obm_port_idx_transform_arg0,
    .tables      = 4,
    .table       = bcm56880_a0_lrd_obm_port_idx_transform_tbl_t5,
    .fields      = 1,
    .field       = bcm56880_a0_lta_bcmltx_obm_port_idx_transform_src_s0,
    .field_list  = &bcm56880_a0_lta_bcmltx_obm_port_idx_src_list_s0,
    .rfields     = 3,
    .rfield      = bcm56880_a0_lrd_bcmltx_obm_port_idx_ctr_tm_obm_port_drop_transform_dst_d0,
    .rfield_list = &bcm56880_a0_lrd_bcmltx_obm_port_idx_ctr_tm_obm_port_drop_dst_list_d0,
    .comp_data   = &bcm56880_a0_lta_bcmltx_obm_port_idx_comp_data
};

static const bcmltd_transform_arg_t
bcm56880_a0_lta_bcmltx_obm_port_idx_xfrm_handler_fwd_arg_s0_d0_x0_t6 = {
    .values      = 2,
    .value       = bcm56880_a0_lta_bcmltx_obm_port_idx_transform_arg0,
    .tables      = 4,
    .table       = bcm56880_a0_lrd_obm_port_idx_transform_tbl_t6,
    .fields      = 1,
    .field       = bcm56880_a0_lta_bcmltx_obm_port_idx_transform_src_s0,
    .field_list  = &bcm56880_a0_lta_bcmltx_obm_port_idx_src_list_s0,
    .rfields     = 3,
    .rfield      = bcm56880_a0_lrd_bcmltx_obm_port_idx_ctr_tm_obm_port_drop_transform_dst_d0,
    .rfield_list = &bcm56880_a0_lrd_bcmltx_obm_port_idx_ctr_tm_obm_port_drop_dst_list_d0,
    .comp_data   = &bcm56880_a0_lta_bcmltx_obm_port_idx_comp_data
};

static const bcmltd_transform_arg_t
bcm56880_a0_lta_bcmltx_obm_port_idx_xfrm_handler_fwd_arg_s0_d0_x0_t7 = {
    .values      = 2,
    .value       = bcm56880_a0_lta_bcmltx_obm_port_idx_transform_arg0,
    .tables      = 4,
    .table       = bcm56880_a0_lrd_obm_port_idx_transform_tbl_t7,
    .fields      = 1,
    .field       = bcm56880_a0_lta_bcmltx_obm_port_idx_transform_src_s0,
    .field_list  = &bcm56880_a0_lta_bcmltx_obm_port_idx_src_list_s0,
    .rfields     = 3,
    .rfield      = bcm56880_a0_lrd_bcmltx_obm_port_idx_ctr_tm_obm_port_drop_transform_dst_d0,
    .rfield_list = &bcm56880_a0_lrd_bcmltx_obm_port_idx_ctr_tm_obm_port_drop_dst_list_d0,
    .comp_data   = &bcm56880_a0_lta_bcmltx_obm_port_idx_comp_data
};

static const bcmltd_transform_arg_t
bcm56880_a0_lta_bcmltx_obm_port_idx_xfrm_handler_fwd_arg_s1_d0_x0_t8 = {
    .values      = 2,
    .value       = bcm56880_a0_lta_bcmltx_obm_port_idx_transform_arg0,
    .tables      = 4,
    .table       = bcm56880_a0_lrd_obm_port_idx_transform_tbl_t8,
    .fields      = 1,
    .field       = bcm56880_a0_lta_bcmltx_obm_port_idx_transform_src_s1,
    .field_list  = &bcm56880_a0_lta_bcmltx_obm_port_idx_src_list_s1,
    .rfields     = 3,
    .rfield      = bcm56880_a0_lrd_bcmltx_obm_port_idx_ctr_tm_obm_port_flow_ctrl_transform_dst_d0,
    .rfield_list = &bcm56880_a0_lrd_bcmltx_obm_port_idx_ctr_tm_obm_port_flow_ctrl_dst_list_d0,
    .comp_data   = &bcm56880_a0_lta_bcmltx_obm_port_idx_comp_data1
};

const bcmltd_xfrm_handler_t
bcm56880_a0_lta_bcmltx_obm_port_idx_xfrm_handler_fwd_s0_d0_x0_t0 = {
    .transform     = bcmltx_obm_port_idx_transform,
    .arg           = &bcm56880_a0_lta_bcmltx_obm_port_idx_xfrm_handler_fwd_arg_s0_d0_x0_t0
};

const bcmltd_xfrm_handler_t
bcm56880_a0_lta_bcmltx_obm_port_idx_xfrm_handler_fwd_s0_d0_x0_t1 = {
    .transform     = bcmltx_obm_port_idx_transform,
    .arg           = &bcm56880_a0_lta_bcmltx_obm_port_idx_xfrm_handler_fwd_arg_s0_d0_x0_t1
};

const bcmltd_xfrm_handler_t
bcm56880_a0_lta_bcmltx_obm_port_idx_xfrm_handler_fwd_s0_d0_x0_t2 = {
    .transform     = bcmltx_obm_port_idx_transform,
    .arg           = &bcm56880_a0_lta_bcmltx_obm_port_idx_xfrm_handler_fwd_arg_s0_d0_x0_t2
};

const bcmltd_xfrm_handler_t
bcm56880_a0_lta_bcmltx_obm_port_idx_xfrm_handler_fwd_s0_d0_x0_t3 = {
    .transform     = bcmltx_obm_port_idx_transform,
    .arg           = &bcm56880_a0_lta_bcmltx_obm_port_idx_xfrm_handler_fwd_arg_s0_d0_x0_t3
};

const bcmltd_xfrm_handler_t
bcm56880_a0_lta_bcmltx_obm_port_idx_xfrm_handler_fwd_s0_d0_x0_t4 = {
    .transform     = bcmltx_obm_port_idx_transform,
    .arg           = &bcm56880_a0_lta_bcmltx_obm_port_idx_xfrm_handler_fwd_arg_s0_d0_x0_t4
};

const bcmltd_xfrm_handler_t
bcm56880_a0_lta_bcmltx_obm_port_idx_xfrm_handler_fwd_s0_d0_x0_t5 = {
    .transform     = bcmltx_obm_port_idx_transform,
    .arg           = &bcm56880_a0_lta_bcmltx_obm_port_idx_xfrm_handler_fwd_arg_s0_d0_x0_t5
};

const bcmltd_xfrm_handler_t
bcm56880_a0_lta_bcmltx_obm_port_idx_xfrm_handler_fwd_s0_d0_x0_t6 = {
    .transform     = bcmltx_obm_port_idx_transform,
    .arg           = &bcm56880_a0_lta_bcmltx_obm_port_idx_xfrm_handler_fwd_arg_s0_d0_x0_t6
};

const bcmltd_xfrm_handler_t
bcm56880_a0_lta_bcmltx_obm_port_idx_xfrm_handler_fwd_s0_d0_x0_t7 = {
    .transform     = bcmltx_obm_port_idx_transform,
    .arg           = &bcm56880_a0_lta_bcmltx_obm_port_idx_xfrm_handler_fwd_arg_s0_d0_x0_t7
};

const bcmltd_xfrm_handler_t
bcm56880_a0_lta_bcmltx_obm_port_idx_xfrm_handler_fwd_s1_d0_x0_t8 = {
    .transform     = bcmltx_obm_port_idx_transform,
    .arg           = &bcm56880_a0_lta_bcmltx_obm_port_idx_xfrm_handler_fwd_arg_s1_d0_x0_t8
};


