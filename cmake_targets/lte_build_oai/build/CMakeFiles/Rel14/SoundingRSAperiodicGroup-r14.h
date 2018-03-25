/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_SoundingRSAperiodicGroup_r14_H_
#define	_SoundingRSAperiodicGroup_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SoundingRS-UL-ConfigDedicatedAperiodic-r10.h"
#include "SrsCcGroupIndex.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SoundingRSAperiodicGroup-r14 */
typedef struct SoundingRSAperiodicGroup_r14 {
	struct SoundingRSAperiodicGroup_r14__srsCcGroupIndexList {
		A_SEQUENCE_OF(SrsCcGroupIndex_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *srsCcGroupIndexList;
	SoundingRS_UL_ConfigDedicatedAperiodic_r10_t	 soundingRS_UL_ConfigDedicatedAperiodic_r10;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SoundingRSAperiodicGroup_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SoundingRSAperiodicGroup_r14;

#ifdef __cplusplus
}
#endif

#endif	/* _SoundingRSAperiodicGroup_r14_H_ */
#include <asn_internal.h>
