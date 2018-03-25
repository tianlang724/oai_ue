/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_SystemInformationBlockType20_r13_H_
#define	_SystemInformationBlockType20_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SystemInformationBlockType20_r13__sc_mcch_RepetionPeriod_r13 {
	SystemInformationBlockType20_r13__sc_mcch_RepetionPeriod_r13_rf2	= 0,
	SystemInformationBlockType20_r13__sc_mcch_RepetionPeriod_r13_rf4	= 1,
	SystemInformationBlockType20_r13__sc_mcch_RepetionPeriod_r13_rf8	= 2,
	SystemInformationBlockType20_r13__sc_mcch_RepetionPeriod_r13_rf16	= 3,
	SystemInformationBlockType20_r13__sc_mcch_RepetionPeriod_r13_rf32	= 4,
	SystemInformationBlockType20_r13__sc_mcch_RepetionPeriod_r13_rf64	= 5,
	SystemInformationBlockType20_r13__sc_mcch_RepetionPeriod_r13_rf128	= 6,
	SystemInformationBlockType20_r13__sc_mcch_RepetionPeriod_r13_rf256	= 7
} e_SystemInformationBlockType20_r13__sc_mcch_RepetionPeriod_r13;
typedef enum SystemInformationBlockType20_r13__sc_mcch_ModificationPeriod_r13 {
	SystemInformationBlockType20_r13__sc_mcch_ModificationPeriod_r13_rf2	= 0,
	SystemInformationBlockType20_r13__sc_mcch_ModificationPeriod_r13_rf4	= 1,
	SystemInformationBlockType20_r13__sc_mcch_ModificationPeriod_r13_rf8	= 2,
	SystemInformationBlockType20_r13__sc_mcch_ModificationPeriod_r13_rf16	= 3,
	SystemInformationBlockType20_r13__sc_mcch_ModificationPeriod_r13_rf32	= 4,
	SystemInformationBlockType20_r13__sc_mcch_ModificationPeriod_r13_rf64	= 5,
	SystemInformationBlockType20_r13__sc_mcch_ModificationPeriod_r13_rf128	= 6,
	SystemInformationBlockType20_r13__sc_mcch_ModificationPeriod_r13_rf256	= 7,
	SystemInformationBlockType20_r13__sc_mcch_ModificationPeriod_r13_rf512	= 8,
	SystemInformationBlockType20_r13__sc_mcch_ModificationPeriod_r13_rf1024	= 9,
	SystemInformationBlockType20_r13__sc_mcch_ModificationPeriod_r13_r2048	= 10,
	SystemInformationBlockType20_r13__sc_mcch_ModificationPeriod_r13_rf4096	= 11,
	SystemInformationBlockType20_r13__sc_mcch_ModificationPeriod_r13_rf8192	= 12,
	SystemInformationBlockType20_r13__sc_mcch_ModificationPeriod_r13_rf16384	= 13,
	SystemInformationBlockType20_r13__sc_mcch_ModificationPeriod_r13_rf32768	= 14,
	SystemInformationBlockType20_r13__sc_mcch_ModificationPeriod_r13_rf65536	= 15
} e_SystemInformationBlockType20_r13__sc_mcch_ModificationPeriod_r13;

/* SystemInformationBlockType20-r13 */
typedef struct SystemInformationBlockType20_r13 {
	long	 sc_mcch_RepetionPeriod_r13;
	long	 sc_mcch_Offset_r13;
	long	 sc_mcch_FirstSubframe_r13;
	long	*sc_mcch_duration_r13	/* OPTIONAL */;
	long	 sc_mcch_ModificationPeriod_r13;
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType20_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_sc_mcch_RepetionPeriod_r13_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sc_mcch_ModificationPeriod_r13_14;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType20_r13;

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockType20_r13_H_ */
#include <asn_internal.h>
