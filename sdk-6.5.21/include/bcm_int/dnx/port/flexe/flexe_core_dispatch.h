
/*
 *         
 * 
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 *         
 *     
 * DO NOT EDIT THIS FILE!
 */

#ifndef BCM_DNX_SUPPORT
#error "This file is for use by DNX family only!"
#endif /* BCM_DNX_SUPPORT */

#ifndef _FLEXE_CORE_DISPATCH_H__H_
#define _FLEXE_CORE_DISPATCH_H__H_

#include <soc/portmod/portmod.h>
#include <shared/shrextend/shrextend_debug.h>
#include <bcm_int/dnx/port/flexe/flexe_core.h>

typedef shr_error_e(
    *__dispatch__flexe_core_init_f) (
    int unit);
typedef shr_error_e(
    *__dispatch__flexe_core_deinit_f) (
    int unit);
typedef shr_error_e(
    *__dispatch__flexe_core_group_phy_add_f) (
    int unit,
    uint32 flags,
    int group_index,
    soc_pbmp_t flexe_core_port_bmp,
    const int *logical_phy_id,
    const flexe_core_port_info_t * port_info);
typedef shr_error_e(
    *__dispatch__flexe_core_group_phy_remove_f) (
    int unit,
    uint32 flags,
    int group_index,
    soc_pbmp_t flexe_core_port_bmp);
typedef shr_error_e(
    *__dispatch__flexe_core_client_add_f) (
    int unit,
    int client_channel,
    uint32 flags,
    int cal_id,
    const int *flexe_core_port_array,
    bcm_port_flexe_time_slot_t ts_mask,
    int nof_flexe_core_ports);
typedef shr_error_e(
    *__dispatch__flexe_core_client_delete_f) (
    int unit,
    int client_channel,
    uint32 flags,
    int cal_id,
    const int *flexe_core_port_array,
    bcm_port_flexe_time_slot_t ts_mask,
    int nof_flexe_core_ports);
typedef shr_error_e(
    *__dispatch__flexe_core_mac_client_add_f) (
    int unit,
    int client_channel,
    int nof_slots);
typedef shr_error_e(
    *__dispatch__flexe_core_mac_client_delete_f) (
    int unit,
    int client_channel,
    int nof_slots);
typedef shr_error_e(
    *__dispatch__flexe_core_sar_client_add_f) (
    int unit,
    int client_channel,
    uint32 flags,
    int ts_num);
typedef shr_error_e(
    *__dispatch__flexe_core_sar_client_delete_f) (
    int unit,
    int client_channel,
    uint32 flags,
    int ts_num);
typedef shr_error_e(
    *__dispatch__flexe_core_rateadpt_slots_add_f) (
    int unit,
    int client_channel,
    int ts_num);
typedef shr_error_e(
    *__dispatch__flexe_core_rateadpt_slots_delete_f) (
    int unit,
    int client_channel);
typedef shr_error_e(
    *__dispatch__flexe_core_sar_channel_map_set_f) (
    int unit,
    uint32 flags,
    int sar_channel,
    int ilkn_channel,
    int enable);
typedef shr_error_e(
    *__dispatch__flexe_core_66b_switch_set_f) (
    int unit,
    int src_channel,
    int dest_channel,
    int index,
    int enable);
typedef shr_error_e(
    *__dispatch__flexe_core_oh_logical_phy_id_set_f) (
    int unit,
    int flexe_core_port,
    int logical_phy_id);
typedef shr_error_e(
    *__dispatch__flexe_core_oh_logical_phy_id_get_f) (
    int unit,
    int flexe_core_port,
    uint32 flags,
    int *logical_phy_id);
typedef shr_error_e(
    *__dispatch__flexe_core_oh_group_id_set_f) (
    int unit,
    int flexe_core_port,
    int group_id);
typedef shr_error_e(
    *__dispatch__flexe_core_oh_group_id_get_f) (
    int unit,
    int flexe_core_port,
    uint32 flags,
    int *group_id);
typedef shr_error_e(
    *__dispatch__flexe_core_oh_client_id_set_f) (
    int unit,
    int cal_id,
    int nof_ports,
    const int *flexe_core_port_array,
    int nof_slots,
    const int *calendar_slots);
