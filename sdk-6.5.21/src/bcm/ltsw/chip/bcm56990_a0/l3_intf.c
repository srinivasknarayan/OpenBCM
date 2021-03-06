/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#include <bcm_int/ltsw/mbcm/mbcm.h>
#include <bcm_int/ltsw/mbcm/l3_intf.h>
#include <bcm_int/ltsw/xgs/l3_intf.h>
#include "sub_dispatch.h"

#include <bsl/bsl.h>
#include <shr/shr_debug.h>


/******************************************************************************
 * Local definitions
 */

#define BSL_LOG_MODULE BSL_LS_BCM_L3

/******************************************************************************
 * Private functions
 */

/*!
 * \brief L3_intf driver function variable for bcm56990_a0 device.
 */
static mbcm_ltsw_l3_intf_drv_t bcm56990_a0_ltsw_l3_intf_drv = {
    .l3_intf_tbl_db_get = BCM56990_A0_SUB_DRV,
    .l3_intf_init = xgs_ltsw_l3_intf_init,
    .l3_intf_deinit = xgs_ltsw_l3_intf_deinit,

    /* Ingress interface. */
    .l3_ing_intf_id_range_get = xgs_ltsw_l3_ing_intf_id_range_get,
    .l3_ing_class_id_range_get = xgs_ltsw_l3_ing_class_id_range_get,
    .l3_ing_intf_create = xgs_ltsw_l3_ing_intf_create,
    .l3_ing_intf_destroy = xgs_ltsw_l3_ing_intf_destroy,
    .l3_ing_intf_get = xgs_ltsw_l3_ing_intf_get,
    .l3_ing_intf_find = xgs_ltsw_l3_ing_intf_find,
    .l3_ing_intf_traverse = xgs_ltsw_l3_ing_intf_traverse,
    .l3_ing_intf_rp_op = NULL,
    .l3_ing_intf_rp_get = NULL,
    .l3_ing_intf_flexctr_attach = xgs_ltsw_l3_ing_intf_flexctr_attach,
    .l3_ing_intf_flexctr_detach = xgs_ltsw_l3_ing_intf_flexctr_detach,
    .l3_ing_intf_flexctr_info_get = xgs_ltsw_l3_ing_intf_flexctr_info_get,

    /* Egress interface. */
    .l3_egr_l2cpu_intf_id_get = xgs_ltsw_l3_egr_l2cpu_intf_id_get,
    .l3_egr_intf_id_range_get = xgs_ltsw_l3_egr_intf_id_range_get,
    .l3_egr_intf_to_index = xgs_ltsw_l3_egr_intf_to_index,
    .l3_egr_index_to_intf = xgs_ltsw_l3_egr_index_to_intf,
    .l3_egr_intf_create = xgs_ltsw_l3_egr_intf_create,
    .l3_egr_intf_get = xgs_ltsw_l3_egr_intf_get,
    .l3_egr_intf_find = xgs_ltsw_l3_egr_intf_find,
    .l3_egr_intf_delete = xgs_ltsw_l3_egr_intf_delete,
    .l3_egr_intf_delete_all = xgs_ltsw_l3_egr_intf_delete_all,
    .l3_egr_intf_flexctr_attach = xgs_ltsw_l3_egr_intf_flexctr_attach,
    .l3_egr_intf_flexctr_detach = xgs_ltsw_l3_egr_intf_flexctr_detach,
    .l3_egr_intf_flexctr_info_get = xgs_ltsw_l3_egr_intf_flexctr_info_get,
    .l3_intf_tnl_init_set = xgs_ltsw_l3_intf_tnl_init_set,
    .l3_intf_tnl_init_get = xgs_ltsw_l3_intf_tnl_init_get,
    .l3_intf_tnl_init_reset = xgs_ltsw_l3_intf_tnl_init_reset,
    .l3_intf_vfi_update = NULL,
    .l3_intf_adapt_lookup_key_set = xgs_ltsw_l3_intf_adapt_lookup_key_set,
};

/******************************************************************************
 * Public functions
 */

int
bcm56990_a0_ltsw_l3_intf_drv_attach(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_EXIT
        (mbcm_ltsw_l3_intf_drv_set(unit, &bcm56990_a0_ltsw_l3_intf_drv));

    SHR_IF_ERR_VERBOSE_EXIT
        (bcm56990_a0_sub_drv_attach(unit, &bcm56990_a0_ltsw_l3_intf_drv,
                                    BCM56990_A0_SUB_DRV_BCM56990_Ax,
                                    BCM56990_A0_SUB_MOD_L3_INTF));

exit:
    SHR_FUNC_EXIT();
}

/*!
 * \brief Attach functions for other members.
 */
#define BCM56990_A0_DRV_ATTACH_ENTRY(_dn,_vn,_pf,_pd,_r0) \
int _vn##_ltsw_l3_intf_drv_attach(int unit) \
{ \
    SHR_FUNC_ENTER(unit); \
    SHR_IF_ERR_VERBOSE_EXIT \
        (mbcm_ltsw_l3_intf_drv_set(unit, &bcm56990_a0_ltsw_l3_intf_drv)); \
    SHR_IF_ERR_VERBOSE_EXIT \
        (bcm56990_a0_sub_drv_attach(unit, &bcm56990_a0_ltsw_l3_intf_drv, \
                                    BCM56990_A0_SUB_DRV_BCM5699x, \
                                    BCM56990_A0_SUB_MOD_L3_INTF)); \
exit: \
    SHR_FUNC_EXIT(); \
}
#include "sub_devlist.h"
