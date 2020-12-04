/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by xfcr from NPL files files.
 *
 * Tool: $SDK/INTERNAL/fltg/bin/xfcr
 *
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
#ifndef BCM56880_A0_DNA_4_7_11_PTM_EM_TILE_H
#define BCM56880_A0_DNA_4_7_11_PTM_EM_TILE_H

typedef enum bcm56880_a0_dna_4_7_11_em_group_e {
    EFTA10_I1T_00_MODE0_GROUP0 = 0,
    EFTA10_I1T_01_MODE0_GROUP0 = 1,
    EFTA10_I1T_01_MODE1_GROUP0 = 2,
    EFTA10_I1T_02_MODE0_GROUP0 = 3,
    EFTA10_I1T_03_MODE0_GROUP0 = 4,
    EFTA20_I1T_00_MODE0_GROUP0 = 5,
    EFTA20_I1T_00_MODE1_GROUP0 = 6,
    EFTA20_I1T_01_MODE0_GROUP0 = 7,
    EFTA20_I1T_02_MODE0_GROUP0 = 8,
    EFTA20_I1T_02_MODE1_GROUP0 = 9,
    EFTA20_I1T_03_MODE0_GROUP0 = 10,
    EFTA20_I1T_03_MODE1_GROUP0 = 11,
    EFTA20_I1T_04_MODE0_GROUP0 = 12,
    EFTA20_I1T_05_MODE0_GROUP0 = 13,
    EFTA20_I1T_05_MODE1_GROUP0 = 14,
    EFTA30_E2T_00_MODE0_GROUP0 = 15,
    EFTA30_E2T_00_MODE1_GROUP0 = 16,
    IFTA10_I1T_00_MODE0_GROUP0 = 17,
    IFTA120_I1T_00_MODE0_GROUP0 = 18,
    IFTA120_I1T_02_MODE0_GROUP0 = 19,
    IFTA120_I1T_03_MODE0_GROUP0 = 20,
    IFTA130_I1T_00_MODE0_GROUP0 = 21,
    IFTA130_I1T_01_MODE0_GROUP0 = 22,
    IFTA130_I1T_01_MODE1_GROUP0 = 23,
    IFTA130_I1T_02_MODE0_GROUP0 = 24,
    IFTA130_I1T_03_MODE0_GROUP0 = 25,
    IFTA130_I1T_03_MODE1_GROUP0 = 26,
    IFTA140_I1T_00_MODE0_GROUP0 = 27,
    IFTA150_T4T_00_MODE0_GROUP0 = 28,
    IFTA20_I1T_00_MODE0_GROUP0 = 29,
    IFTA30_E2T_00_MODE0_GROUP0 = 30,
    IFTA40_E2T_00_MODE0_GROUP0 = 31,
    IFTA40_E2T_00_MODE1_GROUP0 = 32,
    IFTA40_E2T_01_MODE0_GROUP0 = 33,
    IFTA40_T4T_00_MODE0_GROUP0 = 34,
    IFTA40_T4T_00_MODE0_GROUP1 = 35,
    IFTA40_T4T_00_MODE1_GROUP0 = 36,
    IFTA40_T4T_01_MODE0_GROUP0 = 37,
    IFTA40_T4T_01_MODE1_GROUP0 = 38,
    IFTA40_T4T_01_MODE1_GROUP1 = 39,
    IFTA50_I1T_00_MODE0_GROUP0 = 40,
    IFTA50_I1T_01_MODE0_GROUP0 = 41,
    IFTA50_T4T_00_MODE0_GROUP0 = 42,
    IFTA50_T4T_00_MODE0_GROUP1 = 43,
    IFTA60_I1T_00_MODE0_GROUP0 = 44,
    IFTA60_I1T_01_MODE0_GROUP0 = 45,
    IFTA60_I1T_02_MODE0_GROUP0 = 46,
    IFTA70_I1T_00_MODE0_GROUP0 = 47,
    IFTA70_I1T_01_MODE0_GROUP0 = 48,
    IFTA80_E2T_00_MODE0_GROUP0 = 49,
    IFTA80_E2T_00_MODE0_GROUP1 = 50,
    IFTA80_E2T_00_MODE1_GROUP0 = 51,
    IFTA80_E2T_00_MODE2_GROUP0 = 52,
    IFTA80_E2T_00_MODE3_GROUP0 = 53,
    IFTA80_E2T_01_MODE2_GROUP0 = 54,
    IFTA80_E2T_01_MODE3_GROUP0 = 55,
    IFTA80_E2T_01_MODE4_GROUP0 = 56,
    IFTA80_E2T_01_MODE5_GROUP0 = 57,
    IFTA80_E2T_01_MODE5_GROUP1 = 58,
    IFTA80_E2T_02_MODE0_GROUP0 = 59,
    IFTA80_E2T_02_MODE1_GROUP0 = 60,
    IFTA80_E2T_02_MODE2_GROUP0 = 61,
    IFTA80_E2T_02_MODE5_GROUP0 = 62,
    IFTA80_E2T_02_MODE5_GROUP1 = 63,
    IFTA80_E2T_03_MODE0_GROUP0 = 64,
    IFTA80_E2T_03_MODE1_GROUP0 = 65,
    IFTA80_E2T_03_MODE2_GROUP0 = 66,
    IFTA80_E2T_03_MODE5_GROUP0 = 67,
    IFTA80_E2T_03_MODE5_GROUP1 = 68,
    IFTA80_T2T_00_MODE0_GROUP0 = 69,
    IFTA80_T2T_00_MODE0_GROUP1 = 70,
    IFTA80_T2T_00_MODE0_GROUP2 = 71,
    IFTA80_T2T_00_MODE1_GROUP0 = 72,
    IFTA80_T2T_00_MODE2_GROUP0 = 73,
    IFTA80_T2T_00_MODE3_GROUP0 = 74,
    IFTA80_T2T_00_MODE3_GROUP1 = 75,
    IFTA80_T2T_00_MODE4_GROUP0 = 76,
    IFTA80_T2T_00_MODE5_GROUP0 = 77,
    IFTA80_T2T_00_MODE5_GROUP1 = 78,
    IFTA80_T2T_00_MODE6_GROUP0 = 79,
    IFTA80_T2T_00_MODE6_GROUP1 = 80,
    IFTA80_T2T_00_MODE7_GROUP0 = 81,
    IFTA80_T2T_00_MODE7_GROUP1 = 82,
    IFTA80_T2T_00_MODE7_GROUP2 = 83,
    IFTA80_T2T_00_MODE8_GROUP0 = 84,
    IFTA80_T2T_01_MODE0_GROUP0 = 85,
    IFTA80_T2T_01_MODE0_GROUP1 = 86,
    IFTA80_T2T_01_MODE0_GROUP2 = 87,
    IFTA80_T2T_01_MODE1_GROUP0 = 88,
    IFTA80_T2T_01_MODE2_GROUP0 = 89,
    IFTA80_T2T_01_MODE3_GROUP0 = 90,
    IFTA80_T2T_01_MODE3_GROUP1 = 91,
    IFTA80_T2T_01_MODE4_GROUP0 = 92,
    IFTA80_T2T_01_MODE5_GROUP0 = 93,
    IFTA80_T2T_01_MODE5_GROUP1 = 94,
    IFTA80_T2T_01_MODE6_GROUP0 = 95,
    IFTA80_T2T_01_MODE6_GROUP1 = 96,
    IFTA80_T2T_01_MODE7_GROUP0 = 97,
    IFTA80_T2T_01_MODE7_GROUP1 = 98,
    IFTA80_T2T_01_MODE7_GROUP2 = 99,
    IFTA80_T2T_01_MODE8_GROUP0 = 100,
    IFTA90_E2T_00_MODE0_GROUP0 = 101,
    IFTA90_E2T_00_MODE1_GROUP0 = 102,
    IFTA90_E2T_00_MODE10_GROUP0 = 103,
    IFTA90_E2T_00_MODE10_GROUP1 = 104,
    IFTA90_E2T_00_MODE10_GROUP2 = 105,
    IFTA90_E2T_00_MODE10_GROUP3 = 106,
    IFTA90_E2T_00_MODE10_GROUP4 = 107,
    IFTA90_E2T_00_MODE11_GROUP0 = 108,
    IFTA90_E2T_00_MODE11_GROUP1 = 109,
    IFTA90_E2T_00_MODE11_GROUP2 = 110,
    IFTA90_E2T_00_MODE11_GROUP3 = 111,
    IFTA90_E2T_00_MODE11_GROUP4 = 112,
    IFTA90_E2T_00_MODE12_GROUP0 = 113,
    IFTA90_E2T_00_MODE12_GROUP1 = 114,
    IFTA90_E2T_00_MODE12_GROUP2 = 115,
    IFTA90_E2T_00_MODE12_GROUP3 = 116,
    IFTA90_E2T_00_MODE12_GROUP4 = 117,
    IFTA90_E2T_00_MODE13_GROUP0 = 118,
    IFTA90_E2T_00_MODE13_GROUP1 = 119,
    IFTA90_E2T_00_MODE13_GROUP2 = 120,
    IFTA90_E2T_00_MODE13_GROUP3 = 121,
    IFTA90_E2T_00_MODE13_GROUP4 = 122,
    IFTA90_E2T_00_MODE2_GROUP0 = 123,
    IFTA90_E2T_00_MODE3_GROUP0 = 124,
    IFTA90_E2T_00_MODE4_GROUP0 = 125,
    IFTA90_E2T_00_MODE4_GROUP1 = 126,
    IFTA90_E2T_00_MODE4_GROUP2 = 127,
    IFTA90_E2T_00_MODE4_GROUP3 = 128,
    IFTA90_E2T_00_MODE5_GROUP0 = 129,
    IFTA90_E2T_00_MODE5_GROUP1 = 130,
    IFTA90_E2T_00_MODE5_GROUP2 = 131,
    IFTA90_E2T_00_MODE5_GROUP3 = 132,
    IFTA90_E2T_00_MODE6_GROUP0 = 133,
    IFTA90_E2T_00_MODE6_GROUP1 = 134,
    IFTA90_E2T_00_MODE6_GROUP2 = 135,
    IFTA90_E2T_00_MODE6_GROUP3 = 136,
    IFTA90_E2T_00_MODE7_GROUP0 = 137,
    IFTA90_E2T_00_MODE7_GROUP1 = 138,
    IFTA90_E2T_00_MODE7_GROUP2 = 139,
    IFTA90_E2T_00_MODE7_GROUP3 = 140,
    IFTA90_E2T_00_MODE8_GROUP0 = 141,
    IFTA90_E2T_00_MODE9_GROUP0 = 142,
    IFTA90_E2T_00_MODE9_GROUP1 = 143,
    IFTA90_E2T_00_MODE9_GROUP2 = 144,
    IFTA90_E2T_00_MODE9_GROUP3 = 145,
    IFTA90_E2T_00_MODE9_GROUP4 = 146,
    IFTA90_E2T_01_MODE0_GROUP0 = 147,
    IFTA90_E2T_01_MODE1_GROUP0 = 148,
    IFTA90_E2T_01_MODE10_GROUP0 = 149,
    IFTA90_E2T_01_MODE10_GROUP1 = 150,
    IFTA90_E2T_01_MODE10_GROUP2 = 151,
    IFTA90_E2T_01_MODE10_GROUP3 = 152,
    IFTA90_E2T_01_MODE10_GROUP4 = 153,
    IFTA90_E2T_01_MODE11_GROUP0 = 154,
    IFTA90_E2T_01_MODE11_GROUP1 = 155,
    IFTA90_E2T_01_MODE11_GROUP2 = 156,
    IFTA90_E2T_01_MODE11_GROUP3 = 157,
    IFTA90_E2T_01_MODE11_GROUP4 = 158,
    IFTA90_E2T_01_MODE12_GROUP0 = 159,
    IFTA90_E2T_01_MODE12_GROUP1 = 160,
    IFTA90_E2T_01_MODE12_GROUP2 = 161,
    IFTA90_E2T_01_MODE12_GROUP3 = 162,
    IFTA90_E2T_01_MODE12_GROUP4 = 163,
    IFTA90_E2T_01_MODE13_GROUP0 = 164,
    IFTA90_E2T_01_MODE13_GROUP1 = 165,
    IFTA90_E2T_01_MODE13_GROUP2 = 166,
    IFTA90_E2T_01_MODE13_GROUP3 = 167,
    IFTA90_E2T_01_MODE13_GROUP4 = 168,
    IFTA90_E2T_01_MODE14_GROUP0 = 169,
    IFTA90_E2T_01_MODE14_GROUP1 = 170,
    IFTA90_E2T_01_MODE14_GROUP2 = 171,
    IFTA90_E2T_01_MODE14_GROUP3 = 172,
    IFTA90_E2T_01_MODE14_GROUP4 = 173,
    IFTA90_E2T_01_MODE2_GROUP0 = 174,
    IFTA90_E2T_01_MODE3_GROUP0 = 175,
    IFTA90_E2T_01_MODE4_GROUP0 = 176,
    IFTA90_E2T_01_MODE4_GROUP1 = 177,
    IFTA90_E2T_01_MODE4_GROUP2 = 178,
    IFTA90_E2T_01_MODE4_GROUP3 = 179,
    IFTA90_E2T_01_MODE5_GROUP0 = 180,
    IFTA90_E2T_01_MODE5_GROUP1 = 181,
    IFTA90_E2T_01_MODE5_GROUP2 = 182,
    IFTA90_E2T_01_MODE5_GROUP3 = 183,
    IFTA90_E2T_01_MODE6_GROUP0 = 184,
    IFTA90_E2T_01_MODE6_GROUP1 = 185,
    IFTA90_E2T_01_MODE6_GROUP2 = 186,
    IFTA90_E2T_01_MODE6_GROUP3 = 187,
    IFTA90_E2T_01_MODE7_GROUP0 = 188,
    IFTA90_E2T_01_MODE7_GROUP1 = 189,
    IFTA90_E2T_01_MODE7_GROUP2 = 190,
    IFTA90_E2T_01_MODE7_GROUP3 = 191,
    IFTA90_E2T_01_MODE8_GROUP0 = 192,
    IFTA90_E2T_01_MODE9_GROUP0 = 193,
    IFTA90_E2T_01_MODE9_GROUP1 = 194,
    IFTA90_E2T_01_MODE9_GROUP2 = 195,
    IFTA90_E2T_01_MODE9_GROUP3 = 196,
    IFTA90_E2T_01_MODE9_GROUP4 = 197,
    IFTA90_E2T_02_MODE0_GROUP0 = 198,
    IFTA90_E2T_02_MODE1_GROUP0 = 199,
    IFTA90_E2T_02_MODE10_GROUP0 = 200,
    IFTA90_E2T_02_MODE10_GROUP1 = 201,
    IFTA90_E2T_02_MODE10_GROUP2 = 202,
    IFTA90_E2T_02_MODE10_GROUP3 = 203,
    IFTA90_E2T_02_MODE10_GROUP4 = 204,
    IFTA90_E2T_02_MODE11_GROUP0 = 205,
    IFTA90_E2T_02_MODE11_GROUP1 = 206,
    IFTA90_E2T_02_MODE11_GROUP2 = 207,
    IFTA90_E2T_02_MODE11_GROUP3 = 208,
    IFTA90_E2T_02_MODE11_GROUP4 = 209,
    IFTA90_E2T_02_MODE12_GROUP0 = 210,
    IFTA90_E2T_02_MODE12_GROUP1 = 211,
    IFTA90_E2T_02_MODE12_GROUP2 = 212,
    IFTA90_E2T_02_MODE12_GROUP3 = 213,
    IFTA90_E2T_02_MODE12_GROUP4 = 214,
    IFTA90_E2T_02_MODE13_GROUP0 = 215,
    IFTA90_E2T_02_MODE13_GROUP1 = 216,
    IFTA90_E2T_02_MODE13_GROUP2 = 217,
    IFTA90_E2T_02_MODE13_GROUP3 = 218,
    IFTA90_E2T_02_MODE13_GROUP4 = 219,
    IFTA90_E2T_02_MODE2_GROUP0 = 220,
    IFTA90_E2T_02_MODE3_GROUP0 = 221,
    IFTA90_E2T_02_MODE4_GROUP0 = 222,
    IFTA90_E2T_02_MODE4_GROUP1 = 223,
    IFTA90_E2T_02_MODE4_GROUP2 = 224,
    IFTA90_E2T_02_MODE4_GROUP3 = 225,
    IFTA90_E2T_02_MODE5_GROUP0 = 226,
    IFTA90_E2T_02_MODE5_GROUP1 = 227,
    IFTA90_E2T_02_MODE5_GROUP2 = 228,
    IFTA90_E2T_02_MODE5_GROUP3 = 229,
    IFTA90_E2T_02_MODE6_GROUP0 = 230,
    IFTA90_E2T_02_MODE6_GROUP1 = 231,
    IFTA90_E2T_02_MODE6_GROUP2 = 232,
    IFTA90_E2T_02_MODE6_GROUP3 = 233,
    IFTA90_E2T_02_MODE7_GROUP0 = 234,
    IFTA90_E2T_02_MODE7_GROUP1 = 235,
    IFTA90_E2T_02_MODE7_GROUP2 = 236,
    IFTA90_E2T_02_MODE7_GROUP3 = 237,
    IFTA90_E2T_02_MODE8_GROUP0 = 238,
    IFTA90_E2T_02_MODE9_GROUP0 = 239,
    IFTA90_E2T_02_MODE9_GROUP1 = 240,
    IFTA90_E2T_02_MODE9_GROUP2 = 241,
    IFTA90_E2T_02_MODE9_GROUP3 = 242,
    IFTA90_E2T_02_MODE9_GROUP4 = 243,
    IFTA90_E2T_03_MODE0_GROUP0 = 244,
    IFTA90_E2T_03_MODE1_GROUP0 = 245,
    IFTA90_E2T_03_MODE10_GROUP0 = 246,
    IFTA90_E2T_03_MODE10_GROUP1 = 247,
    IFTA90_E2T_03_MODE10_GROUP2 = 248,
    IFTA90_E2T_03_MODE10_GROUP3 = 249,
    IFTA90_E2T_03_MODE10_GROUP4 = 250,
    IFTA90_E2T_03_MODE11_GROUP0 = 251,
    IFTA90_E2T_03_MODE11_GROUP1 = 252,
    IFTA90_E2T_03_MODE11_GROUP2 = 253,
    IFTA90_E2T_03_MODE11_GROUP3 = 254,
    IFTA90_E2T_03_MODE11_GROUP4 = 255,
    IFTA90_E2T_03_MODE12_GROUP0 = 256,
    IFTA90_E2T_03_MODE12_GROUP1 = 257,
    IFTA90_E2T_03_MODE12_GROUP2 = 258,
    IFTA90_E2T_03_MODE12_GROUP3 = 259,
    IFTA90_E2T_03_MODE12_GROUP4 = 260,
    IFTA90_E2T_03_MODE13_GROUP0 = 261,
    IFTA90_E2T_03_MODE13_GROUP1 = 262,
    IFTA90_E2T_03_MODE13_GROUP2 = 263,
    IFTA90_E2T_03_MODE13_GROUP3 = 264,
    IFTA90_E2T_03_MODE13_GROUP4 = 265,
    IFTA90_E2T_03_MODE14_GROUP0 = 266,
    IFTA90_E2T_03_MODE14_GROUP1 = 267,
    IFTA90_E2T_03_MODE14_GROUP2 = 268,
    IFTA90_E2T_03_MODE14_GROUP3 = 269,
    IFTA90_E2T_03_MODE14_GROUP4 = 270,
    IFTA90_E2T_03_MODE2_GROUP0 = 271,
    IFTA90_E2T_03_MODE3_GROUP0 = 272,
    IFTA90_E2T_03_MODE4_GROUP0 = 273,
    IFTA90_E2T_03_MODE4_GROUP1 = 274,
    IFTA90_E2T_03_MODE4_GROUP2 = 275,
    IFTA90_E2T_03_MODE4_GROUP3 = 276,
    IFTA90_E2T_03_MODE5_GROUP0 = 277,
    IFTA90_E2T_03_MODE5_GROUP1 = 278,
    IFTA90_E2T_03_MODE5_GROUP2 = 279,
    IFTA90_E2T_03_MODE5_GROUP3 = 280,
    IFTA90_E2T_03_MODE6_GROUP0 = 281,
    IFTA90_E2T_03_MODE6_GROUP1 = 282,
    IFTA90_E2T_03_MODE6_GROUP2 = 283,
    IFTA90_E2T_03_MODE6_GROUP3 = 284,
    IFTA90_E2T_03_MODE7_GROUP0 = 285,
    IFTA90_E2T_03_MODE7_GROUP1 = 286,
    IFTA90_E2T_03_MODE7_GROUP2 = 287,
    IFTA90_E2T_03_MODE7_GROUP3 = 288,
    IFTA90_E2T_03_MODE8_GROUP0 = 289,
    IFTA90_E2T_03_MODE9_GROUP0 = 290,
    IFTA90_E2T_03_MODE9_GROUP1 = 291,
    IFTA90_E2T_03_MODE9_GROUP2 = 292,
    IFTA90_E2T_03_MODE9_GROUP3 = 293,
    IFTA90_E2T_03_MODE9_GROUP4 = 294,
    UFT_MINI_TILE_MODE0_GROUP0 = 295,
    INVALID_GROUP = 296,
} bcm56880_a0_dna_4_7_11_em_group_t;

