/*! \file bcm5699x_flexctr.c
 *
 * BCM5699x Flexctr subordinate driver.
 */
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#include <bcm/flexctr.h>

#include <bcm_int/ltsw/flexctr_int.h>
#include <bcm_int/ltsw/mbcm/flexctr.h>
#include <bcm_int/ltsw/flexctr.h>

#include <shr/shr_debug.h>
#include <bcmltd/chip/bcmltd_str.h>

/******************************************************************************
 * Local definitions
 */

#define BSL_LOG_MODULE BSL_LS_BCM_FLEXCTR

/*! Table bit of ingress port. */
#define FLEXCTR_SOURCE_ING_PORT_TBL_BIT (0)

/*! Table bit of ingress ECMP. */
#define FLEXCTR_SOURCE_ING_ECMP_TBL_BIT (0)

/*! Table bit of ingress VFI. */
#define FLEXCTR_SOURCE_ING_VFI_TBL_BIT (1)

/*! Table bit of ingress L3 interface. */
#define FLEXCTR_SOURCE_ING_L3_INTF_TBL_BIT (2)

/*! Table bit of ingress VFP. */
#define FLEXCTR_SOURCE_ING_VFP_TBL_BIT (3)

/*! Table bit of IFP. */
#define FLEXCTR_SOURCE_ING_FP_TBL_BIT (4)

/*! Table bit of ingress EXACTMATCH. */
#define FLEXCTR_SOURCE_ING_EXACTMATCH_TBL_BIT (5)

/*! Table bit of ingress IPMC. */
#define FLEXCTR_SOURCE_ING_IPMC_TBL_BIT (6)

/*! Table bit of ingress L3 route. */
#define FLEXCTR_SOURCE_ING_L3_ROUTE_TBL_BIT (6)

/*! Table bit of ingress MPLS label. */
#define FLEXCTR_SOURCE_ING_MPLS_LABLE_TBL_BIT (7)

/*! Table bit of ingress IP tunnel terminator. */
#define FLEXCTR_SOURCE_ING_IP_TNL_TERMINATOR_TBL_BIT (7)

/*! Table bit of ingress L2 tunnel initiator. */
#define FLEXCTR_SOURCE_ING_L2_TNL_TERMINATOR_TBL_BIT (7)

/*! Table bit of trunk group. */
#define FLEXCTR_SOURCE_ING_TRUNK_GROUP_TBL_BIT (8)

/*! Table bit of ingress SVP. */
#define FLEXCTR_SOURCE_ING_SVP_TBL_BIT (9)

/*! Table bit of ingress L2 tunnel VPN assignment. */
#define FLEXCTR_SOURCE_ING_L2_TNL_VPN_ASSIGN_TBL_BIT (10)

/*! Table bit of ingress SVP assignment. */
#define FLEXCTR_SOURCE_ING_SVP_ASSIGN_TBL_BIT (11)

/*! Table bit of ingress L2 tunnel initiator. */
#define FLEXCTR_SOURCE_ING_L2_TNL_INITIATOR_TBL_BIT (12)

/*! Table bit of ingress vlan translation. */
#define FLEXCTR_SOURCE_ING_VLAN_XLATE_TBL_BIT (13)

/*! Table bit of ingress MON_FLOWCOUNT_CONTROL. */
#define FLEXCTR_SOURCE_ING_MON_FLOWCOUNT_CONTROL_TBL_BIT (14)

/*! Table bit of egress port. */
#define FLEXCTR_SOURCE_EGR_PORT_TBL_BIT (0)

/*! Table bit of egress VFI. */
#define FLEXCTR_SOURCE_EGR_VFI_TBL_BIT (1)

/*! Table bit of EFP. */
#define FLEXCTR_SOURCE_EGR_FP_TBL_BIT (2)

/*! Table bit of egress L3 interface. */
#define FLEXCTR_SOURCE_EGR_L3_INTF_TBL_BIT (3)

/*! Table bit of egress L3 nexthop. */
#define FLEXCTR_SOURCE_EGR_L3_NEXT_HOP_TBL_BIT (4)

/*! Table bit of egress latency monitor. */
#define FLEXCTR_SOURCE_EGR_LDH_TBL_BIT (5)

/*! Table bit of egress DVP. */
#define FLEXCTR_SOURCE_EGR_DVP_TBL_BIT (6)

