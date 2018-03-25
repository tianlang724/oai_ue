/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_HandoverPreparationInformation_v9j0_IEs_H_
#define	_HandoverPreparationInformation_v9j0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct HandoverPreparationInformation_v10j0_IEs;

/* HandoverPreparationInformation-v9j0-IEs */
typedef struct HandoverPreparationInformation_v9j0_IEs {
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct HandoverPreparationInformation_v10j0_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HandoverPreparationInformation_v9j0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HandoverPreparationInformation_v9j0_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "HandoverPreparationInformation-v10j0-IEs.h"

#endif	/* _HandoverPreparationInformation_v9j0_IEs_H_ */
#include <asn_internal.h>