typedef enum bcm56880_a0_dna_4_7_11_tile_mode_e {
    EFTA10_I1T_00_MODE0 = 0,
    EFTA10_I1T_01_MODE0 = 1,
    EFTA10_I1T_01_MODE1 = 2,
    EFTA10_I1T_02_MODE0 = 3,
    EFTA10_I1T_03_MODE0 = 4,
    EFTA20_I1T_00_MODE0 = 5,
    EFTA20_I1T_00_MODE1 = 6,
    EFTA20_I1T_01_MODE0 = 7,
    EFTA20_I1T_02_MODE0 = 8,
    EFTA20_I1T_02_MODE1 = 9,
    EFTA20_I1T_03_MODE0 = 10,
    EFTA20_I1T_03_MODE1 = 11,
    EFTA20_I1T_04_MODE0 = 12,
    EFTA20_I1T_05_MODE0 = 13,
    EFTA20_I1T_05_MODE1 = 14,
    EFTA30_E2T_00_MODE0 = 15,
    EFTA30_E2T_00_MODE1 = 16,
    IFTA10_I1T_00_MODE0 = 17,
    IFTA120_I1T_00_MODE0 = 18,
    IFTA120_I1T_02_MODE0 = 19,
    IFTA120_I1T_03_MODE0 = 20,
    IFTA130_I1T_00_MODE0 = 21,
    IFTA130_I1T_01_MODE0 = 22,
    IFTA130_I1T_01_MODE1 = 23,
    IFTA130_I1T_02_MODE0 = 24,
    IFTA130_I1T_03_MODE0 = 25,
    IFTA130_I1T_03_MODE1 = 26,
    IFTA140_I1T_00_MODE0 = 27,
    IFTA150_T4T_00_MODE0 = 28,
    IFTA20_I1T_00_MODE0 = 29,
    IFTA30_E2T_00_MODE0 = 30,
    IFTA40_E2T_00_MODE0 = 31,
    IFTA40_E2T_00_MODE1 = 32,
    IFTA40_E2T_01_MODE0 = 33,
    IFTA40_T4T_00_MODE0 = 34,
    IFTA40_T4T_00_MODE1 = 35,
    IFTA40_T4T_01_MODE0 = 36,
    IFTA40_T4T_01_MODE1 = 37,
    IFTA50_I1T_00_MODE0 = 38,
    IFTA50_I1T_01_MODE0 = 39,
    IFTA50_T4T_00_MODE0 = 40,
    IFTA60_I1T_00_MODE0 = 41,
    IFTA60_I1T_01_MODE0 = 42,
    IFTA60_I1T_02_MODE0 = 43,
    IFTA70_I1T_00_MODE0 = 44,
    IFTA70_I1T_01_MODE0 = 45,
    IFTA80_E2T_00_MODE0 = 46,
    IFTA80_E2T_00_MODE1 = 47,
    IFTA80_E2T_00_MODE2 = 48,
    IFTA80_E2T_00_MODE3 = 49,
    IFTA80_E2T_01_MODE2 = 50,
    IFTA80_E2T_01_MODE3 = 51,
    IFTA80_E2T_01_MODE4 = 52,
    IFTA80_E2T_01_MODE5 = 53,
    IFTA80_E2T_02_MODE0 = 54,
    IFTA80_E2T_02_MODE1 = 55,
    IFTA80_E2T_02_MODE2 = 56,
    IFTA80_E2T_02_MODE5 = 57,
    IFTA80_E2T_03_MODE0 = 58,
    IFTA80_E2T_03_MODE1 = 59,
    IFTA80_E2T_03_MODE2 = 60,
    IFTA80_E2T_03_MODE5 = 61,
    IFTA80_T2T_00_MODE0 = 62,
    IFTA80_T2T_00_MODE1 = 63,
    IFTA80_T2T_00_MODE2 = 64,
    IFTA80_T2T_00_MODE3 = 65,
    IFTA80_T2T_00_MODE4 = 66,
    IFTA80_T2T_00_MODE5 = 67,
    IFTA80_T2T_00_MODE6 = 68,
    IFTA80_T2T_00_MODE7 = 69,
    IFTA80_T2T_00_MODE8 = 70,
    IFTA80_T2T_01_MODE0 = 71,
    IFTA80_T2T_01_MODE1 = 72,
    IFTA80_T2T_01_MODE2 = 73,
    IFTA80_T2T_01_MODE3 = 74,
    IFTA80_T2T_01_MODE4 = 75,
    IFTA80_T2T_01_MODE5 = 76,
    IFTA80_T2T_01_MODE6 = 77,
    IFTA80_T2T_01_MODE7 = 78,
    IFTA80_T2T_01_MODE8 = 79,
    IFTA90_E2T_00_MODE0 = 80,
    IFTA90_E2T_00_MODE1 = 81,
    IFTA90_E2T_00_MODE10 = 82,
    IFTA90_E2T_00_MODE11 = 83,
    IFTA90_E2T_00_MODE12 = 84,
    IFTA90_E2T_00_MODE13 = 85,
    IFTA90_E2T_00_MODE2 = 86,
    IFTA90_E2T_00_MODE3 = 87,
    IFTA90_E2T_00_MODE4 = 88,
    IFTA90_E2T_00_MODE5 = 89,
    IFTA90_E2T_00_MODE6 = 90,
    IFTA90_E2T_00_MODE7 = 91,
    IFTA90_E2T_00_MODE8 = 92,
    IFTA90_E2T_00_MODE9 = 93,
    IFTA90_E2T_01_MODE0 = 94,
    IFTA90_E2T_01_MODE1 = 95,
    IFTA90_E2T_01_MODE10 = 96,
    IFTA90_E2T_01_MODE11 = 97,
    IFTA90_E2T_01_MODE12 = 98,
    IFTA90_E2T_01_MODE13 = 99,
    IFTA90_E2T_01_MODE14 = 100,
    IFTA90_E2T_01_MODE2 = 101,
    IFTA90_E2T_01_MODE3 = 102,
    IFTA90_E2T_01_MODE4 = 103,
    IFTA90_E2T_01_MODE5 = 104,
    IFTA90_E2T_01_MODE6 = 105,
    IFTA90_E2T_01_MODE7 = 106,
    IFTA90_E2T_01_MODE8 = 107,
    IFTA90_E2T_01_MODE9 = 108,
    IFTA90_E2T_02_MODE0 = 109,
    IFTA90_E2T_02_MODE1 = 110,
    IFTA90_E2T_02_MODE10 = 111,
    IFTA90_E2T_02_MODE11 = 112,
    IFTA90_E2T_02_MODE12 = 113,
    IFTA90_E2T_02_MODE13 = 114,
    IFTA90_E2T_02_MODE2 = 115,
    IFTA90_E2T_02_MODE3 = 116,
    IFTA90_E2T_02_MODE4 = 117,
    IFTA90_E2T_02_MODE5 = 118,
    IFTA90_E2T_02_MODE6 = 119,
    IFTA90_E2T_02_MODE7 = 120,
    IFTA90_E2T_02_MODE8 = 121,
    IFTA90_E2T_02_MODE9 = 122,
    IFTA90_E2T_03_MODE0 = 123,
    IFTA90_E2T_03_MODE1 = 124,
    IFTA90_E2T_03_MODE10 = 125,
    IFTA90_E2T_03_MODE11 = 126,
    IFTA90_E2T_03_MODE12 = 127,
    IFTA90_E2T_03_MODE13 = 128,
    IFTA90_E2T_03_MODE14 = 129,
    IFTA90_E2T_03_MODE2 = 130,
    IFTA90_E2T_03_MODE3 = 131,
    IFTA90_E2T_03_MODE4 = 132,
    IFTA90_E2T_03_MODE5 = 133,
    IFTA90_E2T_03_MODE6 = 134,
    IFTA90_E2T_03_MODE7 = 135,
    IFTA90_E2T_03_MODE8 = 136,
    IFTA90_E2T_03_MODE9 = 137,
    UFT_MINI_TILE_MODE0 = 138,
    TILE_MODE_DISABLED = 139,
    INVALID = 140,
} bcm56880_a0_dna_4_7_11_tile_mode_t;