/*! Table bit of egress ethernet segment filter. */
#define FLEXCTR_SOURCE_EGR_ES_FILTER_TBL_BIT (7)

/*! Table bit of egress L2 tunnel VNID assignment. */
#define FLEXCTR_SOURCE_EGR_L2_TNL_VNID_ASSIGN_TBL_BIT (7)

/*! Table bit of egress vlan translation. */
#define FLEXCTR_SOURCE_EGR_VLAN_XLATE_TBL_BIT (8)

/*!
 * \brief Flex counter source database.
 */
static bcmint_flexctr_source_info_t bcm5699x_ltsw_flexctr_source_db[] = {
    {
        bcmFlexctrSourceIngPort,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        PORTs,
        FLEXCTR_SOURCE_ING_PORT_TBL_BIT,
    },
    {
        bcmFlexctrSourceEgrPort,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        PORTs,
        FLEXCTR_SOURCE_EGR_PORT_TBL_BIT,
    },
    {
        bcmFlexctrSourceSvp,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        PORT_SVPs,
        FLEXCTR_SOURCE_ING_SVP_TBL_BIT,
    },
    {
        bcmFlexctrSourceDvp,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        PORT_DVPs,
        FLEXCTR_SOURCE_EGR_DVP_TBL_BIT,
    },
    {
        bcmFlexctrSourceIngVlan,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        VFIs,
        FLEXCTR_SOURCE_ING_VFI_TBL_BIT,
    },
    {
        bcmFlexctrSourceEgrVlan,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        VFIs,
        FLEXCTR_SOURCE_EGR_VFI_TBL_BIT,
    },
    {
        bcmFlexctrSourceIngVpn,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        VFIs,
        FLEXCTR_SOURCE_ING_VFI_TBL_BIT,
    },
    {
        bcmFlexctrSourceEgrVpn,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        VFIs,
        FLEXCTR_SOURCE_EGR_VFI_TBL_BIT,
    },
    {
        bcmFlexctrSourceIngL3Intf,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        L3_IIFs,
        FLEXCTR_SOURCE_ING_L3_INTF_TBL_BIT,
    },
    {
        bcmFlexctrSourceIfp,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FP_ING_ENTRYs,
        FLEXCTR_SOURCE_ING_FP_TBL_BIT,
    },
    {
        bcmFlexctrSourceVfp,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FP_VLAN_ENTRYs,
        FLEXCTR_SOURCE_ING_VFP_TBL_BIT,
    },
    {
        bcmFlexctrSourceL3Egress,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        L3_UC_HIERARCHICAL_NHOPs,
        FLEXCTR_SOURCE_EGR_L3_NEXT_HOP_TBL_BIT,
    },
    {
        bcmFlexctrSourceIpmc,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        L3_IPV4_MC_ROUTEs,
        FLEXCTR_SOURCE_ING_IPMC_TBL_BIT,
    },
    {
        bcmFlexctrSourceL3Route,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        L3_IPV4_UC_ROUTEs,
        FLEXCTR_SOURCE_ING_L3_ROUTE_TBL_BIT,
    },
    {
        bcmFlexctrSourceMplsLabel,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        TNL_MPLS_DECAP_1s,
        FLEXCTR_SOURCE_ING_MPLS_LABLE_TBL_BIT,
    },
    {
        bcmFlexctrSourceIpTunnelTerminator,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        TNL_IPV4_DECAPs,
        FLEXCTR_SOURCE_ING_IP_TNL_TERMINATOR_TBL_BIT,
    },
    {
        bcmFlexctrSourceEcmpOverlay,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        ECMP_OVERLAYs,
        FLEXCTR_SOURCE_ING_ECMP_TBL_BIT,
    },
    {
        bcmFlexctrSourceEcmpUnderlay,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        ECMP_UNDERLAYs,
        FLEXCTR_SOURCE_ING_ECMP_TBL_BIT,
    },
    {
        bcmFlexctrSourceEcmp,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        ECMP_UNDERLAYs,
        FLEXCTR_SOURCE_ING_ECMP_TBL_BIT,
    },
    {
        bcmFlexctrSourceEgrL3Intf,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        L3_EIFs,
        FLEXCTR_SOURCE_EGR_L3_INTF_TBL_BIT,
    },
    {
        bcmFlexctrSourceEfp,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FP_EGR_ENTRYs,
        FLEXCTR_SOURCE_EGR_FP_TBL_BIT,
    },
    {
        bcmFlexctrSourceExactMatch,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FP_EM_ENTRYs,
        FLEXCTR_SOURCE_ING_EXACTMATCH_TBL_BIT,
    },
    {
        bcmFlexctrSourceTrunk,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        TRUNK_FASTs,
        FLEXCTR_SOURCE_ING_TRUNK_GROUP_TBL_BIT,
    },
    {
        bcmFlexctrSourceLatencyMonitor,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        MON_LDH_CONTROLs,
        FLEXCTR_SOURCE_EGR_LDH_TBL_BIT,
    },
    {
        bcmFlexctrSourceEsFilter,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        PORT_SVP_ES_FILTERINGs,
        FLEXCTR_SOURCE_EGR_ES_FILTER_TBL_BIT,
    },
    {
        bcmFlexctrSourceL2TunnelVpnAssignment ,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        TNL_L2_VXLAN_DECAP_VFI_ASSIGNMENT_OVID_VNIDs,
        FLEXCTR_SOURCE_ING_L2_TNL_VPN_ASSIGN_TBL_BIT,
    },
    {
        bcmFlexctrSourceL2TunnelSvpAssignment,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        TNL_L2_VXLAN_DECAP_SVP_ASSIGNMENT_OVID_SRC_IPV4s,
        FLEXCTR_SOURCE_ING_SVP_ASSIGN_TBL_BIT,
    },
    {
        bcmFlexctrSourceL2TunnelVnidAssignment ,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        TNL_L2_VXLAN_ADAPT_VFIs,
        FLEXCTR_SOURCE_EGR_L2_TNL_VNID_ASSIGN_TBL_BIT,
    },
    {
        bcmFlexctrSourceL2TunnelInitiator ,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        TNL_IPV4_ENCAPs,
        FLEXCTR_SOURCE_ING_L2_TNL_INITIATOR_TBL_BIT,
    },
    {
        bcmFlexctrSourceL2TunnelTerminator ,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        TNL_L2_VXLAN_DECAP_OVID_DST_IPV4s,
        FLEXCTR_SOURCE_ING_L2_TNL_TERMINATOR_TBL_BIT,
    },
    {
        bcmFlexctrSourceIngVlanTranslate,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        VFI_ING_ADAPT_OVID_PORT_GRPs,
        FLEXCTR_SOURCE_ING_VLAN_XLATE_TBL_BIT,
    },
    {
        bcmFlexctrSourceEgrVlanTranslate,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        VFI_EGR_ADAPT_PORT_GRPs,
        FLEXCTR_SOURCE_EGR_VLAN_XLATE_TBL_BIT,
    },
    {
        bcmFlexctrSourceFlowCount,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        MON_FLOWCOUNT_CONTROLs,
        FLEXCTR_SOURCE_ING_MON_FLOWCOUNT_CONTROL_TBL_BIT,
    },
    {
        bcmFlexctrSourceL3Host,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        L3_IPV4_UC_ROUTEs,
        FLEXCTR_SOURCE_ING_L3_ROUTE_TBL_BIT,
    }
};