typedef shr_error_e(
    *__dispatch__flexe_core_oh_client_id_get_f) (
    int unit,
    int cal_id,
    uint32 flags,
    int nof_ports,
    const int *flexe_core_port_array,
    int nof_slots,
    int *calendar_slots);
typedef shr_error_e(
    *__dispatch__flexe_core_oh_phymap_set_f) (
    int unit,
    int flexe_core_port,
    int logical_phy_id,
    int enable);
typedef shr_error_e(
    *__dispatch__flexe_core_oh_cr_bit_set_f) (
    int unit,
    int flexe_core_port,
    int cal_id);
typedef shr_error_e(
    *__dispatch__flexe_core_oh_cr_bit_get_f) (
    int unit,
    int flexe_core_port,
    uint32 flags,
    int *cal_id);
typedef shr_error_e(
    *__dispatch__flexe_core_oh_ca_bit_set_f) (
    int unit,
    int flexe_core_port,
    int cal_id);
typedef shr_error_e(
    *__dispatch__flexe_core_oh_ca_bit_get_f) (
    int unit,
    int flexe_core_port,
    uint32 flags,
    int *cal_id);
typedef shr_error_e(
    *__dispatch__flexe_core_oh_c_bit_set_f) (
    int unit,
    int flexe_core_port,
    int cal_id);
typedef shr_error_e(
    *__dispatch__flexe_core_oh_c_bit_get_f) (
    int unit,
    int flexe_core_port,
    uint32 flags,
    int *cal_id);
typedef shr_error_e(
    *__dispatch__flexe_core_oh_sc_bit_set_f) (
    int unit,
    int flexe_core_port,
    int sync_config);
typedef shr_error_e(
    *__dispatch__flexe_core_oh_sc_bit_get_f) (
    int unit,
    int flexe_core_port,
    uint32 flags,
    int *sync_config);
typedef shr_error_e(
    *__dispatch__flexe_core_active_calendar_set_f) (
    int unit,
    int flexe_core_port,
    int cal_id);
typedef shr_error_e(
    *__dispatch__flexe_core_active_calendar_get_f) (
    int unit,
    int flexe_core_port,
    uint32 flags,
    int *cal_id);
typedef shr_error_e(
    *__dispatch__flexe_core_oh_alarm_status_get_f) (
    int unit,
    int flexe_core_port,
    uint16 *alarm_status);
typedef shr_error_e(
    *__dispatch__flexe_core_oh_cal_mismatch_ts_get_f) (
    int unit,
    int flexe_core_port,
    bcm_port_flexe_time_slot_t * time_slots);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_alarm_status_get_f) (
    int unit,
    int flexe_core_port,
    uint16 *alarms_status);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_alarm_enable_set_f) (
    int unit,
    int client_channel,
    int alarm_type,
    int enable);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_base_period_set_f) (
    int unit,
    int client_channel,
    uint32 flags,
    uint32 base_period);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_base_period_get_f) (
    int unit,
    int client_channel,
    uint32 flags,
    uint32 *base_period);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_base_insert_enable_set_f) (
    int unit,
    int client_channel,
    uint32 enable);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_base_insert_enable_get_f) (
    int unit,
    int client_channel,
    uint32 *enable);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_bypass_enable_set_f) (
    int unit,
    int client_channel,
    uint32 flags,
    uint32 enable);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_bypass_enable_get_f) (
    int unit,
    int client_channel,
    uint32 flags,
    uint32 *enable);
typedef shr_error_e(
    *__dispatch__flexe_core_sar_oam_bypass_enable_set_f) (
    int unit,
    int client_channel,
    uint32 flags,
    uint32 enable);
