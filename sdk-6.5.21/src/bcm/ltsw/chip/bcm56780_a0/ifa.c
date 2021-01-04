/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
#include <shr/shr_debug.h>
#include <bcm/mirror.h>

#include <bcm_int/ltsw_dispatch.h>
#include <bcm_int/ltsw/switch_int.h>
#include <bcm_int/ltsw/mbcm/ifa.h>
#include <bcm_int/ltsw/xfs/ifa.h>
#include <bcm_int/ltsw/chip/bcm56780_a0/variant_dispatch.h>
#include <bcm_int/ltsw/property.h>

/******************************************************************************
 * Local definitions
 */

#define BSL_LOG_MODULE BSL_LS_BCM_IFA

/*! 1st reserved EP Recirculate profile ID for IFA. */
#define EP_RECIRC_PROFILE_IFA_RESERVED_ID_1 3

/******************************************************************************
 * Private functions
 */

static int
bcm56780_a0_ltsw_ifa_init(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_ifa_init(unit));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_ifa_detach(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_ifa_detach(unit));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_ifa_collector_set(
    int unit,
    uint32_t options,
    bcm_ifa_collector_info_t *collector_info)
{
    bool inited;
    int ifa_enable, rv;
    bcm_mirror_destination_t mirror_dest;
    bcm_mirror_source_t source;

    SHR_FUNC_ENTER(unit);

    /* Checking wehtehr the EP configuration inited. */
    SHR_IF_ERR_VERBOSE_EXIT
        (bcmint_ltsw_switch_init_status_get(unit, &inited));
    ifa_enable = bcmi_ltsw_property_get(unit, BCMI_CPN_IFA_ENABLE, 0);

    if (!inited || !ifa_enable) {
        SHR_IF_ERR_MSG_EXIT
            (SHR_E_UNAVAIL,
             (BSL_META_U(unit, "IFA EP RECIRC configuration not init.\n")));
    }

    /* Using the mirror encap internally for ifa_collector, to align with legacy use case. */
    bcm_mirror_source_t_init(&source);
    source.type = bcmMirrorSourceTypeEpRecirc;
    source.ep_recirc_profile_id = EP_RECIRC_PROFILE_IFA_RESERVED_ID_1;

    if (!(options & BCM_IFA_COLLECTOR_DETACH)) {
        bcm_mirror_destination_t_init(&mirror_dest);

        /* Retrieve previous configuration. */
        SHR_IF_ERR_VERBOSE_EXIT
            (bcm_ltsw_mirror_destination_get(
                unit, collector_info->mirror_dest_id, &mirror_dest));

        mirror_dest.flags |= BCM_MIRROR_DEST_WITH_ID;
        mirror_dest.flags |= BCM_MIRROR_DEST_REPLACE;
        if (collector_info->transport_type == bcmIfaCollectorTransportTypeIpv4Udp) {
            /* IPv4 header. */
            mirror_dest.version    = 4;
            mirror_dest.src_addr   = collector_info->ipv4.src_ip;
            mirror_dest.dst_addr   = collector_info->ipv4.dst_ip;
            mirror_dest.tos        = collector_info->ipv4.dscp;
            mirror_dest.ttl        = collector_info->ipv4.ttl;
        } else if (collector_info->transport_type == bcmIfaCollectorTransportTypeIpv6Udp) {
            /* IPv6 header. */
            mirror_dest.version    = 6;
            sal_memcpy(mirror_dest.src6_addr, collector_info->ipv6.src_ip, 16);
            sal_memcpy(mirror_dest.dst6_addr, collector_info->ipv6.dst_ip, 16);
            mirror_dest.tos        = collector_info->ipv6.traffic_class;
            mirror_dest.flow_label = collector_info->ipv6.flow_label;
            mirror_dest.ttl        = collector_info->ipv6.hop_limit;
        }
        sal_memcpy(mirror_dest.dst_mac, collector_info->eth.dst_mac, 6);
        sal_memcpy(mirror_dest.src_mac, collector_info->eth.src_mac, 6);
        mirror_dest.tpid = collector_info->eth.outer_tpid;
        mirror_dest.vlan_id = collector_info->eth.outer_vlan_tag;
        mirror_dest.udp_src_port = collector_info->udp.src_port;
        mirror_dest.udp_dst_port = collector_info->udp.dst_port;
        mirror_dest.mirror_dest_id = collector_info->mirror_dest_id;

        SHR_IF_ERR_VERBOSE_EXIT
            (bcm_ltsw_mirror_destination_create(unit, &mirror_dest));

        SHR_IF_ERR_VERBOSE_EXIT
            (bcm_ltsw_mirror_source_dest_add
                (unit, &source, mirror_dest.mirror_dest_id));
    } else {
        rv = bcm_ltsw_mirror_source_dest_delete
                (unit, &source, collector_info->mirror_dest_id);

        if (rv != SHR_E_NOT_FOUND) {
            SHR_IF_ERR_EXIT(rv);
        }
    }

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_ifa_collector_get(
    int unit,
    bcm_ifa_collector_info_t *collector_info)
{
    int ifa_enable;
    bool inited;
    bcm_mirror_destination_t mirror_dest;

    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (bcmint_ltsw_switch_init_status_get(unit, &inited));
    ifa_enable = bcmi_ltsw_property_get(unit, BCMI_CPN_IFA_ENABLE, 0);

    if (!inited || !ifa_enable) {
        SHR_IF_ERR_MSG_EXIT
            (SHR_E_UNAVAIL,
             (BSL_META_U(unit, "IFA EP RECIRC configuration not init.\n")));
    }

    SHR_IF_ERR_VERBOSE_EXIT
        (bcm_ltsw_mirror_destination_get(
            unit, collector_info->mirror_dest_id, &mirror_dest));

    sal_memcpy(collector_info->eth.dst_mac, mirror_dest.dst_mac, 6);
    sal_memcpy(collector_info->eth.src_mac, mirror_dest.src_mac, 6);
    collector_info->eth.outer_tpid = mirror_dest.tpid;
    collector_info->eth.outer_vlan_tag = mirror_dest.vlan_id;
    collector_info->udp.src_port = mirror_dest.udp_src_port;
    collector_info->udp.dst_port = mirror_dest.udp_dst_port;
    if (mirror_dest.version == 4) {
        collector_info->ipv4.src_ip = mirror_dest.src_addr;
        collector_info->ipv4.dst_ip = mirror_dest.dst_addr;
        collector_info->ipv4.ttl = mirror_dest.ttl;
        collector_info->ipv4.dscp = mirror_dest.tos;
        collector_info->transport_type = bcmIfaCollectorTransportTypeIpv4Udp;
    } else if (mirror_dest.version == 6) {
        sal_memcpy(collector_info->ipv6.src_ip, mirror_dest.src6_addr, 16);
        sal_memcpy(collector_info->ipv6.dst_ip, mirror_dest.dst6_addr, 16);
        collector_info->ipv6.traffic_class = mirror_dest.tos;
        collector_info->ipv6.flow_label = mirror_dest.flow_label;
        collector_info->ipv6.hop_limit = mirror_dest.ttl;
        collector_info->transport_type = bcmIfaCollectorTransportTypeIpv6Udp;
    }

exit:
    SHR_FUNC_EXIT();
}

/*!
 * \brief Ifa driver function variable for bcm56780_a0 device.
 */
static mbcm_ltsw_ifa_drv_t bcm56780_a0_ltsw_ifa_drv = {
    .ifa_init = bcm56780_a0_ltsw_ifa_init,
    .ifa_detach = bcm56780_a0_ltsw_ifa_detach,
    .ifa_collector_set = bcm56780_a0_ltsw_ifa_collector_set,
    .ifa_collector_get = bcm56780_a0_ltsw_ifa_collector_get,
};

/******************************************************************************
 * Public functions
 */

int
bcm56780_a0_ltsw_ifa_drv_attach(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_ifa_drv_set(unit, &bcm56780_a0_ltsw_ifa_drv));

    SHR_IF_ERR_VERBOSE_EXIT
        (bcm56780_a0_ltsw_variant_drv_attach(unit, BCM56780_A0_LTSW_VARIANT_IFA));

exit:
    SHR_FUNC_EXIT();
}