/*!
 * \brief Flex counter object database.
 */
static bcmint_flexctr_object_info_t bcm5699x_ltsw_flexctr_object_db[] = {
    {
        bcmFlexctrObjectConstZero,
        BCMI_LTSW_FLEXCTR_STAGE_COUNT,
        FlexctrObjectTypeConst,
        USE_0s,
    },
    {
        bcmFlexctrObjectConstOne,
        BCMI_LTSW_FLEXCTR_STAGE_COUNT,
        FlexctrObjectTypeConst,
        USE_1s,
    },
    {
        bcmFlexctrObjectTriggerInterval,
        BCMI_LTSW_FLEXCTR_STAGE_COUNT,
        FlexctrObjectTypeTrigger,
        USE_TRIG_INTERVALs,
    },
    {
        bcmFlexctrObjectQuant,
        BCMI_LTSW_FLEXCTR_STAGE_COUNT,
        FlexctrObjectTypeQuant,
        USE_RANGE_CHK_1s,
    },
    {
        bcmFlexctrObjectStaticIngFieldStageLookup,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenuId,
        VFP_POLICY_OBJs,
    },
    {
        bcmFlexctrObjectStaticIngFieldStageIngress,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenuId,
        IFP_POLICY_OBJ0s,
    },
    {
        bcmFlexctrObjectStaticIngExactMatch,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        EM_POLICY_OBJs,
    },
    {
        bcmFlexctrObjectStaticIngL2TunnelVpnAssignment,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        MPLS_OBJ1s,
    },
    {
        bcmFlexctrObjectStaticIngL2TunnelSvpAssignment,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        MPLS_OBJ2s,
    },
    {
        bcmFlexctrObjectStaticIngVlanTranslateFirstLookup,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        MPLS_OBJ1s,
    },
    {
        bcmFlexctrObjectStaticIngVlanTranslateSecondLookup,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        MPLS_OBJ2s,
    },
    {
        bcmFlexctrObjectStaticMplsFirstLabelLookup,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        MPLS_OBJ1s,
    },
    {
        bcmFlexctrObjectStaticMplsSecondLabelLookup ,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        MPLS_OBJ2s,
    },
    {
        bcmFlexctrObjectStaticMplsThirdLabelLookup,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        L3_TNLs,
    },
    {
        bcmFlexctrObjectStaticIngL3Tunnel,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        L3_TNLs,
    },
    {
        bcmFlexctrObjectStaticIngFlowCountPrefixLength,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        FLOW_COUNT_PREFIX_LENs,
    },
    {
        bcmFlexctrObjectStaticIngFlowCountPortContext,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        FLOW_COUNT_PORT_CONTEXTs,
    },
    {
        bcmFlexctrObjectStaticIngFlowCountFlowSizeLower,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        FLOW_COUNT_FLOW_SIZE_LOWERs,
    },
    {
        bcmFlexctrObjectStaticIngFlowCountFlowSizeUpper,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        FLOW_COUNT_FLOW_SIZE_UPPERs,
    },
    {
        bcmFlexctrObjectStaticIngAlpmSrcLookup,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        ALPM_SRC_LOOKUPs,
    },
    {
        bcmFlexctrObjectStaticIngAlpmDstLookup,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        ALPM_DST_LOOKUPs,
    },
    {
        bcmFlexctrObjectStaticIngLookupHitStatus,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        LOOKUP_HIT_STATUSs,
    },
    {
        bcmFlexctrObjectStaticIngIngressPort,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        ING_PORTs,
    },
    {
        bcmFlexctrObjectStaticIngEgressPort,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        EGR_PORTs,
    },
    {
        bcmFlexctrObjectStaticIngVfi,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        VFIs,
    },
    {
        bcmFlexctrObjectStaticIngL3Intf,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        L3_IIFs,
    },
    {
        bcmFlexctrObjectStaticIngVrf,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        VRFs,
    },
    {
        bcmFlexctrObjectStaticIngPortClassId,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        PORT_CLASS_IDs,
    },
    {
        bcmFlexctrObjectStaticIngEcmpGroup,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        ECMP_GROUPs,
    },
    {
        bcmFlexctrObjectStaticIngEcmpMember,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        ECMP_MEMBERs,
    },
    {
        bcmFlexctrObjectStaticIngNextHopOrMcIndex,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        NHOP_MC_INDEXs,
    },
    {
        bcmFlexctrObjectStaticIngRtag7Hash0Instance0,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        RTAG7_HASH_OBJ0s,
    },
    {
        bcmFlexctrObjectStaticIngRtag7Hash0Instance1,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        RTAG7_HASH_OBJ1s,
    },
    {
        bcmFlexctrObjectStaticIngRtag7Hash1Instance0,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        RTAG7_HASH_OBJ2s,
    },
    {
        bcmFlexctrObjectStaticIngRtag7Hash1Instance1,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        RTAG7_HASH_OBJ3s,
    },
    {
        bcmFlexctrObjectStaticIngIngressTimestampBitRange0,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        ING_TIMESTAMP_OBJ0s,
    },
    {
        bcmFlexctrObjectStaticIngIngressTimestampBitRange1,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        ING_TIMESTAMP_OBJ1s,
    },
    {
        bcmFlexctrObjectStaticIngIngressTimestampBitRange2,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        ING_TIMESTAMP_OBJ2s,
    },
    {
        bcmFlexctrObjectStaticIngIpTotalLength,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        IP_TOTAL_LENs,
    },
    {
        bcmFlexctrObjectStaticIngL4Flags,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        L4_FLAGSs,
    },
    {
        bcmFlexctrObjectStaticIngUdf1,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenuId,
        UDF1_OBJ0s,
    },
    {
        bcmFlexctrObjectStaticIngUdf2,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenuId,
        UDF2_OBJ0s,
    },
    {
        bcmFlexctrObjectStaticIngIntPri,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        INT_PRIs,
    },
    {
        bcmFlexctrObjectStaticIngIntCn,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        INT_CNs,
    },
    {
        bcmFlexctrObjectStaticIngTrunkGroup,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        TRUNK_GROUPs,
    },
    {
        bcmFlexctrObjectStaticIngTrunkMember,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        TRUNK_MEMBERs,
    },
    {
        bcmFlexctrObjectStaticIngIpProtocol,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        IP_PROTOCOLs,
    },
    {
        bcmFlexctrObjectStaticEgrAdapt,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        EGR_ADAPTs,
    },
    {
        bcmFlexctrObjectStaticEgrVlanTranslate,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        EGR_ADAPTs,
    },
    {
        bcmFlexctrObjectStaticEsFilter,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        EGR_ADAPTs,
    },
    {
        bcmFlexctrObjectStaticEgrFieldStageEgress,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenuId,
        EFP_POLICY_OBJ0s,
    },
    {
        bcmFlexctrObjectStaticEgrIngressPort,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        ING_PORTs,
    },
    {
        bcmFlexctrObjectStaticEgrEgressPort,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        EGR_PORTs,
    },
    {
        bcmFlexctrObjectStaticEgrVfi,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        VFIs,
    },
    {
        bcmFlexctrObjectStaticEgrVrf,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        VRFs,
    },
    {
        bcmFlexctrObjectStaticEgrL3Oif,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        L3_OIFs,
    },
    {
        bcmFlexctrObjectStaticEgrL3TunnelIndex,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        L3_TNL_INDEXs,
    },
    {
        bcmFlexctrObjectStaticEgrL3NextHop,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        NHOPs,
    },
    {
        bcmFlexctrObjectStaticEgrL3NextHopMetadata,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        NHOP_METADATAs,
    },
    {
        bcmFlexctrObjectStaticEgrI2eClassId,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        I2E_CLASSIDs,
    },
    {
        bcmFlexctrObjectStaticEgrI2eClassIdType,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        I2E_CLASSID_TYPEs,
    },
    {
        bcmFlexctrObjectStaticEgrQueueNum,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        QUEUE_NUMs,
    },
    {
        bcmFlexctrObjectStaticEgrResidenceTimestampLower,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        RESIDENCY_TIMESTAMP_LOWERs,
    },
    {
        bcmFlexctrObjectStaticEgrResidenceTimestampUpper,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        RESIDENCY_TIMESTAMP_UPPERs,
    },
    {
        bcmFlexctrObjectStaticEgrEgressTimestampBitRange0,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        EGR_TIMESTAMP_OBJ0s,
    },
    {
        bcmFlexctrObjectStaticEgrEgressTimestampBitRange1,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        EGR_TIMESTAMP_OBJ1s,
    },
    {
        bcmFlexctrObjectStaticEgrEgressTimestampBitRange2,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        EGR_TIMESTAMP_OBJ2s,
    },
    {
        bcmFlexctrObjectStaticEgrIngressTimestampBitRange0,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        ING_TIMESTAMP_OBJ0s,
    },
    {
        bcmFlexctrObjectStaticEgrIngressTimestampBitRange1,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        ING_TIMESTAMP_OBJ1s,
    },
    {
        bcmFlexctrObjectStaticEgrIngressTimestampBitRange2,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        ING_TIMESTAMP_OBJ2s,
    },
    {
        bcmFlexctrObjectStaticEgrEntropyLabelBitRange0,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        ENTROPY_OBJ0s,
    },
    {
        bcmFlexctrObjectStaticEgrEntropyLabelBitRange1,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        ENTROPY_OBJ1s,
    },
    {
        bcmFlexctrObjectStaticEgrModEvent,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        EGR_MOD_EVENTs,
    },
    {
        bcmFlexctrObjectStaticEgrIntPri,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        INT_PRIs,
    },
    {
        bcmFlexctrObjectStaticEgrIntCn,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        INT_CNs,
    },
    {
        bcmFlexctrObjectStaticEgrCng,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        CNGs,
    },
    {
        bcmFlexctrObjectStaticIngPktAttribute,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenuId,
        PKT_ATTR_OBJ0s,
    },
    {
        bcmFlexctrObjectStaticEgrPktAttribute,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenuId,
        PKT_ATTR_OBJ0s,
    },
    {
        bcmFlexctrObjectStaticIngDvp,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        DVPs,
    },
    {
        bcmFlexctrObjectStaticIngSvp,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        SVPs,
    },
    {
        bcmFlexctrObjectStaticIngOverlayEcmpGroup,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        OVERLAY_ECMP_GROUPs,
    },
    {
        bcmFlexctrObjectStaticIngOverlayEcmpMember,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        OVERLAY_ECMP_MEMBERs,
    },
    {
        bcmFlexctrObjectStaticIngOverlayL3NextHop,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        OVERLAY_NHOPs,
    },
    {
        bcmFlexctrObjectStaticEgrDvp,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        DVPs,
    },
    {
        bcmFlexctrObjectStaticEgrSvp,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        SVPs,
    },
    {
        bcmFlexctrObjectStaticEgrNetworkGroupSvp,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        SVP_NETWORK_GRPs,
    },
    {
        bcmFlexctrObjectStaticEgrNetworkGroupDvp,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        DVP_NETWORK_GRPs,
    },
    {
        bcmFlexctrObjectStaticEgrOverlayL3NextHop,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        OVERLAY_NHOPs,
    },
    {
        bcmFlexctrObjectStaticEgrOverlayL3Oif,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        OVERLAY_L3_OIFs,
    },
};

