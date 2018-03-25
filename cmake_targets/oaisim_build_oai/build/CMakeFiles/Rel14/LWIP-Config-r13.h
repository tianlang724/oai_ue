/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_LWIP_Config_r13_H_
#define	_LWIP_Config_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct WLAN_MobilityConfig_r13;
struct TunnelConfigLWIP_r13;

/* LWIP-Config-r13 */
typedef struct LWIP_Config_r13 {
	struct WLAN_MobilityConfig_r13	*lwip_MobilityConfig_r13	/* OPTIONAL */;
	struct TunnelConfigLWIP_r13	*tunnelConfigLWIP_r13	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LWIP_Config_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LWIP_Config_r13;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "WLAN-MobilityConfig-r13.h"
#include "TunnelConfigLWIP-r13.h"

#endif	/* _LWIP_Config_r13_H_ */
#include <asn_internal.h>
