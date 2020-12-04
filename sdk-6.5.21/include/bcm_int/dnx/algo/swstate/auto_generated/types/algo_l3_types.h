/** \file algo/swstate/auto_generated/types/algo_l3_types.h
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

#ifndef __ALGO_L3_TYPES_H__
#define __ALGO_L3_TYPES_H__

#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <bcm_int/dnx/algo/l3/algo_l3.h>
#include <bcm_int/dnx/algo/l3/source_address_table_allocation.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr_internal.h>
#include <bcm_int/dnx/algo/template_mngr/template_mngr.h>
#include <bcm_int/dnx/algo/template_mngr/template_mngr_internal.h>
#include <bcm_int/dnx/l3/l3_ecmp.h>
#include <include/soc/dnx/dnx_data/auto_generated/dnx_data_l3.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/types/algo_consistent_hashing_types.h>
/*
 * STRUCTs
 */

/**
 * rif allocation manager
 */
typedef struct {
    /**
     * Access the RIF resource manager
     */
    dnx_algo_res_t rif_res_manager;
} rif_t;

/**
 * Info for the source address table allocation algorithm
 */
typedef struct {
    /**
     * Egress source address table
     */
    dnx_algo_template_t egress_source_address_table;
} source_address_table_allocation_t;

/**
 * Resource manager that handles vrrp EXEM table entries
 */
typedef struct {
    /**
     * Instance of the res bitmap used by the algorithm
     */
    dnx_algo_res_t res_bitmap;
} vrrp_exem_table_allocation_t;

/**
 * Info for the FEC resource allocation
 */
typedef struct {
    /**
     * Access the FEC resource manager
     */
    dnx_algo_res_t* fec_res_manager;
} l3_fec_res_t;

/**
 * Info for the EGR_POINTED resource allocation
 */
typedef struct {
    /**
     * Virtual egress pointed objects characterized by not using GLEM
     */
    dnx_algo_res_t egr_pointed_res_manager;
} l3_egr_pointed_res_t;

/**
 * Info for the FEC resource allocation
 */
typedef struct {
    /**
     * FEC allocation algorithm information
     */
    l3_fec_res_t l3_fec_res_mngr;
    /**
     * Super FEC resource type
     */
    uint32** fec_resource_type;
} l3_fec_alloc_t;

/**
 * Info for the ECMP tunnel priority modes resource allocation
 */
typedef struct {
    /**
     * ECMP tunnel priority modes
     */
    dnx_algo_res_t l3_ecmp_tunnel_priority_modes_res_mngr;
} l3_ecmp_tunnel_priority_modes_t;

/**
 * vip ecmp allocation manager
 */
typedef struct {
    /**
     * Access the VIP ECMP resource manager
     */
    dnx_algo_res_t vip_ecmp_res_manager;
} vip_ecmp_t;

/**
 * General VRRP EXEM tables information
 */
typedef struct {
    /**
     * Boolean, true if the EXEM1 is enabled
     */
    uint8 exem1_en;
    /**
     * Boolean, true if the EXEM3 is enabled
     */
    uint8 exem3_en;
} l3_vrrp_t;

/**
 * Algo L3 templates
 */
typedef struct {
    /**
     * ECMP consistent hashing manager handle
     */
    dnx_algo_template_t ecmp_consistent_manager;
    /**
     * VRRP MyMac TCAM VSI table
     */
    dnx_algo_template_t vrrp_vsi_tcam_table;
    /**
     * ECMP first/second/third hierarchy profile table
     */
    dnx_algo_template_t* ecmp_profile_hier_table;
    /**
     * VRRP MyMac TCAM EXEM table
     */
    dnx_algo_template_t vrrp_exem_tcam_table;
    /**
     * Ingress MyMac prefix table
     */
    dnx_algo_template_t ingress_mymac_prefix_table;
} algo_l3_template_t;

/**
 * L3 related sw state
 */
typedef struct {
    /**
     * Source address table allocation algorithm DB.
     */
    source_address_table_allocation_t source_address_table_allocation;
    /**
     * FEC allocation data for the resource manager
     */
    l3_fec_alloc_t fec_alloc;
    /**
     * EGR_POINTED allocation data for the resource manager
     */
    l3_egr_pointed_res_t egr_pointed_alloc;
    /**
     * Algo L3 templates
     */
    algo_l3_template_t algo_l3_templates;
    /**
     * VRRP EXEM table station id allocation algorithm DB
     */
    vrrp_exem_table_allocation_t vrrp_exem_l2_station_id_alloc;
    /**
     * VRRP EXEM table information
     */
    l3_vrrp_t vrrp_exem;
    /**
     * RIF allocation data for the resource manager
     */
    rif_t rif_alloc;
    /**
     * ECMP tunnel priority modes resource manager
     */
    l3_ecmp_tunnel_priority_modes_t* tp_modes;
    /**
     * VIP ECMP allocation data for the resource manager
     */
    vip_ecmp_t vip_ecmp_alloc;
} algo_l3_sw_state_t;


#endif /* __ALGO_L3_TYPES_H__ */
