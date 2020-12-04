

/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
#ifndef _DNX_DATA_MAX_OAM_H_

#define _DNX_DATA_MAX_OAM_H_




#ifndef BCM_DNX_SUPPORT
#error "This file is for use by DNX (JR2) family only!"
#endif



#define DNX_DATA_MAX_OAM_GENERAL_OAM_NOF_NON_ACC_ACTION_PROFILES (16)


#define DNX_DATA_MAX_OAM_GENERAL_OAM_NOF_ACC_ACTION_PROFILES (16)


#define DNX_DATA_MAX_OAM_GENERAL_OAM_NOF_RESERVED_EGR_ACC_ACTION_PROFILES (2)


#define DNX_DATA_MAX_OAM_GENERAL_OAM_EGR_ACC_ACTION_PROFILE_ID_FOR_INJECT_MPLS (15)


#define DNX_DATA_MAX_OAM_GENERAL_OAM_NOF_BITS_NON_ACC_ACTION_PROFILES (4)


#define DNX_DATA_MAX_OAM_GENERAL_OAM_NOF_BITS_ACC_ACTION_PROFILES (4)


#define DNX_DATA_MAX_OAM_GENERAL_OAM_NOF_BITS_OAM_LIF_DB_KEY_BASE_INGRESS (22)


#define DNX_DATA_MAX_OAM_GENERAL_OAM_NOF_BITS_OAM_LIF_DB_KEY_BASE_EGRESS (20)


#define DNX_DATA_MAX_OAM_GENERAL_OAM_NOF_ENDPOINTS (32768)


#define DNX_DATA_MAX_OAM_GENERAL_OAM_NOF_OAMP_MEPS (65536)


#define DNX_DATA_MAX_OAM_GENERAL_OAM_NOF_GROUPS (32768)


#define DNX_DATA_MAX_OAM_GENERAL_OAM_NOF_ENTRIES_OAM_LIF_DB (4096)


#define DNX_DATA_MAX_OAM_GENERAL_OAM_NOF_BITS_COUNTER_BASE (20)


#define DNX_DATA_MAX_OAM_GENERAL_OAM_NOF_PUNT_ERROR_CODES (18)


#define DNX_DATA_MAX_OAM_GENERAL_OAM_NOF_PRIORITY_MAP_PROFILES (4)

#define DNX_DATA_MAX_OAM_GENERAL_OAM_FORCE_INTERFACE_FOR_MEPS_WITHOUT_COUNTER (1)


#define DNX_DATA_MAX_OAM_GENERAL_OAM_MY_CFM_MAC_BY_RANGE (1)


#define DNX_DATA_MAX_OAM_GENERAL_OAM_NOF_PEMLA_CHANNEL_TYPES (6)


#define DNX_DATA_MAX_OAM_GENERAL_OAM_MDB_RMEP_DB_PROFILE_LIMITATION (262144)


#define DNX_DATA_MAX_OAM_GENERAL_OAM_LM_READ_INDEX_FIELD_EXISTS (1)


#define DNX_DATA_MAX_OAM_GENERAL_OAM_LM_READ_PER_SUB_ENABLE_FIELD_EXISTS (1)


#define DNX_DATA_MAX_OAM_GENERAL_OAM_LM_READ_PER_SUB_DISABLE_FIELD_EXISTS (1)


#define DNX_DATA_MAX_OAM_GENERAL_OAM_IDENTIFICATION_APPDB_1_FIELD_EXISTS (1)


#define DNX_DATA_MAX_OAM_GENERAL_OAM_NTP_FREQ_CONTROL_WORD (281475)


#define DNX_DATA_MAX_OAM_GENERAL_OAM_NTP_TIME_FREQ_CONTROL (1152921505)


#define DNX_DATA_MAX_OAM_GENERAL_OAM_IEEE_1588_TIME_FREQ_CONTROL (268435456)


#define DNX_DATA_MAX_OAM_GENERAL_OAM_NSE_NCO_FREQ_CONTROL (268435456)


