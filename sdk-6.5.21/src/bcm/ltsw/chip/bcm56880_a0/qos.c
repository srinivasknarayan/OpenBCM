/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#include <bcm/qos.h>

#include <bcm_int/ltsw/mbcm/qos.h>
#include <bcm_int/ltsw/xfs/qos.h>
#include <bcm_int/ltsw/lt_intf.h>
#include <bcm_int/ltsw/dev.h>
#include <bcm_int/ltsw/chip/bcm56880_a0/variant_dispatch.h>

#include <shr/shr_debug.h>
#include <bcmltd/chip/bcmltd_str.h>

/******************************************************************************
 * Local definitions
 */

#define BSL_LOG_MODULE BSL_LS_BCM_QOS

/******************************************************************************
 * Private functions
 */


/*! QoS remarking table number. */
#define QOS_REMARK_TABLE_NUM 12

/* All Remarking tables. */
#define QOS_REMARK_TABLE_ALL \
            FLEX_QOS_EGR_PHB_0s, \
            FLEX_QOS_EGR_PHB_1s, \
            FLEX_QOS_EGR_PHB_2s, \
            FLEX_QOS_EGR_PHB_3s, \
            FLEX_QOS_EGR_PHB_4s, \
            FLEX_QOS_EGR_PHB_5s, \
            FLEX_QOS_EGR_PHB_6s, \
            FLEX_QOS_EGR_PHB_7s, \
            FLEX_QOS_EGR_PHB_8s, \
            FLEX_QOS_EGR_PHB_9s, \
            FLEX_QOS_EGR_PHB_10s, \
            FLEX_QOS_EGR_PHB_11s


static int
bcm56880_a0_ltsw_qos_init(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_qos_init(unit));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_qos_detach(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_qos_detach(unit));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_qos_table_clear_all(int unit)
{
    int i;
    const char *name[] = {QOS_REMARK_TABLE_ALL};
    SHR_FUNC_ENTER(unit);

    /* Clear ingress QoS map table. */
    SHR_IF_ERR_VERBOSE_EXIT
        (bcmi_lt_clear(unit, FLEX_QOS_ING_PHBs));

    /* Clear egress QoS map table. */
    for (i = 0; i < QOS_REMARK_TABLE_NUM; i++) {
        SHR_IF_ERR_VERBOSE_EXIT
            (bcmi_lt_clear(unit, name[i]));
    }

    /* Clear egress QoS policy table. */
    SHR_IF_ERR_VERBOSE_EXIT
        (bcmi_lt_clear(unit, FLEX_QOS_EGR_POLICYs));

    /* Clear ingress QoS strength table. */
    SHR_IF_ERR_VERBOSE_EXIT
        (bcmi_lt_clear(unit, FLEX_QOS_ING_PHB_INT_CNG_STRENGTH_PROFILEs));
    SHR_IF_ERR_VERBOSE_EXIT
        (bcmi_lt_clear(unit, FLEX_QOS_ING_PHB_INT_PRI_STRENGTH_PROFILEs));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_qos_map_create(
    int unit,
    uint32_t flags,
    int *map_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_qos_map_create(unit, flags, map_id));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_qos_map_destroy(
    int unit,
    int map_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_qos_map_destroy(unit, map_id));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_qos_map_add(
    int unit,
    uint32_t flags,
    bcm_qos_map_t *map,
    int map_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_qos_map_add(unit, flags, map, map_id));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_qos_map_delete(
    int unit,
    uint32_t flags,
    bcm_qos_map_t *map,
    int map_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_qos_map_delete(unit, flags, map, map_id));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_qos_port_map_set(
    int unit,
    bcm_gport_t port,
    int ing_map,
    int egr_map)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_qos_port_map_set(unit, port, ing_map, egr_map));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_qos_port_map_type_get(
    int unit,
    bcm_gport_t port,
    uint32_t flags,
    int *map_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_qos_port_map_type_get(unit, port, flags, map_id));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_qos_map_multi_get(
    int unit,
    uint32_t flags,
    int map_id,
    int array_size,
    bcm_qos_map_t *array,
    int *count)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_qos_map_multi_get(unit, flags, map_id, array_size, array, count));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_qos_multi_get(
    int unit,
    int array_size,
    int *map_id,
    int *flags,
    int *count)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_qos_multi_get(unit, array_size, map_id, flags, count));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_qos_map_id_resolve(
    int unit,
    int map_id,
    bcmi_ltsw_qos_map_type_t *type,
    int *ptr)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_qos_map_id_resolve(unit, map_id, type, ptr));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_qos_map_id_construct(
    int unit,
    int ptr,
    bcmi_ltsw_qos_map_type_t type,
    int *map_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_qos_map_id_construct(unit, ptr, type, map_id));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_qos_default_ptr_get(
    int unit,
    bcmi_ltsw_qos_map_type_t type,
    int *ptr)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_qos_default_ptr_get(unit, type, ptr));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_qos_dummy_ptr_get(
    int unit,
    bcmi_ltsw_qos_map_type_t type,
    int *ptr)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_qos_dummy_ptr_get(unit, type, ptr));

