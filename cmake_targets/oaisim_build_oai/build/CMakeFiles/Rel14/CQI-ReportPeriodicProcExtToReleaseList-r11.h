/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_CQI_ReportPeriodicProcExtToReleaseList_r11_H_
#define	_CQI_ReportPeriodicProcExtToReleaseList_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CQI-ReportPeriodicProcExtId-r11.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CQI-ReportPeriodicProcExtToReleaseList-r11 */
typedef struct CQI_ReportPeriodicProcExtToReleaseList_r11 {
	A_SEQUENCE_OF(CQI_ReportPeriodicProcExtId_r11_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CQI_ReportPeriodicProcExtToReleaseList_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CQI_ReportPeriodicProcExtToReleaseList_r11;

#ifdef __cplusplus
}
#endif

#endif	/* _CQI_ReportPeriodicProcExtToReleaseList_r11_H_ */
#include <asn_internal.h>