/*!
 * \brief Flex counter VFP objects database.
 */
static bcmint_flexctr_object_enum_map_t bcm5699x_ltsw_flexctr_vfp_object_db[] = {
    { VFP_POLICY_OBJs, 0x0 },
};

/*!
 * \brief Flex counter IFP objects database.
 */
static bcmint_flexctr_object_enum_map_t bcm5699x_ltsw_flexctr_ifp_object_db[] = {
    { IFP_POLICY_OBJ0s, 0x0 },
    { IFP_POLICY_OBJ1s, 0x1 },
    { IFP_POLICY_OBJ2s, 0x2 },
    { IFP_POLICY_OBJ3s, 0x3 },
    { IFP_POLICY_OBJ4s, 0x4 },
    { IFP_POLICY_OBJ5s, 0x5 },
    { IFP_POLICY_OBJ6s, 0x6 },
    { IFP_POLICY_OBJ7s, 0x7 },
    { IFP_POLICY_OBJ8s, 0x8 },
};

/*!
 * \brief Flex counter UDF1 objects database.
 */
static bcmint_flexctr_object_enum_map_t bcm5699x_ltsw_flexctr_udf1_object_db[] = {
    { UDF1_OBJ0s, 0x0 },
    { UDF1_OBJ1s, 0x1 },
    { UDF1_OBJ2s, 0x2 },
    { UDF1_OBJ3s, 0x3 },
    { UDF1_OBJ4s, 0x4 },
    { UDF1_OBJ5s, 0x5 },
    { UDF1_OBJ6s, 0x6 },
    { UDF1_OBJ7s, 0x7 },
};

