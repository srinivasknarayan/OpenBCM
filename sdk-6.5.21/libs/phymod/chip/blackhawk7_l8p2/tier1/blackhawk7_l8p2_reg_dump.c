/*************************************************************************************
 *                                                                                   *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

/*************************************************************************************
 *************************************************************************************
 *                                                                                   *
 *  Revision      :  Id                                                              *
 *                                                                                   *
 *  Description   :  const array definition used by  blackhawk7_l8p2_reg_dump().              *
 *                   Each row of blackhawk7_l8p2_reg_dump_arr represents a block of 16        *
 *                   addresses. The first value of a row is the starting address of  *
 *                   a register block, and the second value is a valid register      *
 *                   enable bitmap. The bitmap represents which addresses are valid  *
 *                   within the block.                                               *
 */


/* THIS FILE IS GENERATED USING AN AUTOMATED SCRIPT... PLEASE DO NOT EDIT THIS FILE DIRECTLY !!! */

#include "blackhawk7_l8p2_reg_dump.h"

/*! @file
 */

const uint16_t blackhawk7_l8p2_reg_dump_arr[BLACKHAWK7_L8P2_REG_DUMP_SECTIONS][2] = {
/* start register block, valid register enable */
    {0x0090, 0x0fc0},
    {0xd000, 0x7fe0},
    {0xd010, 0x03e0},
    {0xd020, 0x03ff},
    {0xd030, 0x7fff},
    {0xd040, 0x3fff},
    {0xd050, 0x7fff},
    {0xd060, 0x7fff},
    {0xd070, 0x5fff},
    {0xd080, 0x6fff},
    {0xd090, 0x01ff},
    {0xd0a0, 0x7f3f},
    {0xd0b0, 0x5eeb},
    {0xd0c0, 0x7fff},
    {0xd0d0, 0x03ff},
    {0xd0e0, 0x1f07},
    {0xd0f0, 0x7fff},
    {0xd100, 0x7fff},
    {0xd120, 0x7fff},
    {0xd130, 0x7fff},
    {0xd150, 0x007c},
    {0xd160, 0x7fff},
    {0xd170, 0x4f2f},
    {0xd190, 0x7fff},
    {0xd1a0, 0x71be},
    {0xd1b0, 0x31be},
    {0xd1c0, 0x5eeb},
    {0xd1d0, 0x5eeb},
    {0xd1e0, 0x7fff},
    {0xd1f0, 0x0003},
    {0xd200, 0x7fff},
    {0xd210, 0x7fff},
    {0xd220, 0x7fff},
    {0xd230, 0x400f},
    {0xd300, 0x0fff},
    {0xd310, 0x0021},
    {0xd400, 0x3fff},
    {0xd410, 0x7aff},
    {0xd420, 0x667f},
    {0xd430, 0x4000},
    {0xd440, 0x7fff},
    {0xd450, 0x5d53},
    {0xd460, 0x007f},
    {0xd470, 0x0301},
    {0xffd0, 0x7000},
    {0xd110, 0x7fff},
    {0xd140, 0x7fff},
    {0xd180, 0x6337},
    {0xd320, 0x001f},
    {0xd240, 0x6fff},
};
