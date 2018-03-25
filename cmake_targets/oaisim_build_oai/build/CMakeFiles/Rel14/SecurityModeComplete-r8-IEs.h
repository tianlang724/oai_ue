/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_SecurityModeComplete_r8_IEs_H_
#define	_SecurityModeComplete_r8_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SecurityModeComplete_v8a0_IEs;

/* SecurityModeComplete-r8-IEs */
typedef struct SecurityModeComplete_r8_IEs {
	struct SecurityModeComplete_v8a0_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SecurityModeComplete_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SecurityModeComplete_r8_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SecurityModeComplete-v8a0-IEs.h"

#endif	/* _SecurityModeComplete_r8_IEs_H_ */
#include <asn_internal.h>