#define DNX_DATA_MAX_OAM_GENERAL_OAM_NOF_LABELS_FOR_SD_ON_P_NODE (7)


#define DNX_DATA_MAX_OAM_GENERAL_OAM_TOD_CONFIG_IN_ECI (1)


#define DNX_DATA_MAX_OAM_GENERAL_OAM_TOD_CONFIG_IN_NS (1)


#define DNX_DATA_MAX_OAM_GENERAL_OAM_LOCAL_OUTLIF_MSB_BIT_INDEX (15)


#define DNX_DATA_MAX_OAM_OAMP_NOF_MEP_DB_ENTRY_BANKS (12)


#define DNX_DATA_MAX_OAM_OAMP_NOF_MEP_DB_ENTRIES_PER_BANK (2048)


#define DNX_DATA_MAX_OAM_OAMP_SCAN_RATE_BANK_EXIST (1)


#define DNX_DATA_MAX_OAM_OAMP_NOF_MEP_DB_ENTRIES (24576)


#define DNX_DATA_MAX_OAM_OAMP_MAX_NOF_ENDPOINT_ID (65536)


#define DNX_DATA_MAX_OAM_OAMP_MAX_NOF_MEP_ID (98304)


#define DNX_DATA_MAX_OAM_OAMP_MAX_VALUE_OF_MEP_ID (98303)


#define DNX_DATA_MAX_OAM_OAMP_NOF_UMC   (2048)


#define DNX_DATA_MAX_OAM_OAMP_MEP_ID_NOF_BITS (16)


#define DNX_DATA_MAX_OAM_OAMP_NOF_MEP_DB_ENTRY_BANKS_FOR_ENDPOINTS (8)


#define DNX_DATA_MAX_OAM_OAMP_NOF_MEP_DB_ENDPOINT_ENTRIES (16384)

#define DNX_DATA_MAX_OAM_OAMP_MEP_DB_DA_IS_MC_FOR_SHORT_ENTRIES_SUPPORT (1)


#define DNX_DATA_MAX_OAM_OAMP_NOF_ICC_PROFILES (15)


#define DNX_DATA_MAX_OAM_OAMP_LOCAL_PORT_2_SYSTEM_PORT_SIZE (512)


#define DNX_DATA_MAX_OAM_OAMP_OAM_NOF_SA_MAC_PROFILES (2)


#define DNX_DATA_MAX_OAM_OAMP_OAM_NOF_DA_MAC_MSB_PROFILES (8)


#define DNX_DATA_MAX_OAM_OAMP_OAM_NOF_DA_MAC_LSB_PROFILES (128)


#define DNX_DATA_MAX_OAM_OAMP_OAM_NOF_TPID_PROFILES (4)


#define DNX_DATA_MAX_OAM_OAMP_OAMP_PE_DEFAULT_INSTRUCTION_INDEX (0)


#define DNX_DATA_MAX_OAM_OAMP_OAMP_PE_MAX_NOF_INSTRUCTIONS (4096)


#define DNX_DATA_MAX_OAM_OAMP_OAMP_PE_NOF_FEM_BITS (16)


#define DNX_DATA_MAX_OAM_OAMP_MEP_DB_SUB_ENTRY_SIZE (54)


#define DNX_DATA_MAX_OAM_OAMP_MEP_DB_NOF_SUB_ENTRIES (4)


#define DNX_DATA_MAX_OAM_OAMP_MEP_DB_FULL_ENTRY_SIZE (216)


#define DNX_DATA_MAX_OAM_OAMP_MEP_PE_PROFILE_NOF_BITS (6)


#define DNX_DATA_MAX_OAM_OAMP_RMEP_DB_ENTRIES_NOF_BITS (17)


#define DNX_DATA_MAX_OAM_OAMP_RMEP_DB_RMEP_INDEX_NOF_BITS (16)


#define DNX_DATA_MAX_OAM_OAMP_RMEP_MAX_SELF_CONTAINED (32768)


