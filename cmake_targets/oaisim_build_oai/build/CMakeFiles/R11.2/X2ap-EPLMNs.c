/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/liu/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#include "X2ap-EPLMNs.h"

static asn_per_constraints_t asn_PER_type_X2ap_EPLMNs_constr_1 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  15 }	/* (SIZE(1..15)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_X2ap_EPLMNs_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_X2ap_PLMN_Identity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_X2ap_EPLMNs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_X2ap_EPLMNs_specs_1 = {
	sizeof(struct X2ap_EPLMNs),
	offsetof(struct X2ap_EPLMNs, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_X2ap_EPLMNs = {
	"X2ap-EPLMNs",
	"X2ap-EPLMNs",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	SEQUENCE_OF_decode_aper,
	SEQUENCE_OF_encode_aper,
	SEQUENCE_OF_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_X2ap_EPLMNs_tags_1,
	sizeof(asn_DEF_X2ap_EPLMNs_tags_1)
		/sizeof(asn_DEF_X2ap_EPLMNs_tags_1[0]), /* 1 */
	asn_DEF_X2ap_EPLMNs_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2ap_EPLMNs_tags_1)
		/sizeof(asn_DEF_X2ap_EPLMNs_tags_1[0]), /* 1 */
	&asn_PER_type_X2ap_EPLMNs_constr_1,
	asn_MBR_X2ap_EPLMNs_1,
	1,	/* Single element */
	&asn_SPC_X2ap_EPLMNs_specs_1	/* Additional specs */
};

