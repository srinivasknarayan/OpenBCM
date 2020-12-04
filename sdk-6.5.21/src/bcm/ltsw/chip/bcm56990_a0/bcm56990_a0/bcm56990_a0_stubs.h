/*! \file bcm56990_a0_stubs.h
 *
 * BCM56990_A0 subordinate driver stubs list.
 */
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifdef BCM56990_A0_STUB_DRV_ENTRY
/*
 * BCM56990_A0_STUB_DRV_ENTRY macros.
 *
 * Before including this file, define BCM56990_A0_STUB_DRV_ENTRY
 * as a macro to operate on the following parameters:
 *
 *     #define BCM56990_A0_STUB_DRV_ENTRY(_dn,_mn,_bd)
 *
 *     _dn: Device Name
 *     _mn: Module Name
 *     _bd: Base Device
 *
 * Note that this macro will be undefined at the end of this definition.
 */

/*
 * Stub functions list for those sub-drivers which will not be attached
 * for this device.
 */
BCM56990_A0_STUB_DRV_ENTRY(bcm56990_a0, flow, "BCM56990")
BCM56990_A0_STUB_DRV_ENTRY(bcm56990_a0, port, "BCM56990")
BCM56990_A0_STUB_DRV_ENTRY(bcm56990_a0, virtual, "BCM56990")

/* End BCM56990_A0_STUB_DRV_ENTRY Macros */

#undef BCM56990_A0_STUB_DRV_ENTRY
#endif /* BCM56990_A0_STUB_DRV_ENTRY */
