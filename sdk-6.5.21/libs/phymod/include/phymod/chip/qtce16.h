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

#ifndef _QTCE16_H__H_
#define _QTCE16_H__H_

#include <phymod/phymod_definitions.h>
/*Initialize phymod module*/
int qtce16_core_identify(const phymod_core_access_t* core, uint32_t core_id, uint32_t* is_identified);

/*Retrive core information*/
int qtce16_core_info_get(const phymod_core_access_t* core, phymod_core_info_t* info);

/*Set\get lane mapping*/
int qtce16_core_lane_map_set(const phymod_core_access_t* core, const phymod_lane_map_t* lane_map);
int qtce16_core_lane_map_get(const phymod_core_access_t* core, phymod_lane_map_t* lane_map);

/*Retrive firmware information*/
int qtce16_core_firmware_info_get(const phymod_core_access_t* core, phymod_core_firmware_info_t* fw_info);

/*Set\get firmware operation mode*/
int qtce16_phy_firmware_core_config_set(const phymod_phy_access_t* phy, phymod_firmware_core_config_t fw_core_config);
int qtce16_phy_firmware_core_config_get(const phymod_phy_access_t* phy, phymod_firmware_core_config_t* fw_core_config);

/*Set\get firmware operation mode*/
int qtce16_phy_firmware_lane_config_set(const phymod_phy_access_t* phy, phymod_firmware_lane_config_t fw_lane_config);
int qtce16_phy_firmware_lane_config_get(const phymod_phy_access_t* phy, phymod_firmware_lane_config_t* fw_lane_config);

/*Set phy polarity*/
int qtce16_phy_polarity_set(const phymod_phy_access_t* phy, const phymod_polarity_t* polarity);
int qtce16_phy_polarity_get(const phymod_phy_access_t* phy, phymod_polarity_t* polarity);

/*Set\Get TX Parameters*/
int qtce16_phy_tx_set(const phymod_phy_access_t* phy, const phymod_tx_t* tx);
int qtce16_phy_tx_get(const phymod_phy_access_t* phy, phymod_tx_t* tx);

/*Control phy power*/
int qtce16_phy_power_set(const phymod_phy_access_t* phy, const phymod_phy_power_t* power);
int qtce16_phy_power_get(const phymod_phy_access_t* phy, phymod_phy_power_t* power);

/*TX transmission control*/
int qtce16_phy_tx_lane_control_set(const phymod_phy_access_t* phy, phymod_phy_tx_lane_control_t tx_control);
int qtce16_phy_tx_lane_control_get(const phymod_phy_access_t* phy, phymod_phy_tx_lane_control_t* tx_control);

/*Rx control*/
int qtce16_phy_rx_lane_control_set(const phymod_phy_access_t* phy, phymod_phy_rx_lane_control_t rx_control);
int qtce16_phy_rx_lane_control_get(const phymod_phy_access_t* phy, phymod_phy_rx_lane_control_t* rx_control);

/*energy efficient control*/
int qtce16_phy_eee_set(const phymod_phy_access_t* phy, uint32_t enable);
int qtce16_phy_eee_get(const phymod_phy_access_t* phy, uint32_t* enable);

/*Set the interface mode, speed and other configuration related to interface.*/
int qtce16_phy_interface_config_set(const phymod_phy_access_t* phy, uint32_t flags, const phymod_phy_inf_config_t* config);
int qtce16_phy_interface_config_get(const phymod_phy_access_t* phy, uint32_t flags, phymod_ref_clk_t ref_clock, phymod_phy_inf_config_t* config);

/*Set\Get CL72*/
int qtce16_phy_cl72_set(const phymod_phy_access_t* phy, uint32_t cl72_en);
int qtce16_phy_cl72_get(const phymod_phy_access_t* phy, uint32_t* cl72_en);

/*Get CL72 status*/
int qtce16_phy_cl72_status_get(const phymod_phy_access_t* phy, phymod_cl72_status_t* status);

/*Set\Get autoneg*/
int qtce16_phy_autoneg_ability_set(const phymod_phy_access_t* phy, const phymod_autoneg_ability_t* an_ability_set_type);
int qtce16_phy_autoneg_ability_get(const phymod_phy_access_t* phy, phymod_autoneg_ability_t* an_ability_get_type);

/*Get  remote link autoneg*/
int qtce16_phy_autoneg_remote_ability_get(const phymod_phy_access_t* phy, phymod_autoneg_ability_t* an_ability_get_type);

/*Set\Get autoneg*/
int qtce16_phy_autoneg_set(const phymod_phy_access_t* phy, const phymod_autoneg_control_t* an);
int qtce16_phy_autoneg_get(const phymod_phy_access_t* phy, phymod_autoneg_control_t* an, uint32_t* an_done);

/*Get Autoneg status*/
int qtce16_phy_autoneg_status_get(const phymod_phy_access_t* phy, phymod_autoneg_status_t* status);

/*Core Initialization*/
int qtce16_core_init(const phymod_core_access_t* core, const phymod_core_init_config_t* init_config, const phymod_core_status_t* core_status);

/*Core vco freq get function*/
int qtce16_phy_pll_multiplier_get(const phymod_phy_access_t* phy, uint32_t* core_vco_pll_multiplier);

/*Phy Initialization*/
int qtce16_phy_init(const phymod_phy_access_t* phy, const phymod_phy_init_config_t* init_config);

/*Set\get loopback mode*/
int qtce16_phy_loopback_set(const phymod_phy_access_t* phy, phymod_loopback_mode_t loopback, uint32_t enable);
int qtce16_phy_loopback_get(const phymod_phy_access_t* phy, phymod_loopback_mode_t loopback, uint32_t* enable);

/*Get rx pmd locked indication*/
int qtce16_phy_rx_pmd_locked_get(const phymod_phy_access_t* phy, uint32_t* rx_pmd_locked);

/*Get link up status indication*/
int qtce16_phy_link_status_get(const phymod_phy_access_t* phy, uint32_t* link_status);

/*Read phymod register*/
int qtce16_phy_reg_read(const phymod_phy_access_t* phy, uint32_t reg_addr, uint32_t* val);

/*Write phymod register*/
int qtce16_phy_reg_write(const phymod_phy_access_t* phy, uint32_t reg_addr, uint32_t val);

/* Set/Get synce clock config*/
int qtce16_phy_synce_clk_ctrl_set(const phymod_phy_access_t* phy, phymod_synce_clk_ctrl_t cfg);
int qtce16_phy_synce_clk_ctrl_get(const phymod_phy_access_t* phy, phymod_synce_clk_ctrl_t* cfg);

/*Get rx ppm*/
int qtce16_phy_rx_ppm_get(const phymod_phy_access_t* phy, int16_t* rx_ppm);

/*Set or get the duplex mode.*/
int qtce16_phy_duplex_set(const phymod_phy_access_t* phy, phymod_duplex_mode_t duplex);
int qtce16_phy_duplex_get(const phymod_phy_access_t* phy, phymod_duplex_mode_t* duplex);

/* Check PCS TX FSM status */
int qtce16_phy_pcs_tx_fsm_check(const phymod_phy_access_t* phy, uint32_t* tx_e_status);

/* Toggle speed change */
int qtce16_phy_pcs_reset(const phymod_phy_access_t* phy);

#endif /*_QTCE16_H_*/
