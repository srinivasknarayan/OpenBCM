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

#include <soc/types.h>
#include <soc/error.h>
#include <soc/portmod/portmod_internal.h>
#include <soc/portmod/portmod.h>
#include <soc/portmod/portmod_dispatch.h>

#ifdef PORTMOD_PM_OS_ILKN_SUPPORT

#include <soc/portmod/pmOsILKN.h>


__portmod__dispatch__t__ portmod_pmOsILKN_driver = {

    NULL, /* portmod_port_speed_ability_local_get */
    pmOsILKN_pm_interface_type_is_supported,
    pmOsILKN_pm_init,
    pmOsILKN_pm_destroy,
    pmOsILKN_port_attach,
    NULL, /* portmod_default_bus_update */
    NULL, /* portmod_pm_bypass_set */
    pmOsILKN_pm_core_info_get,
    pmOsILKN_pm_aggregated_update,
    NULL, /* portmod_pm_phys_get */
    pmOsILKN_port_detach,
    NULL, /* portmod_port_callback_unregister */
    pmOsILKN_port_replace,
    pmOsILKN_port_enable_set,
    pmOsILKN_port_enable_get,
    NULL, /* portmod_port_cdr_lock_get */
    NULL, /* portmod_port_electrical_idle_enable_set */
    pmOsILKN_port_interface_config_set,
    pmOsILKN_port_interface_config_get,
    pmOsILKN_port_default_interface_get,
    NULL, /* portmod_port_interface_check */
    NULL, /* portmod_port_encoding_set */
    NULL, /* portmod_port_encoding_get */
    NULL, /* portmod_port_cl72_set */
    NULL, /* portmod_port_cl72_get */
    NULL, /* portmod_port_cl72_status_get */
    pmOsILKN_port_loopback_set,
    pmOsILKN_port_loopback_get,
    NULL, /* portmod_port_pass_through_set */
    NULL, /* portmod_port_pass_through_get */
    NULL, /* portmod_port_phase_interpolator_rx_set */
    NULL, /* portmod_port_phase_interpolator_tx_set */
    NULL, /* portmod_port_pass_through_calibrate */
    NULL, /* portmod_port_pass_through_fec_enable_set */
    NULL, /* portmod_port_pass_through_fec_enable_get */
    NULL, /* portmod_port_rx_mac_enable_set */
    NULL, /* portmod_port_rx_mac_enable_get */
    NULL, /* portmod_port_tx_mac_enable_set */
    NULL, /* portmod_port_tx_mac_enable_get */
    NULL, /* portmod_port_ability_local_get */
    pmOsILKN_port_autoneg_set,
    pmOsILKN_port_autoneg_get,
    NULL, /* portmod_port_autoneg_status_get */
    pmOsILKN_port_link_get,
    NULL, /* portmod_port_link_latch_down_get */
    NULL, /* portmod_port_phy_link_up_event */
    NULL, /* portmod_port_phy_link_down_event */
    pmOsILKN_port_prbs_config_set,
    pmOsILKN_port_prbs_config_get,
    pmOsILKN_port_prbs_enable_set,
    pmOsILKN_port_prbs_enable_get,
    pmOsILKN_port_prbs_status_get,
    pmOsILKN_port_nof_lanes_get,
    pmOsILKN_port_ilkn_nof_segments_set,
    pmOsILKN_port_ilkn_nof_segments_get,
    NULL, /* portmod_ilkn_retranstmit_config_set */
    NULL, /* portmod_ilkn_retranstmit_config_get */
    NULL, /* portmod_port_lanes_assign */
    NULL, /* portmod_port_lanes_retrieve */
    pmOsILKN_port_firmware_mode_set,
    pmOsILKN_port_firmware_mode_get,
    NULL, /* portmod_port_runt_threshold_set */
    NULL, /* portmod_port_runt_threshold_get */
    NULL, /* portmod_port_tx_threshold_set */
    NULL, /* portmod_port_tx_threshold_get */
    NULL, /* portmod_port_max_packet_size_set */
    NULL, /* portmod_port_max_packet_size_get */
    NULL, /* portmod_port_pad_size_set */
    NULL, /* portmod_port_pad_size_get */
    NULL, /* portmod_port_tx_mac_sa_set */
    NULL, /* portmod_port_tx_mac_sa_get */
    NULL, /* portmod_port_rx_mac_sa_set */
    NULL, /* portmod_port_rx_mac_sa_get */
    NULL, /* portmod_port_tx_average_ipg_set */
    NULL, /* portmod_port_tx_average_ipg_get */
    NULL, /* portmod_port_tx_preamble_length_set */
    NULL, /* portmod_port_tx_preamble_length_get */
    NULL, /* portmod_port_local_fault_control_set */
    NULL, /* portmod_port_local_fault_control_get */
    NULL, /* portmod_port_remote_fault_control_set */
    NULL, /* portmod_port_remote_fault_control_get */
    NULL, /* portmod_port_local_fault_status_get */
    NULL, /* portmod_port_remote_fault_status_get */
    pmOsILKN_port_local_fault_status_clear,
    pmOsILKN_port_remote_fault_status_clear,
    NULL, /* portmod_port_local_fault_reasons_get */
    NULL, /* portmod_port_pause_control_set */
    NULL, /* portmod_port_pause_control_get */
    NULL, /* portmod_port_pfc_control_set */
    NULL, /* portmod_port_pfc_control_get */
    NULL, /* portmod_port_llfc_control_set */
    NULL, /* portmod_port_llfc_control_get */
    pmOsILKN_port_update,
    pmOsILKN_port_core_access_get,
    pmOsILKN_port_phy_lane_access_get,
    NULL, /* portmod_pm_phy_lane_access_get */
    pmOsILKN_port_duplex_set,
    pmOsILKN_port_duplex_get,
    pmOsILKN_port_phy_reg_read,
    pmOsILKN_port_phy_reg_write,
    pmOsILKN_port_reset_set,
    pmOsILKN_port_reset_get,
    NULL, /* portmod_port_adv_remote_get */
    NULL, /* portmod_port_drv_name */
    NULL, /* portmod_port_drv_name_get */
    NULL, /* portmod_port_fec_enable_set */
    NULL, /* portmod_port_fec_enable_get */
    NULL, /* portmod_port_ability_advert_set */
    NULL, /* portmod_port_ability_advert_get */
    NULL, /* portmod_port_ability_remote_get */
    NULL, /* portmod_port_frame_spacing_stretch_set */
    NULL, /* portmod_port_frame_spacing_stretch_get */
    NULL, /* portmod_port_diag_fifo_status_get */
    NULL, /* portmod_port_rx_control_set */
    NULL, /* portmod_port_rx_control_get */
    NULL, /* portmod_port_pfc_config_set */
    NULL, /* portmod_port_pfc_config_get */
    NULL, /* portmod_port_eee_set */
    NULL, /* portmod_port_eee_get */
    NULL, /* portmod_port_eee_clock_set */
    NULL, /* portmod_port_eee_clock_get */
    NULL, /* portmod_port_vlan_tag_set */
    NULL, /* portmod_port_vlan_tag_get */
    NULL, /* portmod_port_modid_set */
    NULL, /* portmod_port_led_chain_config */
    NULL, /* portmod_port_clear_rx_lss_status_set */
    NULL, /* portmod_port_clear_rx_lss_status_get */
    pmOsILKN_xphy_lane_attach_to_pm,
    pmOsILKN_xphy_lane_detach_from_pm,
    NULL, /* portmod_ext_phy_lane_attach_to_pm */
    NULL, /* portmod_ext_phy_lane_detach_from_pm */
    pmOsILKN_port_lag_failover_status_toggle,
    NULL, /* portmod_port_lag_failover_loopback_set */
    NULL, /* portmod_port_lag_failover_loopback_get */
    pmOsILKN_port_mode_set,
    pmOsILKN_port_mode_get,
    NULL, /* portmod_port_encap_set */
    NULL, /* portmod_port_encap_get */
    NULL, /* portmod_port_higig_mode_set */
    NULL, /* portmod_port_higig_mode_get */
    NULL, /* portmod_port_higig2_mode_set */
    NULL, /* portmod_port_higig2_mode_get */
    NULL, /* portmod_port_config_port_type_set */
    NULL, /* portmod_port_config_port_type_get */
    NULL, /* portmod_port_trunk_hwfailover_config_set */
    NULL, /* portmod_port_trunk_hwfailover_config_get */
    NULL, /* portmod_port_trunk_hwfailover_status_get */
    pmOsILKN_port_diag_ctrl,
    pmOsILKN_port_ref_clk_get,
    NULL, /* portmod_port_lag_failover_disable */
    NULL, /* portmod_port_lag_remove_failover_lpbk_set */
    NULL, /* portmod_port_lag_remove_failover_lpbk_get */
    NULL, /* portmod_port_cntmaxsize_set */
    NULL, /* portmod_port_cntmaxsize_get */
    NULL, /* portmod_port_multi_get */
    NULL, /* portmod_port_drain_cell_get */
    NULL, /* portmod_port_drain_cell_stop */
    NULL, /* portmod_port_drain_cell_start */
    NULL, /* portmod_port_drain_cells_rx_enable */
    NULL, /* portmod_port_egress_queue_drain_rx_en */
    NULL, /* portmod_port_mac_ctrl_set */
    NULL, /* portmod_port_txfifo_cell_cnt_get */
    NULL, /* portmod_port_egress_queue_drain_get */
    NULL, /* portmod_port_mac_reset_set */
    NULL, /* portmod_port_mac_reset_get */
    pmOsILKN_port_soft_reset_toggle,
    NULL, /* portmod_port_soft_reset */
    NULL, /* portmod_port_mac_reset_check */
    NULL, /* portmod_port_core_num_get */
    NULL, /* portmod_port_e2ecc_hdr_set */
    NULL, /* portmod_port_e2ecc_hdr_get */
    NULL, /* portmod_port_e2e_enable_set */
    NULL, /* portmod_port_e2e_enable_get */
    NULL, /* portmod_port_fallback_lane_get */
    NULL, /* portmod_port_speed_get */
    NULL, /* portmod_pm_tsc_refclock_set */
    NULL, /* portmod_pm_tsc_refclock_get */
    NULL, /* portmod_port_discard_set */
    NULL, /* portmod_port_soft_reset_set */
    NULL, /* portmod_port_tx_down */
    pmOsILKN_port_logical_lane_order_set,
    pmOsILKN_port_logical_lane_order_get,
    NULL, /* portmod_port_pgw_reconfig */
    NULL, /* portmod_port_notify */
    NULL, /* portmod_port_control_phy_timesync_set */
    NULL, /* portmod_port_control_phy_timesync_get */
    NULL, /* portmod_port_timesync_config_set */
    NULL, /* portmod_port_timesync_config_get */
    NULL, /* portmod_port_timesync_enable_set */
    NULL, /* portmod_port_timesync_enable_get */
    NULL, /* portmod_port_timesync_nco_addend_set */
    NULL, /* portmod_port_timesync_nco_addend_get */
    NULL, /* portmod_port_timesync_framesync_mode_set */
    NULL, /* portmod_port_timesync_framesync_mode_get */
    NULL, /* portmod_port_timesync_local_time_set */
    NULL, /* portmod_port_timesync_local_time_get */
    NULL, /* portmod_port_timesync_load_ctrl_set */
    NULL, /* portmod_port_timesync_load_ctrl_get */
    NULL, /* portmod_port_timesync_tx_timestamp_offset_set */
    NULL, /* portmod_port_timesync_tx_timestamp_offset_get */
    NULL, /* portmod_port_timesync_rx_timestamp_offset_set */
    NULL, /* portmod_port_timesync_rx_timestamp_offset_get */
    NULL, /* portmod_port_timestamp_adjust_set */
    NULL, /* portmod_port_timestamp_adjust_get */
    NULL, /* portmod_port_phy_intr_enable_set */
    NULL, /* portmod_port_phy_intr_enable_get */
    NULL, /* portmod_port_phy_intr_status_get */
    NULL, /* portmod_port_phy_intr_status_clear */
    NULL, /* portmod_port_phy_timesync_do_sync */
    NULL, /* portmod_port_timesync_capture_timestamp_get */
    NULL, /* portmod_port_timesync_heartbeat_timestamp_get */
    NULL, /* portmod_port_edc_config_set */
    NULL, /* portmod_port_edc_config_get */
    NULL, /* portmod_port_interrupt_enable_set */
    NULL, /* portmod_port_interrupt_enable_get */
    NULL, /* portmod_port_interrupt_get */
    NULL, /* portmod_port_interrupts_get */
    NULL, /* portmod_port_check_legacy_phy */
    NULL, /* portmod_port_failover_mode_set */
    NULL, /* portmod_port_failover_mode_get */
    NULL, /* portmod_port_mac_rsv_mask_set */
    NULL, /* portmod_port_mib_reset_toggle */
    NULL, /* portmod_port_warmboot_db_restore */
    NULL, /* portmod_port_flow_control_set */
    NULL, /* portmod_port_update_dynamic_state */
    NULL, /* portmod_port_phy_op_mode_get */
    NULL, /* portmod_port_lane_map_set */
    NULL, /* portmod_port_lane_map_get */
    NULL, /* portmod_port_polarity_set */
    NULL, /* portmod_port_polarity_get */
    NULL, /* portmod_port_medium_config_set */
    NULL, /* portmod_port_medium_config_get */
    NULL, /* portmod_port_medium_get */
    NULL, /* portmod_pm_is_in_pm12x10 */
    NULL, /* portmod_slow_read_rate_set */
    NULL, /* portmod_port_pll_div_get */
    NULL, /* portmod_port_master_set */
    NULL, /* portmod_port_master_get */
    NULL, /* portmod_preemption_control_set */
    NULL, /* portmod_preemption_control_get */
    NULL, /* portmod_preemption_tx_status_get */
    NULL, /* portmod_preemption_verify_status_get */
    NULL, /* portmod_preemption_force_rx_eop_mode_set */
    NULL, /* portmod_preemption_force_rx_eop_mode_get */
    NULL, /* portmod_preemption_rx_timeout_set */
    NULL, /* portmod_preemption_rx_timeout_get */
    NULL, /* portmod_port_lane_count_get */
    NULL, /* portmod_port_timesync_tx_info_get */
    NULL, /* portmod_port_lane_mask_get */
    NULL, /* portmod_core_add */
    NULL, /* portmod_pm_serdes_core_init */
    NULL, /* portmod_pm_is_initialized */
    NULL, /* portmod_port_speed_config_validate */
    NULL, /* portmod_pm_enable */
    NULL, /* portmod_pm_logical_pbmp_get */
    NULL, /* portmod_pm_vco_reconfig */
    NULL, /* portmod_port_speed_config_set */
    NULL, /* portmod_port_speed_config_get */
    NULL, /* portmod_fw_bcast */
    NULL, /* portmod_port_credits_enable_set */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_stage_activate */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_rsvd4_tx_fsm_state_set */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_rsvd4_tx_override_set */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_rsvd4_rx_override_set */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_rx_axc_frame_add */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_rx_frame_optional_config_set */
    NULL, /* portmod_cpri_port_rx_frame_optional_config_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_tx_frame_optional_config_set */
    NULL, /* portmod_cpri_port_tx_frame_optional_config_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_port_rsvd4_rx_frame_optional_config_set */
    NULL, /* portmod_port_rsvd4_rx_frame_optional_config_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_port_rsvd4_tx_frame_optional_config_set */
    NULL, /* portmod_port_rsvd4_tx_frame_optional_config_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_port_rsvd4_rx_speed_set */
    NULL, /* portmod_port_rsvd4_rx_speed_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_port_rsvd4_tx_speed_set */
    NULL, /* portmod_port_rsvd4_tx_speed_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_rx_axc_frame_delete */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_rx_axc_frame_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_rsvd4_rx_fsm_state_set */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_tx_axc_frame_add */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_tx_axc_frame_delete */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_tx_axc_frame_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_encap_set */
    NULL, /* portmod_cpri_port_encap_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_encap_roe_ordering_info_set */
    NULL, /* portmod_cpri_port_encap_roe_ordering_info_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_encap_roe_ordering_sequence_offset_set */
    NULL, /* portmod_cpri_port_encap_roe_ordering_sequence_offset_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_roe_encap_macda_entry_set */
    NULL, /* portmod_cpri_port_roe_encap_macda_entry_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_roe_encap_macsa_entry_set */
    NULL, /* portmod_cpri_port_roe_encap_macsa_entry_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_roe_encap_vlan_entry_set */
    NULL, /* portmod_cpri_port_roe_encap_vlan_entry_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_decap_ethertype_config_set */
    NULL, /* portmod_cpri_port_decap_ethertype_config_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_encap_ethertype_config_set */
    NULL, /* portmod_cpri_port_encap_ethertype_config_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_decap_flow_config_set */
    NULL, /* portmod_cpri_port_decap_flow_config_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_decap_flow_config_clear */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_decap_queue_to_ordering_info_index_set */
    NULL, /* portmod_cpri_port_decap_queue_to_ordering_info_index_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_decap_flow_to_queue_mapping_set */
    NULL, /* portmod_cpri_port_decap_flow_to_queue_mapping_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_decap_flow_to_queue_mapping_clear */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_decap_roe_ordering_info_set */
    NULL, /* portmod_cpri_port_decap_roe_ordering_info_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_decap_roe_ordering_sequence_offset_set */
    NULL, /* portmod_cpri_port_decap_roe_ordering_sequence_offset_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_tx_frame_tgen_config_set */
    NULL, /* portmod_cpri_port_tx_frame_tgen_config_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_tx_frame_tgen_enable_set */
    NULL, /* portmod_cpri_port_tx_frame_tgen_enable_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_tx_frame_tgen_ts_offset_set */
    NULL, /* portmod_cpri_port_tx_frame_tgen_ts_offset_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_tx_frame_next_hfn_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_tx_frame_next_bfn_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_rsvd4_rx_flow_add */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_rsvd4_rx_flow_delete */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_rsvd4_tx_flow_add */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_rsvd4_tx_flow_delete */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_rsvd4_dbm_entry_set */
    NULL, /* portmod_cpri_port_rsvd4_dbm_entry_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_rsvd4_secondary_dbm_entry_set */
    NULL, /* portmod_cpri_port_rsvd4_secondary_dbm_entry_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_rsvd4_modulo_rule_entry_set */
    NULL, /* portmod_cpri_port_rsvd4_modulo_rule_entry_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_rsvd4_dbm_position_entry_set */
    NULL, /* portmod_cpri_port_rsvd4_dbm_position_entry_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_rsvd4_rx_master_frame_sync_config_set */
    NULL, /* portmod_cpri_port_rsvd4_rx_master_frame_sync_config_get */
#endif /* CPRIMOD_SUPPORT */
    NULL, /* portmod_port_vcos_get */
    NULL, /* portmod_port_mac_timestamp_enable_set */
    NULL, /* portmod_port_mac_timestamp_enable_get */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_rx_cw_sync_info_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_rx_cw_l1_inband_info_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_rx_cw_l1_signal_signal_protection_set */
    NULL, /* portmod_cpri_port_rx_cw_l1_signal_signal_protection_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_cw_slow_hdlc_config_set */
    NULL, /* portmod_cpri_port_cw_slow_hdlc_config_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_cw_fast_eth_config_set */
    NULL, /* portmod_cpri_port_cw_fast_eth_config_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_rx_vsd_config_set */
    NULL, /* portmod_cpri_port_rx_vsd_config_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_tx_vsd_config_set */
    NULL, /* portmod_cpri_port_tx_vsd_config_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_rx_vsd_flow_add */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_rx_vsd_flow_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_rx_vsd_flow_delete */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_tx_vsd_flow_add */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_tx_vsd_flow_delete */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_tx_vsd_flow_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_encap_queue_control_tag_to_flow_map_set */
    NULL, /* portmod_cpri_port_encap_queue_control_tag_to_flow_map_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_rx_vsd_raw_config_set */
    NULL, /* portmod_cpri_port_rx_vsd_raw_config_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_tx_vsd_raw_config_set */
    NULL, /* portmod_cpri_port_tx_vsd_raw_config_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_tx_vsd_raw_filter_set */
    NULL, /* portmod_cpri_port_tx_vsd_raw_filter_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_rx_brcm_rsvd5_config_set */
    NULL, /* portmod_cpri_port_rx_brcm_rsvd5_config_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_tx_brcm_rsvd5_config_set */
    NULL, /* portmod_cpri_port_tx_brcm_rsvd5_config_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_rx_gcw_config_set */
    NULL, /* portmod_cpri_port_rx_gcw_config_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_tx_gcw_config_set */
    NULL, /* portmod_cpri_port_tx_gcw_config_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_tx_gcw_filter_set */
    NULL, /* portmod_cpri_port_tx_gcw_filter_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_tx_cw_sync_info_set */
    NULL, /* portmod_cpri_port_tx_cw_sync_info_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_tx_cw_l1_inband_info_set */
    NULL, /* portmod_cpri_port_tx_cw_l1_inband_info_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_rsvd4_rx_control_flow_add */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_rsvd4_rx_control_flow_delete */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_rsvd4_rx_control_flow_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_rsvd4_fast_eth_config_set */
    NULL, /* portmod_rsvd4_fast_eth_config_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_rsvd4_rx_sync_profile_entry_set */
    NULL, /* portmod_rsvd4_rx_sync_profile_entry_get */
#endif /* CPRIMOD_SUPPORT */
    NULL, /* portmod_rx_tag_config_set */
    NULL, /* portmod_rx_tag_config_get */
    NULL, /* portmod_rx_tag_gen_entry_add */
    NULL, /* portmod_rx_tag_gen_entry_delete */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_rsvd4_tx_control_flow_group_member_add */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_rsvd4_tx_control_flow_group_member_delete */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_rsvd4_tx_control_flow_group_member_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_rsvd4_tx_control_flow_group_member_get_all */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_rsvd4_tx_eth_message_config_set */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_rsvd4_tx_single_raw_message_config_set */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_rsvd4_tx_control_flow_config_set */
    NULL, /* portmod_rsvd4_tx_control_flow_config_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_rsvd4_tx_control_flow_header_index_set */
    NULL, /* portmod_rsvd4_tx_control_flow_header_index_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_rsvd4_tx_control_header_entry_set */
    NULL, /* portmod_rsvd4_tx_control_header_entry_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_rsvd4_tx_single_tunnel_message_config_set */
    NULL, /* portmod_rsvd4_tx_single_tunnel_message_config_get */
#endif /* CPRIMOD_SUPPORT */
    NULL, /* portmod_port_txpi_override_set */
    NULL, /* portmod_port_txpi_override_get */
    NULL, /* portmod_port_txpi_sdm_data_get */
    NULL, /* portmod_pm_speed_config_validate */
    NULL, /* portmod_pm_vcos_get */
    NULL, /* portmod_pm_specific_vcos_get */
    NULL, /* portmod_port_autoneg_ability_advert_set */
    NULL, /* portmod_port_autoneg_ability_advert_get */
    NULL, /* portmod_port_autoneg_ability_remote_get */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_interrupt_link_status_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_interrupt_enable_set */
    NULL, /* portmod_cpri_port_interrupt_enable_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_pm_interrupt_process */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_fast_clk_bit_time_period_set */
    NULL, /* portmod_fast_clk_bit_time_period_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_1588_bit_time_period_set */
    NULL, /* portmod_1588_bit_time_period_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_1588_timestamp_capture_config_set */
    NULL, /* portmod_1588_timestamp_capture_config_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_1588_captured_timestamp_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_1588_timestamp_adjust_set */
    NULL, /* portmod_1588_timestamp_adjust_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_1588_timestamp_fifo_config_set */
    NULL, /* portmod_1588_timestamp_fifo_config_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_1588_timestamp_cmic_config_set */
    NULL, /* portmod_1588_timestamp_cmic_config_get */
#endif /* CPRIMOD_SUPPORT */
    NULL, /* portmod_port_tx_set */
    NULL, /* portmod_port_tx_get */
    NULL, /* portmod_port_synce_clk_ctrl_set */
    NULL, /* portmod_port_synce_clk_ctrl_get */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_rx_agnostic_config_set */
    NULL, /* portmod_cpri_port_rx_agnostic_config_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_tx_agnostic_config_set */
    NULL, /* portmod_cpri_port_tx_agnostic_config_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_encap_presentation_time_config_set */
    NULL, /* portmod_cpri_port_encap_presentation_time_config_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_decap_presentation_time_config_set */
    NULL, /* portmod_cpri_port_decap_presentation_time_config_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_compression_lookup_table_set */
    NULL, /* portmod_cpri_port_compression_lookup_table_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_decompression_lookup_table_set */
    NULL, /* portmod_cpri_port_decompression_lookup_table_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_decap_queue_flow_control_set */
    NULL, /* portmod_cpri_port_decap_queue_flow_control_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_fec_enable_set */
    NULL, /* portmod_cpri_port_fec_enable_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_fec_timestamp_config_set */
    NULL, /* portmod_cpri_port_fec_timestamp_config_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_fec_aux_config_set */
    NULL, /* portmod_cpri_port_fec_aux_config_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_fec_stat_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_ecc_interrupt_enable_set */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_pm_ecc_interrupt_status_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_init */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_rx_gcw_word_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_tx_gcw_word_set */
#endif /* CPRIMOD_SUPPORT */
    NULL, /* portmod_pm_interrupt_process */
    NULL, /* portmod_pm_core_num_get */
    NULL, /* portmod_port_rlm_config_set */
    NULL, /* portmod_port_rlm_config_get */
    NULL, /* portmod_port_rlm_status_get */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_rx_tunnel_mode_config_set */
    NULL, /* portmod_cpri_port_rx_tunnel_mode_config_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_tx_tunnel_mode_config_set */
    NULL, /* portmod_cpri_port_tx_tunnel_mode_config_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_rsvd4_port_rx_agnostic_config_set */
    NULL, /* portmod_rsvd4_port_rx_agnostic_config_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_rsvd4_port_tx_agnostic_config_set */
    NULL, /* portmod_rsvd4_port_tx_agnostic_config_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_frame_config_set */
    NULL, /* portmod_cpri_port_frame_config_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_compression_saturation_config_set */
    NULL, /* portmod_cpri_port_compression_saturation_config_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_decompression_saturation_config_set */
    NULL, /* portmod_cpri_port_decompression_saturation_config_get */
#endif /* CPRIMOD_SUPPORT */
    NULL, /* portmod_port_mac_enable_set */
    NULL, /* portmod_port_pcs_fsm_check */
    NULL, /* portmod_port_txpi_rxcdr_clk_get */
    NULL, /* portmod_egr_1588_timestamp_config_set */
    NULL, /* portmod_egr_1588_timestamp_config_get */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_rx_pipeline_clear */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_tx_pipeline_clear */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_tx_enable_set */
    NULL, /* portmod_cpri_port_tx_enable_get */
#endif /* CPRIMOD_SUPPORT */
    NULL, /* portmod_port_pcs_lane_map_reconfig */
    NULL, /* portmod_port_pmd_lock_counter_get */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_speed_set */
#endif /* CPRIMOD_SUPPORT */
    NULL, /* portmod_port_tx_stall_set */
    NULL, /* portmod_port_tx_stall_get */
    NULL, /* portmod_pm_wb_debug_log */
    NULL, /* portmod_port_fec_error_inject_set */
    NULL, /* portmod_port_fec_error_inject_get */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_debug_set */
    NULL, /* portmod_cpri_port_debug_get */
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    NULL, /* portmod_cpri_port_debug_clear */
#endif /* CPRIMOD_SUPPORT */
    NULL, /* portmod_ilkn_port_lane_enable */
};

#endif /* PORTMOD_PM_OS_ILKN_SUPPORT */