/*!
 * \brief Flex counter UDF2 objects database.
 */
static bcmint_flexctr_object_enum_map_t bcm5699x_ltsw_flexctr_udf2_object_db[] = {
    { UDF2_OBJ0s, 0x0 },
    { UDF2_OBJ1s, 0x1 },
    { UDF2_OBJ2s, 0x2 },
    { UDF2_OBJ3s, 0x3 },
    { UDF2_OBJ4s, 0x4 },
    { UDF2_OBJ5s, 0x5 },
    { UDF2_OBJ6s, 0x6 },
    { UDF2_OBJ7s, 0x7 },
};

/*!
 * \brief Flex counter EFP objects database.
 */
static bcmint_flexctr_object_enum_map_t bcm5699x_ltsw_flexctr_efp_object_db[] = {
    { EFP_POLICY_OBJ0s, 0x0 },
    { EFP_POLICY_OBJ1s, 0x1 },
    { EFP_POLICY_OBJ2s, 0x2 },
    { EFP_POLICY_OBJ3s, 0x3 },
};

/*!
 * \brief Flex counter packet attribute objects database.
 */
static bcmint_flexctr_object_enum_map_t bcm5699x_ltsw_flexctr_pkt_attr_object_db[] = {
    { PKT_ATTR_OBJ0s, 0x0 },
    { PKT_ATTR_OBJ1s, 0x1 },
    { PKT_ATTR_OBJ2s, 0x2 },
};

