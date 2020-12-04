/***********************************************************************************
 *                                                                                 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

/***********************************************************************************
 ***********************************************************************************
 *                                                                                 *
 *  Revision      :   *
 *                                                                                 *
 *  Description   :  This file contains print messages for decoded bit fields      *
 *                   of structs.                                                   *
 */

/* THIS FILE IS GENERATED USING AN AUTOMATED SCRIPT... PLEASE DO NOT EDIT THIS FILE DIRECTLY !!! */


#ifdef __cplusplus
extern "C" { /* __cplusplus */
#endif

#ifndef BLACKHAWK7_V1L8P1_API_DECODE_PRINT_H
#define BLACKHAWK7_V1L8P1_API_DECODE_PRINT_H

#include "common/srds_api_err_code.h"
#include "blackhawk7_v1l8p1_dependencies.h"
#include "blackhawk7_v1l8p1_usr_includes.h"

/*! @file
 *  @brief Decode bit fields
 */

/*! @addtogroup APITag
 * @{
 */

/*! @defgroup SerdesAPIDecodePrintTag Decode Bits  */

/*! @addtogroup SerdesAPIDecodePrintTag
 * @{
 */

/** Print Decoded uc_sts_ext bits.
 * Can be used to decode uc_sts_ext.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] bits The bits that have been set and should be decoded for uc_sts_ext.
 * @param[out] buf The input buffer that will get populated with the decoded bits.
 * @param[in] buf_size The size of the input buffer in bytes.
 * @param[in] prepended_text A string that will get prepended to each decode line.
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors).
 */
extern err_code_t blackhawk7_v1l8p1_decode_uc_sts_ext(srds_access_t *sa__, uint16_t bits, char *buf, size_t buf_size, const char * const prepended_text);

/** Print Decoded uc_sts bits.
 * Can be used to decode uc_sts.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] bits The bits that have been set and should be decoded for uc_sts.
 * @param[out] buf The input buffer that will get populated with the decoded bits.
 * @param[in] buf_size The size of the input buffer in bytes.
 * @param[in] prepended_text A string that will get prepended to each decode line.
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors).
 */
extern err_code_t blackhawk7_v1l8p1_decode_uc_sts(srds_access_t *sa__, uint8_t bits, char *buf, size_t buf_size, const char * const prepended_text);

/*! @} SerdesAPIDecodePrintTag */
/*! @} APITag */
#endif /* SERDES_API_DECODE_PRINT_H */
#ifdef __cplusplus
}
#endif /* __cplusplus */
