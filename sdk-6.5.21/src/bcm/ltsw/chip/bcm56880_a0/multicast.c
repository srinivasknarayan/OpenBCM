/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#include <bcm_int/ltsw/mbcm/multicast.h>
#include <bcm_int/ltsw/xfs/multicast.h>

#include <shr/shr_debug.h>

/******************************************************************************
 * Local definitions
 */

#define BSL_LOG_MODULE BSL_LS_BCM_MULTICAST

/******************************************************************************
 * Private functions
 */

static int
bcm56880_a0_ltsw_multicast_init(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_multicast_init(unit));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_multicast_detach(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_multicast_detach(unit));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_multicast_pub_info_get(
    int unit,
    bcmint_multicast_pub_info_t *mc_pub)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_multicast_pub_info_get(unit, mc_pub));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_multicast_l2_grp_create(
    int unit,
    uint32_t l2mc_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_multicast_l2_grp_create(unit, l2mc_id));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_multicast_l2_grp_destroy(
    int unit,
    uint32_t l2mc_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_multicast_l2_grp_destroy(unit, l2mc_id));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_multicast_l2_grp_update(
    int unit,
    uint32_t l2mc_id,
    bcmint_multicast_l2_grp_op_code_t opcode,
    bcm_port_t *port_array,
    uint32_t port_count)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_multicast_l2_grp_update(unit, l2mc_id, opcode, port_array, port_count));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_multicast_l2_egress_get(
    int unit,
    uint32_t l2mc_id,
    int port_size,
    bcm_gport_t *port_array,
    bcm_if_t *encap_id_array,
    int *port_count)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_multicast_l2_egress_get(unit, l2mc_id, port_size, port_array, encap_id_array, port_count));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_multicast_l3_grp_create(
    int unit,
    int type,
    uint32_t l3mc_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_multicast_l3_grp_create(unit, type, l3mc_id));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_multicast_l3_grp_destroy(
    int unit,
    uint32_t l3mc_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_multicast_l3_grp_destroy(unit, l3mc_id));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_multicast_l3_grp_update(
    int unit,
    uint32_t l3mc_id,
    bcmint_multicast_l3_grp_op_code_t opcode,
    bcm_port_t port,
    bcm_if_t *encap_id_array,
    uint32_t encap_count)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_multicast_l3_grp_update(unit, l3mc_id, opcode, port, encap_id_array, encap_count));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_multicast_l3_egress_get(
    int unit,
    uint32_t l3mc_id,
    int port_size,
    bcm_gport_t *port_array,
    bcm_if_t *encap_id_array,
    int *port_count)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_multicast_l3_egress_get(unit, l3mc_id, port_size, port_array, encap_id_array, port_count));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_multicast_encap_create(
    int unit,
    bcm_multicast_encap_t *mc_encap,
    bcm_if_t *encap_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_multicast_encap_create(unit, mc_encap, encap_id));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_multicast_encap_destroy(
    int unit,
    bcm_if_t encap_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_multicast_encap_destroy(unit, encap_id));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_multicast_encap_get(
    int unit,
    bcm_if_t encap_id,
    bcm_multicast_encap_t *mc_encap)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_multicast_encap_get(unit, encap_id, mc_encap));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_multicast_encap_recover(
    int unit,
    bcm_if_t encap_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_multicast_encap_recover(unit, encap_id));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_multicast_def_vlan_grp_id_get(
    int unit,
    uint32_t *grp_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_multicast_def_vlan_grp_id_get(unit, grp_id));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_multicast_def_vlan_grp_update(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_multicast_def_vlan_grp_update(unit));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_multicast_l2_l3_combined_set(
    int unit,
    bool enable)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_multicast_l2_l3_combined_set(unit, enable));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_multicast_l2_l3_combined_get(
    int unit,
    bool *enable)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_multicast_l2_l3_combined_get(unit, enable));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_multicast_remap_group_set(
    int unit,
    int mc_index_from,
    int mc_index_to)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_multicast_remap_group_set(unit, mc_index_from, mc_index_to));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_multicast_remap_group_get(
    int unit,
    int mc_index_from,
    int *mc_index_to)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_multicast_remap_group_get(unit, mc_index_from, mc_index_to));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_multicast_vlan_flood_init(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_multicast_vlan_flood_init(unit));

exit:
    SHR_FUNC_EXIT();
}

/*!
 * \brief Multicast driver function variable for bcm56880_a0 device.
 */
static mbcm_ltsw_multicast_drv_t bcm56880_a0_ltsw_multicast_drv = {
    .multicast_init = bcm56880_a0_ltsw_multicast_init,
    .multicast_detach = bcm56880_a0_ltsw_multicast_detach,
    .multicast_pub_info_get = bcm56880_a0_ltsw_multicast_pub_info_get,
    .multicast_l2_grp_create = bcm56880_a0_ltsw_multicast_l2_grp_create,
    .multicast_l2_grp_destroy = bcm56880_a0_ltsw_multicast_l2_grp_destroy,
    .multicast_l2_grp_update = bcm56880_a0_ltsw_multicast_l2_grp_update,
    .multicast_l2_egress_get = bcm56880_a0_ltsw_multicast_l2_egress_get,
    .multicast_l3_grp_create = bcm56880_a0_ltsw_multicast_l3_grp_create,
    .multicast_l3_grp_destroy = bcm56880_a0_ltsw_multicast_l3_grp_destroy,
    .multicast_l3_grp_update = bcm56880_a0_ltsw_multicast_l3_grp_update,
    .multicast_l3_egress_get = bcm56880_a0_ltsw_multicast_l3_egress_get,
    .multicast_encap_create = bcm56880_a0_ltsw_multicast_encap_create,
    .multicast_encap_destroy = bcm56880_a0_ltsw_multicast_encap_destroy,
    .multicast_encap_get = bcm56880_a0_ltsw_multicast_encap_get,
    .multicast_encap_recover = bcm56880_a0_ltsw_multicast_encap_recover,
    .multicast_def_vlan_grp_id_get = bcm56880_a0_ltsw_multicast_def_vlan_grp_id_get,
    .multicast_def_vlan_grp_update = bcm56880_a0_ltsw_multicast_def_vlan_grp_update,
    .multicast_l2_l3_combined_set = bcm56880_a0_ltsw_multicast_l2_l3_combined_set,
    .multicast_l2_l3_combined_get = bcm56880_a0_ltsw_multicast_l2_l3_combined_get,
    .multicast_remap_group_set = bcm56880_a0_ltsw_multicast_remap_group_set,
    .multicast_remap_group_get = bcm56880_a0_ltsw_multicast_remap_group_get,
    .multicast_vlan_flood_init = bcm56880_a0_ltsw_multicast_vlan_flood_init
};

/******************************************************************************
 * Public functions
 */

int
bcm56880_a0_ltsw_multicast_drv_attach(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_multicast_drv_set(unit, &bcm56880_a0_ltsw_multicast_drv));

exit:
    SHR_FUNC_EXIT();
}