/******************************************************************************
 * Private functions
 */

static int
bcm5699x_ltsw_flexctr_source_info_get(
    int unit,
    int source,
    bcmint_flexctr_source_info_t **source_info)
{
    bcmint_flexctr_source_info_t *source_db, *si;
    size_t i, count;

    count = COUNTOF(bcm5699x_ltsw_flexctr_source_db);
    source_db = bcm5699x_ltsw_flexctr_source_db;

    if (source < 0 || source >= bcmFlexctrSourceCount) {
        LOG_ERROR(BSL_LOG_MODULE,
                  (BSL_META_U(unit, "Invalid flex counter source %d\n"),
                   source));

        *source_info = NULL;
        return SHR_E_PARAM;
    }

    for (i = 0; i < count; i++) {
        si = &(source_db[i]);
        if (source == si->source) {
            *source_info = si;
            break;
        }
    }

    /* Not found. */
    if (i >= count) {
        LOG_INFO(BSL_LOG_MODULE,
                 (BSL_META_U(unit, "Flex counter source %d not found\n"),
                  source));

        *source_info = NULL;
        return SHR_E_UNAVAIL;
    }

    return SHR_E_NONE;
}

static int
bcm5699x_ltsw_flexctr_object_info_get(int unit,
                                      int object,
                                      bcmint_flexctr_object_info_t **object_info)
{
    bcmint_flexctr_object_info_t *object_db, *oi;
    size_t i, count;

    count = COUNTOF(bcm5699x_ltsw_flexctr_object_db);
    object_db = bcm5699x_ltsw_flexctr_object_db;

    if ((object < 0) || (object >= bcmFlexctrObjectCount) ||
        ((object >= bcmFlexctrObjectStaticCount) &&
        (object < bcmFlexctrObjectIngSystemSource))) {
        LOG_ERROR(BSL_LOG_MODULE,
                  (BSL_META_U(unit, "Invalid flex counter object %d\n"),
                   object));

        *object_info = NULL;
        return SHR_E_PARAM;
    }

    for (i = 0; i < count; i++) {
        oi = &(object_db[i]);
        if (object == oi->object) {
            *object_info = oi;
            break;
        }
    }

    /* Not found. */
    if (i >= count) {
        LOG_INFO(BSL_LOG_MODULE,
                 (BSL_META_U(unit, "Flex counter object %d not found\n"),
                  object));

        *object_info = NULL;
        return SHR_E_UNAVAIL;
    }

    return SHR_E_NONE;
}

