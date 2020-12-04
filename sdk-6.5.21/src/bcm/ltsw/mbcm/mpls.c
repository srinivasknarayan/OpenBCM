/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#include <bcm/types.h>

#include <bcm_int/ltsw/mbcm/mpls.h>
#include <bcm_int/ltsw/mbcm/mbcm.h>

#include <shr/shr_bitop.h>
#include <shr/shr_debug.h>

/******************************************************************************
 * Local definitions
 */

#define BSL_LOG_MODULE BSL_LS_BCM_MPLS

/*!
 * \brief The Mpls mbcm drivers.
 */
static mbcm_ltsw_mpls_drv_t mbcm_ltsw_mpls_drv[BCM_MAX_NUM_UNITS];

/******************************************************************************
 * Private functions
 */

/******************************************************************************
 * Public functions
 */

int
mbcm_ltsw_mpls_drv_set(
    int unit,
    mbcm_ltsw_mpls_drv_t *drv)
{
    mbcm_ltsw_mpls_drv_t *local = &mbcm_ltsw_mpls_drv[unit];

    SHR_FUNC_ENTER(unit);


    mbcm_ltsw_drv_init((mbcm_ltsw_drv_t *)local,
                       (mbcm_ltsw_drv_t *)drv,
                       sizeof(*local)/MBCM_LTSW_FNPTR_SZ);

    SHR_EXIT();

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_sw_dump(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_sw_dump(unit));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_init(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_init(unit));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_detach(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_detach(unit));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_tnl_switch_add(
    int unit,
    bcm_mpls_tunnel_switch_t *info)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_tnl_switch_add(unit, info));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_tnl_switch_delete(
    int unit,
    bcm_mpls_tunnel_switch_t *info)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_tnl_switch_delete(unit, info));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_tnl_switch_get(
    int unit,
    bcm_mpls_tunnel_switch_t *info)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_tnl_switch_get(unit, info));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_tnl_switch_traverse(
    int unit,
    bcm_mpls_tunnel_switch_traverse_cb cb,
    void *user_data)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_tnl_switch_traverse(unit, cb, user_data));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_tnl_switch_delete_all(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_tnl_switch_delete_all(unit));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_tnl_initiator_clear(
    int unit,
    bcm_if_t intf)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_tnl_initiator_clear(unit, intf));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_tnl_initiator_clear_all(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_tnl_initiator_clear_all(unit));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_tnl_initiator_get(
    int unit,
    bcm_if_t intf,
    int label_max,
    bcm_mpls_egress_label_t *label_array,
    int *label_count)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_tnl_initiator_get(unit, intf, label_max, label_array, label_count));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_tnl_initiator_set(
    int unit,
    bcm_if_t intf,
    int num_labels,
    bcm_mpls_egress_label_t *label_array)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_tnl_initiator_set(unit, intf, num_labels, label_array));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_tnl_initiator_flexctr_object_get(
    int unit,
    bcm_if_t intf,
    uint32_t *value)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_tnl_initiator_flexctr_object_get(unit, intf, value));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_tnl_encap_create(
    int unit,
    uint32_t options,
    bcm_mpls_tunnel_encap_t *tunnel_encap)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_tnl_encap_create(unit, options, tunnel_encap));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_tnl_encap_get(
    int unit,
    bcm_mpls_tunnel_encap_t *tunnel_encap)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_tnl_encap_get(unit, tunnel_encap));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_tnl_encap_destroy(
    int unit,
    bcm_gport_t tunnel_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_tnl_encap_destroy(unit, tunnel_id));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_tnl_encap_destroy_all(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_tnl_encap_destroy_all(unit));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_vfi_op(
    int unit,
    bcmlt_opcode_t opcode,
    int vfi_idx,
    bcm_mpls_vpn_config_t *info)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_vfi_op(unit, opcode, vfi_idx, info));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_vpws_info_get(
    int unit,
    int *idx_min,
    int *idx_max)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_vpws_info_get(unit, idx_min, idx_max));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_port_add(
    int unit,
    bcm_vpn_t vpn,
    bcm_mpls_port_t *mpls_port)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_port_add(unit, vpn, mpls_port));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_port_get(
    int unit,
    bcm_vpn_t vpn,
    bcm_gport_t mpls_port_id,
    bcm_mpls_port_t *mpls_port)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_port_get(unit, vpn, mpls_port_id, mpls_port));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_vpls_port_get_all(
    int unit,
    bcm_vpn_t vpn,
    int port_max,
    bcm_mpls_port_t *port_array,
    int *port_count)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_vpls_port_get_all(unit, vpn, port_max, port_array, port_count));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_port_delete(
    int unit,
    bcm_vpn_t vpn,
    bcm_gport_t mpls_port_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_port_delete(unit, vpn, mpls_port_id));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_vpls_port_delete_by_vpn(
    int unit,
    bcm_vpn_t vpn)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_vpls_port_delete_by_vpn(unit, vpn));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_vpls_port_delete_all(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_vpls_port_delete_all(unit));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_port_attach(
    int unit,
    bcm_gport_t src_port_id,
    bcm_gport_t dst_port_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_port_attach(unit, src_port_id, dst_port_id));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_port_detach(
    int unit,
    bcm_gport_t mpls_port_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_port_detach(unit, mpls_port_id));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_port_validate(
    int unit,
    bcm_gport_t mpls_port_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_port_validate(unit, mpls_port_id));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_vlan_list_get(
    int unit,
    int *vlan_cnt,
    int *vlan_list)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_vlan_list_get(unit, vlan_cnt, vlan_list));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_special_label_identifier_add(
    int unit,
    bcm_mpls_special_label_t label_info)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_special_label_identifier_add(unit, label_info));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_special_label_identifier_get(
    int unit,
    bcm_mpls_special_label_t *label_info)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_special_label_identifier_get(unit, label_info));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_special_label_identifier_delete(
    int unit,
    bcm_mpls_special_label_t label_info)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_special_label_identifier_delete(unit, label_info));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_special_label_identifier_delete_all(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_special_label_identifier_delete_all(unit));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_special_label_identifier_traverse(
    int unit,
    bcm_mpls_special_label_identifier_traverse_cb cb,
    void *user_data)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_special_label_identifier_traverse(unit, cb, user_data));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_global_label_range_set(
    int unit,
    int range_num,
    int range_min,
    int label_val)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_global_label_range_set(unit, range_num, range_min, label_val));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_global_label_range_get(
    int unit,
    int range_num,
    int *min_label,
    int *max_label)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_global_label_range_get(unit, range_num, min_label, max_label));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_global_control_set(
    int unit,
    bcmi_ltsw_mpls_global_ctrl_t control_type,
    int value)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_global_control_set(unit, control_type, value));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_global_control_get(
    int unit,
    bcmi_ltsw_mpls_global_ctrl_t control_type,
    int *value)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_global_control_get(unit, control_type, value));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_tnl_dst_mac_profile_add(
    int unit,
    uint64_t mac,
    int *index)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_tnl_dst_mac_profile_add(unit, mac, index));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_tnl_dst_mac_profile_del(
    int unit,
    int index)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_tnl_dst_mac_profile_del(unit, index));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_tnl_dst_mac_profile_get(
    int unit,
    int index,
    uint64_t *mac)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_tnl_dst_mac_profile_get(unit, index, mac));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_label_flexctr_attach(
    int unit,
    bcm_mpls_label_t label,
    bcm_gport_t port,
    bcmi_ltsw_flexctr_counter_info_t *info)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_label_flexctr_attach(unit, label, port, info));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_label_flexctr_detach(
    int unit,
    bcm_mpls_label_t label,
    bcm_gport_t port)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_label_flexctr_detach(unit, label, port));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_label_flexctr_info_get(
    int unit,
    bcm_mpls_label_t label,
    bcm_gport_t port,
    bcmi_ltsw_flexctr_counter_info_t *info)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_label_flexctr_info_get(unit, label, port, info));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_label_flexctr_object_set(
    int unit,
    bcm_mpls_label_t label,
    bcm_gport_t port,
    uint32_t value)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_label_flexctr_object_set(unit, label, port, value));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_label_flexctr_object_get(
    int unit,
    bcm_mpls_label_t label,
    bcm_gport_t port,
    uint32_t *value)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_label_flexctr_object_get(unit, label, port, value));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_encap_label_add(
    int unit,
    bcmi_ltsw_mpls_encap_label_info_t *label_info,
    int *label_index)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_encap_label_add(unit, label_info, label_index));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_encap_label_get(
    int unit,
    int label_index,
    bcmi_ltsw_mpls_encap_label_info_t *label_info)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_encap_label_get(unit, label_index, label_info));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_encap_label_delete(
    int unit,
    int label_index)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_encap_label_delete(unit, label_index));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_encap_label_ref_inc(
    int unit,
    int label_index)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_encap_label_ref_inc(unit, label_index));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_port_match_vp_replace(
    int unit,
    bcm_gport_t mpls_port_id,
    int new_vp)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_port_match_vp_replace(unit, mpls_port_id, new_vp));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_port_match_vp_get(
    int unit,
    bcm_gport_t mpls_port_id,
    int *new_vp)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_port_match_vp_get(unit, mpls_port_id, new_vp));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_control_pkt_add(
    int unit,
    uint32_t options,
    bcm_mpls_control_pkt_match_t *match,
    bcm_mpls_control_pkt_action_t *action)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_control_pkt_add(unit, options, match, action));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_control_pkt_get(
    int unit,
    bcm_mpls_control_pkt_match_t *match,
    bcm_mpls_control_pkt_action_t *action)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_control_pkt_get(unit, match, action));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_control_pkt_delete(
    int unit,
    bcm_mpls_control_pkt_match_t *match)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_control_pkt_delete(unit, match));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_control_pkt_traverse(
    int unit,
    bcm_mpls_control_pkt_traverse_cb cb,
    void *user_data)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_control_pkt_traverse(unit, cb, user_data));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_control_pkt_delete_all(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_control_pkt_delete_all(unit));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_label_stat_get(
    int unit,
    bcm_mpls_label_t label,
    bcm_gport_t mpls_port,
    bcm_mpls_stat_t stat,
    uint64_t *val)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_label_stat_get(unit, label, mpls_port, stat, val));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_label_stat_clear(
    int unit,
    bcm_mpls_label_t label,
    bcm_gport_t mpls_port,
    bcm_mpls_stat_t stat)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_label_stat_clear(unit, label, mpls_port, stat));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_port_match_set(
    int unit,
    bcm_gport_t mpls_port_id,
    bcmi_ltsw_mpls_port_match_t *match)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_port_match_set(unit, mpls_port_id, match));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_port_match_clear(
    int unit,
    bcm_gport_t mpls_port_id,
    bcmi_ltsw_mpls_port_match_t *match)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_port_match_clear(unit, mpls_port_id, match));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_port_match_multi_get(
    int unit,
    bcm_gport_t mpls_port_id,
    int size,
    bcmi_ltsw_mpls_port_match_t *match_array,
    int *count)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_port_match_multi_get(unit, mpls_port_id, size, match_array, count));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_port_match_delete_all(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_port_match_delete_all(unit));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_mpls_lt_db_get(
    int unit,
    bcmint_mpls_lt_db_t *lt_db)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_mpls_drv[unit].mpls_lt_db_get(unit, lt_db));

exit:
    SHR_FUNC_EXIT();
}