typedef enum bcm56880_a0_dna_4_7_11_bank_id_e {
    EFTA10_I1T_00_BANK0 = 0,
    EFTA10_I1T_00_BANK1 = 1,
    EFTA10_I1T_01_BANK0 = 2,
    EFTA10_I1T_01_BANK1 = 3,
    EFTA10_I1T_02_BANK0 = 4,
    EFTA10_I1T_02_BANK1 = 5,
    EFTA10_I1T_03_BANK0 = 6,
    EFTA20_I1T_00_BANK0 = 7,
    EFTA20_I1T_00_BANK1 = 8,
    EFTA20_I1T_01_BANK0 = 9,
    EFTA20_I1T_01_BANK1 = 10,
    EFTA20_I1T_02_BANK0 = 11,
    EFTA20_I1T_02_BANK1 = 12,
    EFTA20_I1T_03_BANK0 = 13,
    EFTA20_I1T_03_BANK1 = 14,
    EFTA20_I1T_04_BANK0 = 15,
    EFTA20_I1T_04_BANK1 = 16,
    EFTA20_I1T_05_BANK0 = 17,
    EFTA20_I1T_05_BANK1 = 18,
    EFTA30_E2T_00_BANK0 = 19,
    EFTA30_E2T_00_BANK1 = 20,
    IFTA10_I1T_00_BANK0 = 21,
    IFTA10_I1T_00_BANK1 = 22,
    IFTA120_I1T_00_BANK0 = 23,
    IFTA120_I1T_00_BANK1 = 24,
    IFTA120_I1T_02_BANK0 = 25,
    IFTA120_I1T_03_BANK0 = 26,
    IFTA130_I1T_00_BANK0 = 27,
    IFTA130_I1T_00_BANK1 = 28,
    IFTA130_I1T_01_BANK0 = 29,
    IFTA130_I1T_01_BANK1 = 30,
    IFTA130_I1T_02_BANK0 = 31,
    IFTA130_I1T_02_BANK1 = 32,
    IFTA130_I1T_03_BANK0 = 33,
    IFTA130_I1T_03_BANK1 = 34,
    IFTA140_I1T_00_BANK0 = 35,
    IFTA140_I1T_00_BANK1 = 36,
    IFTA150_T4T_00_BANK0 = 37,
    IFTA150_T4T_00_BANK1 = 38,
    IFTA20_I1T_00_BANK0 = 39,
    IFTA30_E2T_00_BANK0 = 40,
    IFTA30_E2T_00_BANK1 = 41,
    IFTA40_E2T_00_BANK0 = 42,
    IFTA40_E2T_00_BANK1 = 43,
    IFTA40_E2T_01_BANK0 = 44,
    IFTA40_E2T_01_BANK1 = 45,
    IFTA40_T4T_00_BANK0 = 46,
    IFTA40_T4T_00_BANK1 = 47,
    IFTA40_T4T_00_BANK2 = 48,
    IFTA40_T4T_00_BANK3 = 49,
    IFTA40_T4T_01_BANK0 = 50,
    IFTA40_T4T_01_BANK1 = 51,
    IFTA40_T4T_01_BANK2 = 52,
    IFTA40_T4T_01_BANK3 = 53,
    IFTA50_I1T_00_BANK0 = 54,
    IFTA50_I1T_00_BANK1 = 55,
    IFTA50_I1T_01_BANK0 = 56,
    IFTA50_I1T_01_BANK1 = 57,
    IFTA50_T4T_00_BANK0 = 58,
    IFTA50_T4T_00_BANK1 = 59,
    IFTA50_T4T_00_BANK2 = 60,
    IFTA60_I1T_00_BANK0 = 61,
    IFTA60_I1T_00_BANK1 = 62,
    IFTA60_I1T_01_BANK0 = 63,
    IFTA60_I1T_01_BANK1 = 64,
    IFTA60_I1T_02_BANK0 = 65,
    IFTA60_I1T_02_BANK1 = 66,
    IFTA70_I1T_00_BANK0 = 67,
    IFTA70_I1T_01_BANK0 = 68,
    IFTA80_E2T_00_BANK0 = 69,
    IFTA80_E2T_00_BANK1 = 70,
    IFTA80_E2T_01_BANK0 = 71,
    IFTA80_E2T_01_BANK1 = 72,
    IFTA80_E2T_02_BANK0 = 73,
    IFTA80_E2T_02_BANK1 = 74,
    IFTA80_E2T_03_BANK0 = 75,
    IFTA80_E2T_03_BANK1 = 76,
    IFTA80_T2T_00_BANK0 = 77,
    IFTA80_T2T_00_BANK1 = 78,
    IFTA80_T2T_00_BANK2 = 79,
    IFTA80_T2T_00_BANK3 = 80,
    IFTA80_T2T_00_BANK4 = 81,
    IFTA80_T2T_00_BANK5 = 82,
    IFTA80_T2T_00_BANK6 = 83,
    IFTA80_T2T_00_BANK7 = 84,
    IFTA80_T2T_01_BANK0 = 85,
    IFTA80_T2T_01_BANK1 = 86,
    IFTA80_T2T_01_BANK2 = 87,
    IFTA80_T2T_01_BANK3 = 88,
    IFTA80_T2T_01_BANK4 = 89,
    IFTA80_T2T_01_BANK5 = 90,
    IFTA80_T2T_01_BANK6 = 91,
    IFTA80_T2T_01_BANK7 = 92,
    IFTA90_E2T_00_BANK0 = 93,
    IFTA90_E2T_00_BANK1 = 94,
    IFTA90_E2T_01_BANK0 = 95,
    IFTA90_E2T_01_BANK1 = 96,
    IFTA90_E2T_02_BANK0 = 97,
    IFTA90_E2T_02_BANK1 = 98,
    IFTA90_E2T_03_BANK0 = 99,
    IFTA90_E2T_03_BANK1 = 100,
    UFT_MINI_TILE_BANK0 = 101,
    UFT_MINI_TILE_BANK1 = 102,
    UFT_MINI_TILE_BANK2 = 103,
    UFT_MINI_TILE_BANK3 = 104,
    UFT_MINI_TILE_BANK4 = 105,
    UFT_MINI_TILE_BANK5 = 106,
    INVALID_BANK = 107,
} bcm56880_a0_dna_4_7_11_bank_id_t;