static int
bcm5699x_ltsw_flexctr_object_enum_get(int unit,
                                      int object,
                                      uint32_t object_id,
                                      const char **symbol)
{
    bcmint_flexctr_object_enum_map_t *emap_db, *em;
    size_t i, count;

    if (object == bcmFlexctrObjectStaticIngFieldStageLookup) {
        count = COUNTOF(bcm5699x_ltsw_flexctr_vfp_object_db);
        emap_db = bcm5699x_ltsw_flexctr_vfp_object_db;
    } else if (object == bcmFlexctrObjectStaticIngFieldStageIngress) {
        count = COUNTOF(bcm5699x_ltsw_flexctr_ifp_object_db);
        emap_db = bcm5699x_ltsw_flexctr_ifp_object_db;
    } else if (object == bcmFlexctrObjectStaticIngUdf1) {
        count = COUNTOF(bcm5699x_ltsw_flexctr_udf1_object_db);
        emap_db = bcm5699x_ltsw_flexctr_udf1_object_db;
    } else if (object == bcmFlexctrObjectStaticIngUdf2) {
        count = COUNTOF(bcm5699x_ltsw_flexctr_udf2_object_db);
        emap_db = bcm5699x_ltsw_flexctr_udf2_object_db;
    } else if (object == bcmFlexctrObjectStaticEgrFieldStageEgress) {
        count = COUNTOF(bcm5699x_ltsw_flexctr_efp_object_db);
        emap_db = bcm5699x_ltsw_flexctr_efp_object_db;
    } else if ((object == bcmFlexctrObjectStaticIngPktAttribute) ||
               (object == bcmFlexctrObjectStaticEgrPktAttribute)) {
        count = COUNTOF(bcm5699x_ltsw_flexctr_pkt_attr_object_db);
        emap_db = bcm5699x_ltsw_flexctr_pkt_attr_object_db;
    } else {
        LOG_INFO(BSL_LOG_MODULE,
                 (BSL_META_U(unit, "Flex counter object %d (id = %d) "
                  "not found\n"), object, object_id));

        *symbol = NULL;
        return SHR_E_UNAVAIL;
    }

    for (i = 0; i < count; i++) {
        em = &(emap_db[i]);
        if (object_id == em->value) {
            *symbol = em->name;
            break;
        }
    }

    /* Not found. */
    if (i >= count) {
        LOG_INFO(BSL_LOG_MODULE,
                 (BSL_META_U(unit, "Flex counter object %d (id = %d)"
                  "not found\n"), object, object_id));

        *symbol = NULL;
        return SHR_E_UNAVAIL;
    }

    return SHR_E_NONE;
}

