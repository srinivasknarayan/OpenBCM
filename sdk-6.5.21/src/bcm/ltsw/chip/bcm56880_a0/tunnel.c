/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#include <bcm_int/ltsw/mbcm/tunnel.h>
#include <bcm_int/ltsw/xfs/tunnel.h>
#include <bcm_int/ltsw/chip/bcm56880_a0/variant_dispatch.h>

#include <shr/shr_debug.h>

/******************************************************************************
 * Local definitions
 */

#define BSL_LOG_MODULE BSL_LS_BCM_TUNNEL

/******************************************************************************
 * Private functions
 */

static int
bcm56880_a0_ltsw_tunnel_init_lt_db(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_tunnel_init_lt_db(unit));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_tunnel_init(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_tunnel_init(unit));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_tunnel_free_resource(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_tunnel_free_resource(unit));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_tunnel_initiator_create(
    int unit,
    uint32_t flags,
    bcm_tunnel_initiator_t *tnl_info)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_tunnel_initiator_create(unit, flags, tnl_info));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_tunnel_initiator_del(
    int unit,
    uint32_t flags,
    bcm_gport_t tunnel_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_tunnel_initiator_del(unit, flags, tunnel_id));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_tunnel_initiator_get(
    int unit,
    bcm_l3_intf_t *intf,
    bcm_gport_t tunnel_id,
    bcm_tunnel_initiator_t *tnl_info)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_tunnel_initiator_get(unit, intf, tunnel_id, tnl_info));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_tunnel_initiator_used_get(
    int unit,
    bcm_gport_t tunnel_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_tunnel_initiator_used_get(unit, tunnel_id));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_tunnel_initiator_traverse(
    int unit,
    bcm_tunnel_initiator_traverse_cb cb,
    void *user_data)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_tunnel_initiator_traverse(unit, cb, user_data));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_tunnel_terminator_add(
    int unit,
    bcm_tunnel_terminator_t *tnl_term_info)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_tunnel_terminator_add(unit, tnl_term_info));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_tunnel_terminator_get(
    int unit,
    bcm_tunnel_terminator_t *tnl_term_info)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_tunnel_terminator_get(unit, tnl_term_info));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_tunnel_terminator_delete(
    int unit,
    bcm_tunnel_terminator_t *tnl_term_info)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_tunnel_terminator_delete(unit, tnl_term_info));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_tunnel_terminator_traverse(
    int unit,
    bcm_tunnel_terminator_traverse_cb cb,
    void *user_data)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_tunnel_terminator_traverse(unit, cb, user_data));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_tunnel_encap_seq_profile_init(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_tunnel_encap_seq_profile_init(unit));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_tunnel_encap_seq_profile_deinit(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_tunnel_encap_seq_profile_deinit(unit));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_tunnel_encap_seq_num_alloc(
    int unit,
    uint32_t flags,
    bcmi_ltsw_tunnel_encap_seq_num_type_t type,
    int *index)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_tunnel_encap_seq_num_alloc(unit, flags, type, index));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_tunnel_encap_seq_num_free(
    int unit,
    bcmi_ltsw_tunnel_encap_seq_num_type_t type,
    int index)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_tunnel_encap_seq_num_free(unit, type, index));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_tunnel_encap_seq_num_set(
    int unit,
    int idx,
    int pipe,
    uint32_t number)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_tunnel_encap_seq_num_set(unit, idx, pipe, number));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_tunnel_encap_seq_num_get(
    int unit,
    int idx,
    int pipe,
    uint32_t *number)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_tunnel_encap_seq_num_get(unit, idx, pipe, number));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_tunnel_encap_seq_profile_add(
    int unit,
    bcmi_ltsw_tunnel_encap_seq_profile_t *entry,
    int *index)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_tunnel_encap_seq_profile_add(unit, entry, index));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_tunnel_encap_seq_profile_get(
    int unit,
    bcmi_ltsw_tunnel_encap_seq_profile_t *entry,
    int index)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_tunnel_encap_seq_profile_get(unit, entry, index));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_tunnel_encap_seq_profile_delete(
    int unit,
    int index)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_tunnel_encap_seq_profile_delete(unit, index));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_tunnel_encap_seq_profile_recover(
    int unit,
    int index)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_tunnel_encap_seq_profile_recover(unit, index));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_tunnel_type_support_check(
    int unit,
    bcm_tunnel_type_t tnl_type,
    int *tunnel_term,
    int *tunnel_init)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_tunnel_type_support_check(unit, tnl_type, tunnel_term, tunnel_init));

