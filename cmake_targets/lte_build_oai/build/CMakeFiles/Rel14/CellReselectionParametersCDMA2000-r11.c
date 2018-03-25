/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "CellReselectionParametersCDMA2000-r11.h"

static int
memb_neighCellList_r11_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 16)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_neighCellList_r11_constr_3 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_neighCellList_r11_constr_3 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_neighCellList_r11_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NeighCellCDMA2000_r11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_neighCellList_r11_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_neighCellList_r11_specs_3 = {
	sizeof(struct CellReselectionParametersCDMA2000_r11__neighCellList_r11),
	offsetof(struct CellReselectionParametersCDMA2000_r11__neighCellList_r11, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_neighCellList_r11_3 = {
	"neighCellList-r11",
	"neighCellList-r11",
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
	asn_DEF_neighCellList_r11_tags_3,
	sizeof(asn_DEF_neighCellList_r11_tags_3)
		/sizeof(asn_DEF_neighCellList_r11_tags_3[0]) - 1, /* 1 */
	asn_DEF_neighCellList_r11_tags_3,	/* Same as above */
	sizeof(asn_DEF_neighCellList_r11_tags_3)
		/sizeof(asn_DEF_neighCellList_r11_tags_3[0]), /* 2 */
	&asn_PER_type_neighCellList_r11_constr_3,
	asn_MBR_neighCellList_r11_3,
	1,	/* Single element */
	&asn_SPC_neighCellList_r11_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_CellReselectionParametersCDMA2000_r11_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellReselectionParametersCDMA2000_r11, bandClassList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BandClassListCDMA2000,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"bandClassList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellReselectionParametersCDMA2000_r11, neighCellList_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_neighCellList_r11_3,
		memb_neighCellList_r11_constraint_1,
		&asn_PER_memb_neighCellList_r11_constr_3,
		0,
		"neighCellList-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellReselectionParametersCDMA2000_r11, t_ReselectionCDMA2000),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_T_Reselection,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"t-ReselectionCDMA2000"
		},
	{ ATF_POINTER, 1, offsetof(struct CellReselectionParametersCDMA2000_r11, t_ReselectionCDMA2000_SF),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SpeedStateScaleFactors,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"t-ReselectionCDMA2000-SF"
		},
};
static int asn_MAP_CellReselectionParametersCDMA2000_r11_oms_1[] = { 3 };
static ber_tlv_tag_t asn_DEF_CellReselectionParametersCDMA2000_r11_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CellReselectionParametersCDMA2000_r11_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bandClassList at 2910 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* neighCellList-r11 at 2911 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* t-ReselectionCDMA2000 at 2912 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* t-ReselectionCDMA2000-SF at 2913 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CellReselectionParametersCDMA2000_r11_specs_1 = {
	sizeof(struct CellReselectionParametersCDMA2000_r11),
	offsetof(struct CellReselectionParametersCDMA2000_r11, _asn_ctx),
	asn_MAP_CellReselectionParametersCDMA2000_r11_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_CellReselectionParametersCDMA2000_r11_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CellReselectionParametersCDMA2000_r11 = {
	"CellReselectionParametersCDMA2000-r11",
	"CellReselectionParametersCDMA2000-r11",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	SEQUENCE_decode_aper,
	SEQUENCE_encode_aper,
	SEQUENCE_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_CellReselectionParametersCDMA2000_r11_tags_1,
	sizeof(asn_DEF_CellReselectionParametersCDMA2000_r11_tags_1)
		/sizeof(asn_DEF_CellReselectionParametersCDMA2000_r11_tags_1[0]), /* 1 */
	asn_DEF_CellReselectionParametersCDMA2000_r11_tags_1,	/* Same as above */
	sizeof(asn_DEF_CellReselectionParametersCDMA2000_r11_tags_1)
		/sizeof(asn_DEF_CellReselectionParametersCDMA2000_r11_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CellReselectionParametersCDMA2000_r11_1,
	4,	/* Elements count */
	&asn_SPC_CellReselectionParametersCDMA2000_r11_specs_1	/* Additional specs */
};

