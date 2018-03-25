/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "SL-CommResourcePoolV2X-r14.h"

static int
sizeSubchannel_r14_5_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
sizeSubchannel_r14_5_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	td->aper_decoder   = asn_DEF_NativeEnumerated.aper_decoder;
	td->aper_encoder   = asn_DEF_NativeEnumerated.aper_encoder;
	td->compare        = asn_DEF_NativeEnumerated.compare;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
sizeSubchannel_r14_5_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	sizeSubchannel_r14_5_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
sizeSubchannel_r14_5_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	sizeSubchannel_r14_5_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
sizeSubchannel_r14_5_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	sizeSubchannel_r14_5_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
sizeSubchannel_r14_5_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	sizeSubchannel_r14_5_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
sizeSubchannel_r14_5_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	sizeSubchannel_r14_5_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
sizeSubchannel_r14_5_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	sizeSubchannel_r14_5_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
sizeSubchannel_r14_5_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	sizeSubchannel_r14_5_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
sizeSubchannel_r14_5_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	sizeSubchannel_r14_5_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
sizeSubchannel_r14_5_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	sizeSubchannel_r14_5_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
sizeSubchannel_r14_5_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	sizeSubchannel_r14_5_inherit_TYPE_descriptor(td1);
	sizeSubchannel_r14_5_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
sizeSubchannel_r14_5_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	sizeSubchannel_r14_5_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
numSubchannel_r14_38_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
numSubchannel_r14_38_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	td->aper_decoder   = asn_DEF_NativeEnumerated.aper_decoder;
	td->aper_encoder   = asn_DEF_NativeEnumerated.aper_encoder;
	td->compare        = asn_DEF_NativeEnumerated.compare;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
numSubchannel_r14_38_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	numSubchannel_r14_38_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
numSubchannel_r14_38_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	numSubchannel_r14_38_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
numSubchannel_r14_38_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	numSubchannel_r14_38_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
numSubchannel_r14_38_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	numSubchannel_r14_38_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
numSubchannel_r14_38_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	numSubchannel_r14_38_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
numSubchannel_r14_38_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	numSubchannel_r14_38_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
numSubchannel_r14_38_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	numSubchannel_r14_38_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
numSubchannel_r14_38_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	numSubchannel_r14_38_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
numSubchannel_r14_38_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	numSubchannel_r14_38_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
numSubchannel_r14_38_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	numSubchannel_r14_38_inherit_TYPE_descriptor(td1);
	numSubchannel_r14_38_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