exit:
    SHR_FUNC_EXIT();
}

/*!
 * \brief Tunnel driver function variable for bcm56880_a0 device.
 */
static mbcm_ltsw_tunnel_drv_t bcm56880_a0_ltsw_tunnel_drv = {
    .tunnel_init_lt_db = bcm56880_a0_ltsw_tunnel_init_lt_db,
    .tunnel_init = bcm56880_a0_ltsw_tunnel_init,
    .tunnel_free_resource = bcm56880_a0_ltsw_tunnel_free_resource,
    .tunnel_initiator_create = bcm56880_a0_ltsw_tunnel_initiator_create,
    .tunnel_initiator_del = bcm56880_a0_ltsw_tunnel_initiator_del,
    .tunnel_initiator_get = bcm56880_a0_ltsw_tunnel_initiator_get,
    .tunnel_initiator_used_get = bcm56880_a0_ltsw_tunnel_initiator_used_get,
    .tunnel_initiator_traverse = bcm56880_a0_ltsw_tunnel_initiator_traverse,
    .tunnel_terminator_add = bcm56880_a0_ltsw_tunnel_terminator_add,
    .tunnel_terminator_get = bcm56880_a0_ltsw_tunnel_terminator_get,
    .tunnel_terminator_delete = bcm56880_a0_ltsw_tunnel_terminator_delete,
    .tunnel_terminator_traverse = bcm56880_a0_ltsw_tunnel_terminator_traverse,
    .tunnel_encap_seq_profile_init = bcm56880_a0_ltsw_tunnel_encap_seq_profile_init,
    .tunnel_encap_seq_profile_deinit = bcm56880_a0_ltsw_tunnel_encap_seq_profile_deinit,
    .tunnel_encap_seq_num_alloc = bcm56880_a0_ltsw_tunnel_encap_seq_num_alloc,
    .tunnel_encap_seq_num_free = bcm56880_a0_ltsw_tunnel_encap_seq_num_free,
    .tunnel_encap_seq_num_set = bcm56880_a0_ltsw_tunnel_encap_seq_num_set,
    .tunnel_encap_seq_num_get = bcm56880_a0_ltsw_tunnel_encap_seq_num_get,
    .tunnel_encap_seq_profile_add = bcm56880_a0_ltsw_tunnel_encap_seq_profile_add,
    .tunnel_encap_seq_profile_get = bcm56880_a0_ltsw_tunnel_encap_seq_profile_get,
    .tunnel_encap_seq_profile_delete = bcm56880_a0_ltsw_tunnel_encap_seq_profile_delete,
    .tunnel_encap_seq_profile_recover = bcm56880_a0_ltsw_tunnel_encap_seq_profile_recover,
    .tunnel_type_support_check = bcm56880_a0_ltsw_tunnel_type_support_check,
};

/******************************************************************************
 * Public functions
 */

int
bcm56880_a0_ltsw_tunnel_drv_attach(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_tunnel_drv_set(unit, &bcm56880_a0_ltsw_tunnel_drv));

    SHR_IF_ERR_VERBOSE_EXIT
        (bcm56880_a0_ltsw_variant_drv_attach(unit, BCM56880_A0_LTSW_VARIANT_TUNNEL));

exit:
    SHR_FUNC_EXIT();
}