typedef shr_error_e(
    *__dispatch__flexe_core_sar_oam_bypass_enable_get_f) (
    int unit,
    int client_channel,
    uint32 flags,
    uint32 *enable);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_local_fault_insert_set_f) (
    int unit,
    int client_channel,
    uint32 enable);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_local_fault_insert_get_f) (
    int unit,
    int client_channel,
    uint32 *enable);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_remote_fault_insert_set_f) (
    int unit,
    int client_channel,
    uint32 enable);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_remote_fault_insert_get_f) (
    int unit,
    int client_channel,
    uint32 *enable);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_sd_alm_block_num_set_f) (
    int unit,
    int client_channel,
    uint32 block_num);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_sd_alm_block_num_get_f) (
    int unit,
    int client_channel,
    uint32 *block_num);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_sd_alm_trigger_thr_set_f) (
    int unit,
    int client_channel,
    uint32 threshold);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_sd_alm_trigger_thr_get_f) (
    int unit,
    int client_channel,
    uint32 *threshold);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_sd_alm_clear_thr_set_f) (
    int unit,
    int client_channel,
    uint32 threshold);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_sd_alm_clear_thr_get_f) (
    int unit,
    int client_channel,
    uint32 *threshold);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_sf_bip8_alm_block_num_set_f) (
    int unit,
    int client_channel,
    uint32 block_num);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_sf_bip8_alm_block_num_get_f) (
    int unit,
    int client_channel,
    uint32 *block_num);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_sf_bip8_alm_trigger_thr_set_f) (
    int unit,
    int client_channel,
    uint32 threshold);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_sf_bip8_alm_trigger_thr_get_f) (
    int unit,
    int client_channel,
    uint32 *threshold);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_sf_bip8_alm_clear_thr_set_f) (
    int unit,
    int client_channel,
    uint32 threshold);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_sf_bip8_alm_clear_thr_get_f) (
    int unit,
    int client_channel,
    uint32 *threshold);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_sd_bei_alm_block_num_set_f) (
    int unit,
    int client_channel,
    uint32 block_num);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_sd_bei_alm_block_num_get_f) (
    int unit,
    int client_channel,
    uint32 *block_num);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_sd_bei_alm_trigger_thr_set_f) (
    int unit,
    int client_channel,
    uint32 threshold);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_sd_bei_alm_trigger_thr_get_f) (
    int unit,
    int client_channel,
    uint32 *threshold);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_sd_bei_alm_clear_thr_set_f) (
    int unit,
    int client_channel,
    uint32 threshold);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_sd_bei_alm_clear_thr_get_f) (
    int unit,
    int client_channel,
    uint32 *threshold);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_sf_bei_alm_block_num_set_f) (
    int unit,
    int client_channel,
    uint32 block_num);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_sf_bei_alm_block_num_get_f) (
    int unit,
    int client_channel,
    uint32 *block_num);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_sf_bei_alm_trigger_thr_set_f) (
    int unit,
    int client_channel,
    uint32 threshold);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_sf_bei_alm_trigger_thr_get_f) (
    int unit,
    int client_channel,
    uint32 *threshold);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_sf_bei_alm_clear_thr_set_f) (
    int unit,
    int client_channel,
    uint32 threshold);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_sf_bei_alm_clear_thr_get_f) (
    int unit,
    int client_channel,
    uint32 *threshold);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_bip8_counter_get_f) (
    int unit,
    int client_channel,
    uint64 *val);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_bei_counter_get_f) (
    int unit,
    int client_channel,
    uint64 *val);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_pkt_count_get_f) (
    int unit,
    int client_channel,
    uint64 *val);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_base_pkt_count_get_f) (
    int unit,
    int client_channel,
    uint64 *val);
typedef shr_error_e(
    *__dispatch__flexe_core_phy_default_config_set_f) (
    int unit,
    int flexe_core_port,
    int speed);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_alarm_collection_timer_step_set_f) (
    int unit,
    int step);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_alarm_collection_timer_step_get_f) (
    int unit,
    int *step);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_alarm_collection_step_count_set_f) (
    int unit,
    int step_count);
typedef shr_error_e(
    *__dispatch__flexe_core_oam_alarm_collection_step_count_get_f) (
    int unit,
    int *step_count);
typedef shr_error_e(
    *__dispatch__flexe_core_sar_cell_mode_set_f) (
    int unit,
    int cell_mode);
typedef shr_error_e(
    *__dispatch__flexe_core_sar_cell_mode_get_f) (
    int unit,
    int *cell_mode);