#define DNX_DATA_MAX_OAM_OAMP_RMEP_PAIR_SYS_CLOCKS (25)


#define DNX_DATA_MAX_OAM_OAMP_MEP_SYS_CLOCKS (50)


#define DNX_DATA_MAX_OAM_OAMP_NUM_CLOCKS_SCAN_NOF_BITS (23)

#define DNX_DATA_MAX_OAM_OAMP_MEP_DB_VERSION_LIMITATION (1)

#define DNX_DATA_MAX_OAM_OAMP_OAMP_MEP_DB_THRESHOLD_VERSION_LIMITATION (1)

#define DNX_DATA_MAX_OAM_OAMP_RMEP_DB_NON_ZERO_LIFETIME_UNITS_LIMITATION (1)

#define DNX_DATA_MAX_OAM_OAMP_CRC_CALCULATION_SUPPORTED (1)


#define DNX_DATA_MAX_OAM_OAMP_MODIFIED_MEP_DB_STRUCTURE (1)


#define DNX_DATA_MAX_OAM_OAMP_LOCAL_PORT_2_SYSTEM_PORT_BITS (10)


#define DNX_DATA_MAX_OAM_OAMP_MDB_NOF_ACCESS_IDS (8)


#define DNX_DATA_MAX_OAM_OAMP_BFD_MPLS_SHORT_MDB_RESERVED_BITS (3)


#define DNX_DATA_MAX_OAM_OAMP_BFD_M_HOP_SHORT_MDB_RESERVED_BITS (3)


#define DNX_DATA_MAX_OAM_OAMP_BFD_PWE_SHORT_MDB_RESERVED_BITS (2)


#define DNX_DATA_MAX_OAM_OAMP_CCM_ETH_OFFLOAD_MDB_RESERVED_BITS (6)


#define DNX_DATA_MAX_OAM_OAMP_BFD_1_HOP_SHORT_MDB_RESERVED_BITS (2)


#define DNX_DATA_MAX_OAM_OAMP_CCM_MPLS_TP_PWE_OFFLOAD_MDB_RESERVED_BITS (6)


#define DNX_DATA_MAX_OAM_OAMP_PUNT_PACKET_DESTINATION_SIZE (21)


#define DNX_DATA_MAX_OAM_OAMP_PUNT_PACKET_ITMH_DESTINATION_FULL_ENCODING_SUPPORTED (1)


#define DNX_DATA_MAX_OAM_OAMP_CORE_NOF_BITS (1)

#define DNX_DATA_MAX_OAM_OAMP_PUNT_PACKET_PPH_TTL_SUPPORTED (1)

#define DNX_DATA_MAX_OAM_OAMP_LMM_DMM_SUPPORTED (1)


#define DNX_DATA_MAX_OAM_OAMP_INTR_OAMP_PENDING_EVENT (1693)


#define DNX_DATA_MAX_OAM_OAMP_INTR_OAMP_STAT_PENDING_EVENT (1694)


#define DNX_DATA_MAX_OAM_OAMP_SLM_SUPPORTED (1)


#define DNX_DATA_MAX_OAM_OAMP_OAMP_SAT_RXI_ENABLE_SUPPORT (1)


#define DNX_DATA_MAX_OAM_OAMP_MDB_TX_RATE_LSB_FIELD_PRESENT (1)


#define DNX_DATA_MAX_OAM_OAMP_NOF_JUMBO_DM_TLV_ENTRIES (256)


#define DNX_DATA_MAX_OAM_OAMP_MDB_RESERVED_FIELD_SIZE_CALCULATION (1)


#define DNX_DATA_MAX_OAM_OAMP_EVENT_FIFO_SLICING_SIZE_OFFSET (16)

#define DNX_DATA_MAX_OAM_OAMP_CCM_PIGGYBACK_PER_PRIORITY_WITH_CRC_SUPPORTED (1)


#define DNX_DATA_MAX_OAM_OAMP_NOF_RMEP_WRITE_COMPLETE_CHECKS (0)




#endif 