numSubchannel_r14_38_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	numSubchannel_r14_38_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
memb_syncConfigIndex_r14_constraint_49(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_startRB_Subchannel_r14_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 99)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_startRB_PSCCH_Pool_r14_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 99)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_zoneID_r14_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 7)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_sizeSubchannel_r14_constr_5 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_numSubchannel_r14_constr_38 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_syncConfigIndex_r14_constr_51 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_startRB_Subchannel_r14_constr_47 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  99 }	/* (0..99) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_startRB_PSCCH_Pool_r14_constr_48 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  99 }	/* (0..99) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_zoneID_r14_constr_53 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_sizeSubchannel_r14_value2enum_5[] = {
	{ 0,	2,	"n4" },
	{ 1,	2,	"n5" },
	{ 2,	2,	"n6" },
	{ 3,	2,	"n8" },
	{ 4,	2,	"n9" },
	{ 5,	3,	"n10" },
	{ 6,	3,	"n12" },
	{ 7,	3,	"n15" },
	{ 8,	3,	"n16" },
	{ 9,	3,	"n18" },
	{ 10,	3,	"n20" },
	{ 11,	3,	"n25" },
	{ 12,	3,	"n30" },
	{ 13,	3,	"n48" },
	{ 14,	3,	"n50" },
	{ 15,	3,	"n72" },
	{ 16,	3,	"n75" },
	{ 17,	3,	"n96" },
	{ 18,	4,	"n100" },
	{ 19,	7,	"spare13" },
	{ 20,	7,	"spare12" },
	{ 21,	7,	"spare11" },
	{ 22,	7,	"spare10" },
	{ 23,	6,	"spare9" },
	{ 24,	6,	"spare8" },
	{ 25,	6,	"spare7" },
	{ 26,	6,	"spare6" },
	{ 27,	6,	"spare5" },
	{ 28,	6,	"spare4" },
	{ 29,	6,	"spare3" },
	{ 30,	6,	"spare2" },
	{ 31,	6,	"spare1" }
};
static unsigned int asn_MAP_sizeSubchannel_r14_enum2value_5[] = {
	5,	/* n10(5) */
	18,	/* n100(18) */
	6,	/* n12(6) */
	7,	/* n15(7) */
	8,	/* n16(8) */
	9,	/* n18(9) */
	10,	/* n20(10) */
	11,	/* n25(11) */
	12,	/* n30(12) */
	0,	/* n4(0) */
	13,	/* n48(13) */
	1,	/* n5(1) */
	14,	/* n50(14) */
	2,	/* n6(2) */
	15,	/* n72(15) */
	16,	/* n75(16) */
	3,	/* n8(3) */
	4,	/* n9(4) */
	17,	/* n96(17) */
	31,	/* spare1(31) */
	22,	/* spare10(22) */
	21,	/* spare11(21) */
	20,	/* spare12(20) */
	19,	/* spare13(19) */
	30,	/* spare2(30) */
	29,	/* spare3(29) */
	28,	/* spare4(28) */
	27,	/* spare5(27) */
	26,	/* spare6(26) */
	25,	/* spare7(25) */
	24,	/* spare8(24) */
	23	/* spare9(23) */
};
static asn_INTEGER_specifics_t asn_SPC_sizeSubchannel_r14_specs_5 = {
	asn_MAP_sizeSubchannel_r14_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_sizeSubchannel_r14_enum2value_5,	/* N => "tag"; sorted by N */
	32,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_sizeSubchannel_r14_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sizeSubchannel_r14_5 = {
	"sizeSubchannel-r14",
	"sizeSubchannel-r14",
	sizeSubchannel_r14_5_free,
	sizeSubchannel_r14_5_print,
	sizeSubchannel_r14_5_constraint,
	sizeSubchannel_r14_5_decode_ber,
	sizeSubchannel_r14_5_encode_der,
	sizeSubchannel_r14_5_decode_xer,
	sizeSubchannel_r14_5_encode_xer,
	sizeSubchannel_r14_5_decode_uper,
	sizeSubchannel_r14_5_encode_uper,
	sizeSubchannel_r14_5_decode_aper,
	sizeSubchannel_r14_5_encode_aper,
	sizeSubchannel_r14_5_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_sizeSubchannel_r14_tags_5,
	sizeof(asn_DEF_sizeSubchannel_r14_tags_5)
		/sizeof(asn_DEF_sizeSubchannel_r14_tags_5[0]) - 1, /* 1 */
	asn_DEF_sizeSubchannel_r14_tags_5,	/* Same as above */
	sizeof(asn_DEF_sizeSubchannel_r14_tags_5)
		/sizeof(asn_DEF_sizeSubchannel_r14_tags_5[0]), /* 2 */
	&asn_PER_type_sizeSubchannel_r14_constr_5,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sizeSubchannel_r14_specs_5	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_numSubchannel_r14_value2enum_38[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n3" },
	{ 2,	2,	"n5" },
	{ 3,	3,	"n10" },
	{ 4,	3,	"n15" },
	{ 5,	3,	"n20" },
	{ 6,	6,	"spare2" },
	{ 7,	6,	"spare1" }
};
static unsigned int asn_MAP_numSubchannel_r14_enum2value_38[] = {
	0,	/* n1(0) */
	3,	/* n10(3) */
	4,	/* n15(4) */
	5,	/* n20(5) */
	1,	/* n3(1) */
	2,	/* n5(2) */
	7,	/* spare1(7) */
	6	/* spare2(6) */
};
static asn_INTEGER_specifics_t asn_SPC_numSubchannel_r14_specs_38 = {
	asn_MAP_numSubchannel_r14_value2enum_38,	/* "tag" => N; sorted by tag */
	asn_MAP_numSubchannel_r14_enum2value_38,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_numSubchannel_r14_tags_38[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_numSubchannel_r14_38 = {
	"numSubchannel-r14",
	"numSubchannel-r14",
	numSubchannel_r14_38_free,
	numSubchannel_r14_38_print,
	numSubchannel_r14_38_constraint,
	numSubchannel_r14_38_decode_ber,
	numSubchannel_r14_38_encode_der,
	numSubchannel_r14_38_decode_xer,
	numSubchannel_r14_38_encode_xer,
	numSubchannel_r14_38_decode_uper,
	numSubchannel_r14_38_encode_uper,
	numSubchannel_r14_38_decode_aper,
	numSubchannel_r14_38_encode_aper,
	numSubchannel_r14_38_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_numSubchannel_r14_tags_38,
	sizeof(asn_DEF_numSubchannel_r14_tags_38)
		/sizeof(asn_DEF_numSubchannel_r14_tags_38[0]) - 1, /* 1 */
	asn_DEF_numSubchannel_r14_tags_38,	/* Same as above */
	sizeof(asn_DEF_numSubchannel_r14_tags_38)
		/sizeof(asn_DEF_numSubchannel_r14_tags_38[0]), /* 2 */
	&asn_PER_type_numSubchannel_r14_constr_38,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_numSubchannel_r14_specs_38	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_rxParametersNCell_r14_49[] = {
	{ ATF_POINTER, 1, offsetof(struct SL_CommResourcePoolV2X_r14__rxParametersNCell_r14, tdd_Config_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TDD_Config,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd-Config-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_CommResourcePoolV2X_r14__rxParametersNCell_r14, syncConfigIndex_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_syncConfigIndex_r14_constraint_49,
		&asn_PER_memb_syncConfigIndex_r14_constr_51,
		0,
		"syncConfigIndex-r14"
		},
};
static int asn_MAP_rxParametersNCell_r14_oms_49[] = { 0 };
static ber_tlv_tag_t asn_DEF_rxParametersNCell_r14_tags_49[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_rxParametersNCell_r14_tag2el_49[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tdd-Config-r14 at 9102 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* syncConfigIndex-r14 at 9103 */
};
static asn_SEQUENCE_specifics_t asn_SPC_rxParametersNCell_r14_specs_49 = {
	sizeof(struct SL_CommResourcePoolV2X_r14__rxParametersNCell_r14),
	offsetof(struct SL_CommResourcePoolV2X_r14__rxParametersNCell_r14, _asn_ctx),
	asn_MAP_rxParametersNCell_r14_tag2el_49,
	2,	/* Count of tags in the map */
	asn_MAP_rxParametersNCell_r14_oms_49,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rxParametersNCell_r14_49 = {
	"rxParametersNCell-r14",
	"rxParametersNCell-r14",
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
	asn_DEF_rxParametersNCell_r14_tags_49,
	sizeof(asn_DEF_rxParametersNCell_r14_tags_49)
		/sizeof(asn_DEF_rxParametersNCell_r14_tags_49[0]) - 1, /* 1 */
	asn_DEF_rxParametersNCell_r14_tags_49,	/* Same as above */
	sizeof(asn_DEF_rxParametersNCell_r14_tags_49)
		/sizeof(asn_DEF_rxParametersNCell_r14_tags_49[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_rxParametersNCell_r14_49,
	2,	/* Elements count */
	&asn_SPC_rxParametersNCell_r14_specs_49	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SL_CommResourcePoolV2X_r14_1[] = {
	{ ATF_POINTER, 1, offsetof(struct SL_CommResourcePoolV2X_r14, sl_OffsetIndicator_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SL_OffsetIndicator_r12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sl-OffsetIndicator-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_CommResourcePoolV2X_r14, sl_Subframe_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SubframeBitmapSL_r14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sl-Subframe-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_CommResourcePoolV2X_r14, adjacencyPSCCH_PSSCH_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"adjacencyPSCCH-PSSCH-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_CommResourcePoolV2X_r14, sizeSubchannel_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sizeSubchannel_r14_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sizeSubchannel-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_CommResourcePoolV2X_r14, numSubchannel_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_numSubchannel_r14_38,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"numSubchannel-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_CommResourcePoolV2X_r14, startRB_Subchannel_r14),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_startRB_Subchannel_r14_constraint_1,
		&asn_PER_memb_startRB_Subchannel_r14_constr_47,
		0,
		"startRB-Subchannel-r14"
		},
	{ ATF_POINTER, 4, offsetof(struct SL_CommResourcePoolV2X_r14, startRB_PSCCH_Pool_r14),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_startRB_PSCCH_Pool_r14_constraint_1,
		&asn_PER_memb_startRB_PSCCH_Pool_r14_constr_48,
		0,
		"startRB-PSCCH-Pool-r14"
		},
	{ ATF_POINTER, 3, offsetof(struct SL_CommResourcePoolV2X_r14, rxParametersNCell_r14),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_rxParametersNCell_r14_49,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rxParametersNCell-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct SL_CommResourcePoolV2X_r14, dataTxParameters_r14),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_TxParameters_r12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dataTxParameters-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_CommResourcePoolV2X_r14, zoneID_r14),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_zoneID_r14_constraint_1,
		&asn_PER_memb_zoneID_r14_constr_53,
		0,
		"zoneID-r14"
		},
};
static int asn_MAP_SL_CommResourcePoolV2X_r14_oms_1[] = { 0, 6, 7, 8, 9 };
static ber_tlv_tag_t asn_DEF_SL_CommResourcePoolV2X_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SL_CommResourcePoolV2X_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sl-OffsetIndicator-r14 at 9090 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sl-Subframe-r14 at 9091 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* adjacencyPSCCH-PSSCH-r14 at 9092 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sizeSubchannel-r14 at 9094 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* numSubchannel-r14 at 9098 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* startRB-Subchannel-r14 at 9099 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* startRB-PSCCH-Pool-r14 at 9100 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* rxParametersNCell-r14 at 9102 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* dataTxParameters-r14 at 9105 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* zoneID-r14 at 9106 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SL_CommResourcePoolV2X_r14_specs_1 = {
	sizeof(struct SL_CommResourcePoolV2X_r14),
	offsetof(struct SL_CommResourcePoolV2X_r14, _asn_ctx),
	asn_MAP_SL_CommResourcePoolV2X_r14_tag2el_1,
	10,	/* Count of tags in the map */
	asn_MAP_SL_CommResourcePoolV2X_r14_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	9,	/* Start extensions */
	11	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SL_CommResourcePoolV2X_r14 = {
	"SL-CommResourcePoolV2X-r14",
	"SL-CommResourcePoolV2X-r14",
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
	asn_DEF_SL_CommResourcePoolV2X_r14_tags_1,
	sizeof(asn_DEF_SL_CommResourcePoolV2X_r14_tags_1)
		/sizeof(asn_DEF_SL_CommResourcePoolV2X_r14_tags_1[0]), /* 1 */
	asn_DEF_SL_CommResourcePoolV2X_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_CommResourcePoolV2X_r14_tags_1)
		/sizeof(asn_DEF_SL_CommResourcePoolV2X_r14_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SL_CommResourcePoolV2X_r14_1,
	10,	/* Elements count */
	&asn_SPC_SL_CommResourcePoolV2X_r14_specs_1	/* Additional specs */
};
