/** \file algo/swstate/auto_generated/types/dnx_mirror_types.h
 *
 * sw state types (structs/enums/typedefs)
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 */
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef __DNX_MIRROR_TYPES_H__
#define __DNX_MIRROR_TYPES_H__

#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <bcm_int/dnx/algo/port/algo_port_mgmt.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr_internal.h>
#include <bcm_int/dnx/algo/template_mngr/template_mngr.h>
#include <bcm_int/dnx/algo/template_mngr/template_mngr_internal.h>
#include <bcm_int/dnx/mirror/mirror.h>
#include <bcm_int/dnx/mirror/mirror_rcy.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_device.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_port.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_snif.h>
#include <soc/dnxc/swstate/types/sw_state_pbmp.h>
/*
 * STRUCTs
 */

/**
 * DB for used by mirror
 */
typedef struct {
    /**
     * Per core mapping from Mirror channel to Egress interface
     */
    int channel_to_egress_if[DNX_DATA_MAX_DEVICE_GENERAL_NOF_CORES][DNX_DATA_MAX_PORT_GENERAL_MAX_NOF_CHANNELS];
    /**
     * What mirror priorities are mapped for each egress port
     */
    bcm_pbmp_t egress_mirror_priority[DNX_MIRROR_RCY_PRIORITY_NOF];
    /**
     * SNIF_INGRESS_PROFILES_MIRROR
     */
    dnx_algo_res_t snif_ingress_profiles_mirror;
    /**
     * SNIF_INGRESS_PROFILES_SNOOP
     */
    dnx_algo_res_t snif_ingress_profiles_snoop;
    /**
     * SNIF_INGRESS_PROFILES_STAT_SAMPLING
     */
    dnx_algo_res_t snif_ingress_profiles_stat_sampling;
    /**
     * SNIF_EGRESS_VLAN_PROFILES_MIRROR
     */
    dnx_algo_template_t* snif_egress_vlan_profiles_mirror;
    /**
     * SNIF_INGRESS_VLAN_PROFILES_MIRROR
     */
    dnx_algo_template_t* snif_ingress_vlan_profiles_mirror;
    /**
     * mirror on drop sniff profiles
     */
    int* mirror_on_drop_profile;
} dnx_mirror_db_t;


#endif /* __DNX_MIRROR_TYPES_H__ */