typedef enum bcm56880_a0_dna_4_7_11_tile_id_e {
    EFTA10_I1T_00 = 0,
    EFTA10_I1T_01 = 1,
    EFTA10_I1T_02 = 2,
    EFTA10_I1T_03 = 3,
    EFTA20_I1T_00 = 4,
    EFTA20_I1T_01 = 5,
    EFTA20_I1T_02 = 6,
    EFTA20_I1T_03 = 7,
    EFTA20_I1T_04 = 8,
    EFTA20_I1T_05 = 9,
    EFTA30_E2T_00 = 10,
    IFTA10_I1T_00 = 11,
    IFTA120_I1T_00 = 12,
    IFTA120_I1T_02 = 13,
    IFTA120_I1T_03 = 14,
    IFTA130_I1T_00 = 15,
    IFTA130_I1T_01 = 16,
    IFTA130_I1T_02 = 17,
    IFTA130_I1T_03 = 18,
    IFTA140_I1T_00 = 19,
    IFTA150_T4T_00 = 20,
    IFTA20_I1T_00 = 21,
    IFTA30_E2T_00 = 22,
    IFTA40_E2T_00 = 23,
    IFTA40_E2T_01 = 24,
    IFTA40_T4T_00 = 25,
    IFTA40_T4T_01 = 26,
    IFTA50_I1T_00 = 27,
    IFTA50_I1T_01 = 28,
    IFTA50_T4T_00 = 29,
    IFTA60_I1T_00 = 30,
    IFTA60_I1T_01 = 31,
    IFTA60_I1T_02 = 32,
    IFTA70_I1T_00 = 33,
    IFTA70_I1T_01 = 34,
    IFTA80_E2T_00 = 35,
    IFTA80_E2T_01 = 36,
    IFTA80_E2T_02 = 37,
    IFTA80_E2T_03 = 38,
    IFTA80_T2T_00 = 39,
    IFTA80_T2T_01 = 40,
    IFTA90_E2T_00 = 41,
    IFTA90_E2T_01 = 42,
    IFTA90_E2T_02 = 43,
    IFTA90_E2T_03 = 44,
    UFT_MINI_TILE = 45,
} bcm56880_a0_dna_4_7_11_tile_id_t;


#endif /* BCM56880_A0_DNA_4_7_11_PTM_EM_TILE_H */