exit:
    SHR_FUNC_EXIT();
}

static void
bcm56880_a0_ltsw_qos_sw_dump(int unit)
{
    xfs_ltsw_qos_sw_dump(unit);
}

static int
bcm56880_a0_ltsw_qos_port_egr_l2_map_set(
    int unit,
    bcm_port_t port,
    int src)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_qos_port_egr_l2_map_set(unit, port, src));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_qos_port_egr_l2_map_get(
    int unit,
    bcm_port_t port,
    int *src)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_qos_port_egr_l2_map_get(unit, port, src));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_qos_port_attach(
    int unit,
    bcm_port_t port)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_qos_port_attach(unit, port));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_qos_port_detach(
    int unit,
    bcm_port_t port)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_qos_port_detach(unit, port));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_qos_vxlan_flags_map_ptr_get(
    int unit,
    int g_ena,
    int bum_ena,
    int *ptr)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_qos_vxlan_flags_map_ptr_get(unit, g_ena, bum_ena, ptr));

exit:
    SHR_FUNC_EXIT();
}

/*!
 * \brief Qos driver function variable for bcm56880_a0 device.
 */
static mbcm_ltsw_qos_drv_t bcm56880_a0_ltsw_qos_drv = {
    .qos_init = bcm56880_a0_ltsw_qos_init,
    .qos_detach = bcm56880_a0_ltsw_qos_detach,
    .qos_table_clear_all = bcm56880_a0_ltsw_qos_table_clear_all,
    .qos_map_create = bcm56880_a0_ltsw_qos_map_create,
    .qos_map_destroy = bcm56880_a0_ltsw_qos_map_destroy,
    .qos_map_add = bcm56880_a0_ltsw_qos_map_add,
    .qos_map_delete = bcm56880_a0_ltsw_qos_map_delete,
    .qos_port_map_set = bcm56880_a0_ltsw_qos_port_map_set,
    .qos_port_map_type_get = bcm56880_a0_ltsw_qos_port_map_type_get,
    .qos_map_multi_get = bcm56880_a0_ltsw_qos_map_multi_get,
    .qos_multi_get = bcm56880_a0_ltsw_qos_multi_get,
    .qos_map_id_resolve = bcm56880_a0_ltsw_qos_map_id_resolve,
    .qos_map_id_construct = bcm56880_a0_ltsw_qos_map_id_construct,
    .qos_default_ptr_get = bcm56880_a0_ltsw_qos_default_ptr_get,
    .qos_dummy_ptr_get = bcm56880_a0_ltsw_qos_dummy_ptr_get,
    .qos_sw_dump = bcm56880_a0_ltsw_qos_sw_dump,
    .qos_port_egr_l2_map_set = bcm56880_a0_ltsw_qos_port_egr_l2_map_set,
    .qos_port_egr_l2_map_get = bcm56880_a0_ltsw_qos_port_egr_l2_map_get,
    .qos_port_attach = bcm56880_a0_ltsw_qos_port_attach,
    .qos_port_detach = bcm56880_a0_ltsw_qos_port_detach,
    .qos_vxlan_flags_map_ptr_get = bcm56880_a0_ltsw_qos_vxlan_flags_map_ptr_get
};

/******************************************************************************
 * Public functions
 */

int
bcm56880_a0_ltsw_qos_drv_attach(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_qos_drv_set(unit, &bcm56880_a0_ltsw_qos_drv));

    SHR_IF_ERR_VERBOSE_EXIT
        (bcm56880_a0_ltsw_variant_drv_attach(unit, BCM56880_A0_LTSW_VARIANT_QOS));

exit:
    SHR_FUNC_EXIT();
}

