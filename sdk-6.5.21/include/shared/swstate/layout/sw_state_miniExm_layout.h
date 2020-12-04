/* 
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 * 
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
*/
#ifndef _SHR_sw_state_miniExm_H_
#define _SHR_sw_state_miniExm_H_


#define SW_STATE_MINIEXM_REGULAR_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_MINIEXM_SINGLEPTR_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_MINIEXM_STATICARR_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_MINIEXM_STATICARRARR_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_MINIEXM_PTRVAR_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_MINIEXM_ARRVAR_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_MINIEXM_ARRARR_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_MINIEXM_ARRPTR_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_MINIEXM_SHR_BITDCL_SINGLEPTR_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_MINIEXM_SHR_BITDCL_DOUBLEPTR_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_MINIEXM_SHR_BITDCL_STATICARR_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_MINIEXM_SHR_BITDCL_DOUBLE_STATICARR_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_MINIEXM_BUFF_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_MINIEXM_REGULARPBMP_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_MINIEXM_PBMPPTR_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_MINIEXM_LAYOUT_NOF_MAX_LAYOUT_NODES (1 + SW_STATE_MINIEXM_REGULAR_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_MINIEXM_SINGLEPTR_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_MINIEXM_STATICARR_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_MINIEXM_STATICARRARR_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_MINIEXM_PTRVAR_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_MINIEXM_ARRVAR_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_MINIEXM_ARRARR_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_MINIEXM_ARRPTR_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_MINIEXM_SHR_BITDCL_SINGLEPTR_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_MINIEXM_SHR_BITDCL_DOUBLEPTR_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_MINIEXM_SHR_BITDCL_STATICARR_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_MINIEXM_SHR_BITDCL_DOUBLE_STATICARR_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_MINIEXM_BUFF_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_MINIEXM_REGULARPBMP_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_MINIEXM_PBMPPTR_LAYOUT_NOF_MAX_LAYOUT_NODES) 

#ifdef _SHR_SW_STATE_EXM
int sw_state_miniExm_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* _SHR_SW_STATE_EXM*/ 
#ifdef _SHR_SW_STATE_EXM
int sw_state_miniExm_regular_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* _SHR_SW_STATE_EXM*/ 
#ifdef _SHR_SW_STATE_EXM
int sw_state_miniExm_singlePtr_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* _SHR_SW_STATE_EXM*/ 
#ifdef _SHR_SW_STATE_EXM
int sw_state_miniExm_staticArr_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* _SHR_SW_STATE_EXM*/ 
#ifdef _SHR_SW_STATE_EXM
int sw_state_miniExm_staticArrArr_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* _SHR_SW_STATE_EXM*/ 
#ifdef _SHR_SW_STATE_EXM
int sw_state_miniExm_ptrVar_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* _SHR_SW_STATE_EXM*/ 
#ifdef _SHR_SW_STATE_EXM
int sw_state_miniExm_arrVar_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* _SHR_SW_STATE_EXM*/ 
#ifdef _SHR_SW_STATE_EXM
int sw_state_miniExm_arrArr_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* _SHR_SW_STATE_EXM*/ 
#ifdef _SHR_SW_STATE_EXM
int sw_state_miniExm_arrPtr_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* _SHR_SW_STATE_EXM*/ 
#ifdef _SHR_SW_STATE_EXM
int sw_state_miniExm_shr_bitdcl_singlePtr_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* _SHR_SW_STATE_EXM*/ 
#ifdef _SHR_SW_STATE_EXM
int sw_state_miniExm_shr_bitdcl_doublePtr_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* _SHR_SW_STATE_EXM*/ 
#ifdef _SHR_SW_STATE_EXM
int sw_state_miniExm_shr_bitdcl_staticArr_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* _SHR_SW_STATE_EXM*/ 
#ifdef _SHR_SW_STATE_EXM
int sw_state_miniExm_shr_bitdcl_double_staticArr_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* _SHR_SW_STATE_EXM*/ 
#ifdef _SHR_SW_STATE_EXM
int sw_state_miniExm_buff_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* _SHR_SW_STATE_EXM*/ 
#ifdef _SHR_SW_STATE_EXM
int sw_state_miniExm_regularPbmp_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* _SHR_SW_STATE_EXM*/ 
#ifdef _SHR_SW_STATE_EXM
int sw_state_miniExm_pbmpPtr_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* _SHR_SW_STATE_EXM*/ 

#endif /* _SHR_sw_state_miniExm_H_ */