static int
bcm5699x_ltsw_flexctr_object_overlay_multi_get(int unit,
    bcm_flexctr_object_t object,
    int array_size,
    bcm_flexctr_object_t *overlay_object_array,
    int *count)
{
    bcmint_flexctr_object_info_t *object_db, *oi;
    const char *symbol = NULL;
    size_t i, size, count_tmp = 0;

    SHR_FUNC_ENTER(unit);

    if (array_size != 0) {
        SHR_NULL_CHECK(overlay_object_array, SHR_E_PARAM);
    }
    if ((object < 0) || (object >= bcmFlexctrObjectStaticCount) ||
        (array_size < 0) || (count == NULL)) {
        SHR_ERR_EXIT(SHR_E_PARAM);
    }

    size = COUNTOF(bcm5699x_ltsw_flexctr_object_db);
    object_db = bcm5699x_ltsw_flexctr_object_db;

    for (i = 0; i < size; i++) {
        oi = &(object_db[i]);
        if (object == oi->object) {
            symbol = oi->symbol;
            break;
        }
    }

    /* Not found. */
    if (i >= size || symbol == NULL) {
        LOG_INFO(BSL_LOG_MODULE,
                 (BSL_META_U(unit, "Flex counter object %d not found\n"),
                  object));
        SHR_ERR_EXIT(SHR_E_UNAVAIL);
    }

    for (i = 0; i < size; i++) {
        oi = &(object_db[i]);
        if (oi->symbol && (sal_strcmp(symbol, oi->symbol) == 0)) {
            if (overlay_object_array && (count_tmp < array_size)) {
                overlay_object_array[count_tmp] = oi->object;
            }
            count_tmp++;
        }
    }

    *count = (count_tmp > 1) ? count_tmp : 0;

exit:
    SHR_FUNC_EXIT();
}

/*!
 * \brief Flexctr sub driver functions for bcm5699x.
 */
static mbcm_ltsw_flexctr_drv_t bcm5699x_flexctr_sub_drv = {
    .flexctr_source_info_get = bcm5699x_ltsw_flexctr_source_info_get,
    .flexctr_object_info_get = bcm5699x_ltsw_flexctr_object_info_get,
    .flexctr_object_enum_get = bcm5699x_ltsw_flexctr_object_enum_get,
    .flexctr_object_overlay_multi_get = bcm5699x_ltsw_flexctr_object_overlay_multi_get,
};

/******************************************************************************
 * Public functions
 */

int
bcm5699x_flexctr_sub_drv_attach(int unit, void *hdl)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_flexctr_drv_set(unit, &bcm5699x_flexctr_sub_drv));

exit:
    SHR_FUNC_EXIT();
}
