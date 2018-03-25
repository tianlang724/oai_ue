/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_UECapabilityInformation_NB_r13_IEs_H_
#define	_UECapabilityInformation_NB_r13_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UE-Capability-NB-r13.h"
#include "UE-RadioPagingInfo-NB-r13.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UECapabilityInformation-NB-r13-IEs */
typedef struct UECapabilityInformation_NB_r13_IEs {
	UE_Capability_NB_r13_t	 ue_Capability_Container_r13;
	UE_RadioPagingInfo_NB_r13_t	 ue_RadioPagingInfo_r13;
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct UECapabilityInformation_NB_r13_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UECapabilityInformation_NB_r13_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UECapabilityInformation_NB_r13_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _UECapabilityInformation_NB_r13_IEs_H_ */
#include <asn_internal.h>