typedef shr_error_e(
    *__dispatch__flexe_core_channel_map_set_f) (
    int unit,
    uint32 flags,
    int flexe_core_port,
    uint32 local_port);
typedef shr_error_e(
    *__dispatch__flexe_core_client_local_fault_get_f) (
    int unit,
    int client_channel,
    int *local_fault_status);
typedef shr_error_e(
    *__dispatch__flexe_core_client_remote_fault_get_f) (
    int unit,
    int client_channel,
    int *remote_fault_status);
typedef shr_error_e(
    *__dispatch__flexe_core_sar_client_local_fault_get_f) (
    int unit,
    int client_channel,
    int *local_fault_status);
typedef shr_error_e(
    *__dispatch__flexe_core_sar_client_remote_fault_get_f) (
    int unit,
    int client_channel,
    int *remote_fault_status);
typedef shr_error_e(
    *__dispatch__flexe_core_1588_pkt_header_set_f) (
    int unit,
    uint32 flags,
    uint32 val);
typedef shr_error_e(
    *__dispatch__flexe_core_1588_pkt_header_get_f) (
    int unit,
    uint32 flags,
    uint32 *val);

typedef struct __flexe_core__dispatch__s__
{
    __dispatch__flexe_core_init_f f_flexe_core_init;
    __dispatch__flexe_core_deinit_f f_flexe_core_deinit;
    __dispatch__flexe_core_group_phy_add_f f_flexe_core_group_phy_add;
    __dispatch__flexe_core_group_phy_remove_f f_flexe_core_group_phy_remove;
    __dispatch__flexe_core_client_add_f f_flexe_core_client_add;
    __dispatch__flexe_core_client_delete_f f_flexe_core_client_delete;
    __dispatch__flexe_core_mac_client_add_f f_flexe_core_mac_client_add;
    __dispatch__flexe_core_mac_client_delete_f f_flexe_core_mac_client_delete;
    __dispatch__flexe_core_sar_client_add_f f_flexe_core_sar_client_add;
    __dispatch__flexe_core_sar_client_delete_f f_flexe_core_sar_client_delete;
    __dispatch__flexe_core_rateadpt_slots_add_f f_flexe_core_rateadpt_slots_add;
    __dispatch__flexe_core_rateadpt_slots_delete_f f_flexe_core_rateadpt_slots_delete;
    __dispatch__flexe_core_sar_channel_map_set_f f_flexe_core_sar_channel_map_set;
    __dispatch__flexe_core_66b_switch_set_f f_flexe_core_66b_switch_set;
    __dispatch__flexe_core_oh_logical_phy_id_set_f f_flexe_core_oh_logical_phy_id_set;
    __dispatch__flexe_core_oh_logical_phy_id_get_f f_flexe_core_oh_logical_phy_id_get;
    __dispatch__flexe_core_oh_group_id_set_f f_flexe_core_oh_group_id_set;
    __dispatch__flexe_core_oh_group_id_get_f f_flexe_core_oh_group_id_get;
    __dispatch__flexe_core_oh_client_id_set_f f_flexe_core_oh_client_id_set;
    __dispatch__flexe_core_oh_client_id_get_f f_flexe_core_oh_client_id_get;
    __dispatch__flexe_core_oh_phymap_set_f f_flexe_core_oh_phymap_set;
    __dispatch__flexe_core_oh_cr_bit_set_f f_flexe_core_oh_cr_bit_set;
    __dispatch__flexe_core_oh_cr_bit_get_f f_flexe_core_oh_cr_bit_get;
    __dispatch__flexe_core_oh_ca_bit_set_f f_flexe_core_oh_ca_bit_set;
    __dispatch__flexe_core_oh_ca_bit_get_f f_flexe_core_oh_ca_bit_get;
    __dispatch__flexe_core_oh_c_bit_set_f f_flexe_core_oh_c_bit_set;
    __dispatch__flexe_core_oh_c_bit_get_f f_flexe_core_oh_c_bit_get;
    __dispatch__flexe_core_oh_sc_bit_set_f f_flexe_core_oh_sc_bit_set;
    __dispatch__flexe_core_oh_sc_bit_get_f f_flexe_core_oh_sc_bit_get;
    __dispatch__flexe_core_active_calendar_set_f f_flexe_core_active_calendar_set;
    __dispatch__flexe_core_active_calendar_get_f f_flexe_core_active_calendar_get;
    __dispatch__flexe_core_oh_alarm_status_get_f f_flexe_core_oh_alarm_status_get;
    __dispatch__flexe_core_oh_cal_mismatch_ts_get_f f_flexe_core_oh_cal_mismatch_ts_get;
    __dispatch__flexe_core_oam_alarm_status_get_f f_flexe_core_oam_alarm_status_get;
    __dispatch__flexe_core_oam_alarm_enable_set_f f_flexe_core_oam_alarm_enable_set;
    __dispatch__flexe_core_oam_base_period_set_f f_flexe_core_oam_base_period_set;
    __dispatch__flexe_core_oam_base_period_get_f f_flexe_core_oam_base_period_get;
    __dispatch__flexe_core_oam_base_insert_enable_set_f f_flexe_core_oam_base_insert_enable_set;
    __dispatch__flexe_core_oam_base_insert_enable_get_f f_flexe_core_oam_base_insert_enable_get;
    __dispatch__flexe_core_oam_bypass_enable_set_f f_flexe_core_oam_bypass_enable_set;
    __dispatch__flexe_core_oam_bypass_enable_get_f f_flexe_core_oam_bypass_enable_get;
    __dispatch__flexe_core_sar_oam_bypass_enable_set_f f_flexe_core_sar_oam_bypass_enable_set;
    __dispatch__flexe_core_sar_oam_bypass_enable_get_f f_flexe_core_sar_oam_bypass_enable_get;
    __dispatch__flexe_core_oam_local_fault_insert_set_f f_flexe_core_oam_local_fault_insert_set;
    __dispatch__flexe_core_oam_local_fault_insert_get_f f_flexe_core_oam_local_fault_insert_get;
    __dispatch__flexe_core_oam_remote_fault_insert_set_f f_flexe_core_oam_remote_fault_insert_set;
    __dispatch__flexe_core_oam_remote_fault_insert_get_f f_flexe_core_oam_remote_fault_insert_get;
    __dispatch__flexe_core_oam_sd_alm_block_num_set_f f_flexe_core_oam_sd_alm_block_num_set;
    __dispatch__flexe_core_oam_sd_alm_block_num_get_f f_flexe_core_oam_sd_alm_block_num_get;
    __dispatch__flexe_core_oam_sd_alm_trigger_thr_set_f f_flexe_core_oam_sd_alm_trigger_thr_set;
    __dispatch__flexe_core_oam_sd_alm_trigger_thr_get_f f_flexe_core_oam_sd_alm_trigger_thr_get;
    __dispatch__flexe_core_oam_sd_alm_clear_thr_set_f f_flexe_core_oam_sd_alm_clear_thr_set;
    __dispatch__flexe_core_oam_sd_alm_clear_thr_get_f f_flexe_core_oam_sd_alm_clear_thr_get;
    __dispatch__flexe_core_oam_sf_bip8_alm_block_num_set_f f_flexe_core_oam_sf_bip8_alm_block_num_set;
    __dispatch__flexe_core_oam_sf_bip8_alm_block_num_get_f f_flexe_core_oam_sf_bip8_alm_block_num_get;
    __dispatch__flexe_core_oam_sf_bip8_alm_trigger_thr_set_f f_flexe_core_oam_sf_bip8_alm_trigger_thr_set;
    __dispatch__flexe_core_oam_sf_bip8_alm_trigger_thr_get_f f_flexe_core_oam_sf_bip8_alm_trigger_thr_get;
    __dispatch__flexe_core_oam_sf_bip8_alm_clear_thr_set_f f_flexe_core_oam_sf_bip8_alm_clear_thr_set;
    __dispatch__flexe_core_oam_sf_bip8_alm_clear_thr_get_f f_flexe_core_oam_sf_bip8_alm_clear_thr_get;
    __dispatch__flexe_core_oam_sd_bei_alm_block_num_set_f f_flexe_core_oam_sd_bei_alm_block_num_set;
    __dispatch__flexe_core_oam_sd_bei_alm_block_num_get_f f_flexe_core_oam_sd_bei_alm_block_num_get;
    __dispatch__flexe_core_oam_sd_bei_alm_trigger_thr_set_f f_flexe_core_oam_sd_bei_alm_trigger_thr_set;
    __dispatch__flexe_core_oam_sd_bei_alm_trigger_thr_get_f f_flexe_core_oam_sd_bei_alm_trigger_thr_get;
    __dispatch__flexe_core_oam_sd_bei_alm_clear_thr_set_f f_flexe_core_oam_sd_bei_alm_clear_thr_set;
    __dispatch__flexe_core_oam_sd_bei_alm_clear_thr_get_f f_flexe_core_oam_sd_bei_alm_clear_thr_get;
    __dispatch__flexe_core_oam_sf_bei_alm_block_num_set_f f_flexe_core_oam_sf_bei_alm_block_num_set;
    __dispatch__flexe_core_oam_sf_bei_alm_block_num_get_f f_flexe_core_oam_sf_bei_alm_block_num_get;
    __dispatch__flexe_core_oam_sf_bei_alm_trigger_thr_set_f f_flexe_core_oam_sf_bei_alm_trigger_thr_set;
    __dispatch__flexe_core_oam_sf_bei_alm_trigger_thr_get_f f_flexe_core_oam_sf_bei_alm_trigger_thr_get;
    __dispatch__flexe_core_oam_sf_bei_alm_clear_thr_set_f f_flexe_core_oam_sf_bei_alm_clear_thr_set;
    __dispatch__flexe_core_oam_sf_bei_alm_clear_thr_get_f f_flexe_core_oam_sf_bei_alm_clear_thr_get;
    __dispatch__flexe_core_oam_bip8_counter_get_f f_flexe_core_oam_bip8_counter_get;
    __dispatch__flexe_core_oam_bei_counter_get_f f_flexe_core_oam_bei_counter_get;
    __dispatch__flexe_core_oam_pkt_count_get_f f_flexe_core_oam_pkt_count_get;
    __dispatch__flexe_core_oam_base_pkt_count_get_f f_flexe_core_oam_base_pkt_count_get;
    __dispatch__flexe_core_phy_default_config_set_f f_flexe_core_phy_default_config_set;
    __dispatch__flexe_core_oam_alarm_collection_timer_step_set_f f_flexe_core_oam_alarm_collection_timer_step_set;
    __dispatch__flexe_core_oam_alarm_collection_timer_step_get_f f_flexe_core_oam_alarm_collection_timer_step_get;
    __dispatch__flexe_core_oam_alarm_collection_step_count_set_f f_flexe_core_oam_alarm_collection_step_count_set;
    __dispatch__flexe_core_oam_alarm_collection_step_count_get_f f_flexe_core_oam_alarm_collection_step_count_get;
    __dispatch__flexe_core_sar_cell_mode_set_f f_flexe_core_sar_cell_mode_set;
    __dispatch__flexe_core_sar_cell_mode_get_f f_flexe_core_sar_cell_mode_get;
    __dispatch__flexe_core_channel_map_set_f f_flexe_core_channel_map_set;
    __dispatch__flexe_core_client_local_fault_get_f f_flexe_core_client_local_fault_get;
    __dispatch__flexe_core_client_remote_fault_get_f f_flexe_core_client_remote_fault_get;
    __dispatch__flexe_core_sar_client_local_fault_get_f f_flexe_core_sar_client_local_fault_get;
    __dispatch__flexe_core_sar_client_remote_fault_get_f f_flexe_core_sar_client_remote_fault_get;
    __dispatch__flexe_core_1588_pkt_header_set_f f_flexe_core_1588_pkt_header_set;
    __dispatch__flexe_core_1588_pkt_header_get_f f_flexe_core_1588_pkt_header_get;
} __flexe_core__dispatch__t__;

extern const __flexe_core__dispatch__t__ *__flexe_core__dispatch__[flexe_coreDispatchTypeCount];

#endif /*_FLEXE_CORE_DISPATCH_H_*/
