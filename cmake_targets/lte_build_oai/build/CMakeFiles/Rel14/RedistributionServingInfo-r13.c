/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "RedistributionServingInfo-r13.h"

static int
redistributionFactorCell_r13_3_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
redistributionFactorCell_r13_3_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
redistributionFactorCell_r13_3_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	redistributionFactorCell_r13_3_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
redistributionFactorCell_r13_3_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	redistributionFactorCell_r13_3_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
redistributionFactorCell_r13_3_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	redistributionFactorCell_r13_3_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
redistributionFactorCell_r13_3_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	redistributionFactorCell_r13_3_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
redistributionFactorCell_r13_3_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	redistributionFactorCell_r13_3_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
redistributionFactorCell_r13_3_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	redistributionFactorCell_r13_3_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
redistributionFactorCell_r13_3_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	redistributionFactorCell_r13_3_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
redistributionFactorCell_r13_3_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	redistributionFactorCell_r13_3_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
redistributionFactorCell_r13_3_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	redistributionFactorCell_r13_3_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
redistributionFactorCell_r13_3_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	redistributionFactorCell_r13_3_inherit_TYPE_descriptor(td1);
	redistributionFactorCell_r13_3_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
redistributionFactorCell_r13_3_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	redistributionFactorCell_r13_3_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
t360_r13_5_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
t360_r13_5_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
t360_r13_5_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	t360_r13_5_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
t360_r13_5_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	t360_r13_5_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
t360_r13_5_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	t360_r13_5_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
t360_r13_5_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	t360_r13_5_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
t360_r13_5_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	t360_r13_5_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
t360_r13_5_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	t360_r13_5_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
t360_r13_5_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	t360_r13_5_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
t360_r13_5_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	t360_r13_5_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
t360_r13_5_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	t360_r13_5_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
t360_r13_5_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	t360_r13_5_inherit_TYPE_descriptor(td1);
	t360_r13_5_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
t360_r13_5_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	t360_r13_5_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
redistrOnPagingOnly_r13_14_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
redistrOnPagingOnly_r13_14_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
redistrOnPagingOnly_r13_14_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	redistrOnPagingOnly_r13_14_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
redistrOnPagingOnly_r13_14_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	redistrOnPagingOnly_r13_14_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
redistrOnPagingOnly_r13_14_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	redistrOnPagingOnly_r13_14_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
redistrOnPagingOnly_r13_14_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	redistrOnPagingOnly_r13_14_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
redistrOnPagingOnly_r13_14_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	redistrOnPagingOnly_r13_14_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
redistrOnPagingOnly_r13_14_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	redistrOnPagingOnly_r13_14_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
redistrOnPagingOnly_r13_14_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	redistrOnPagingOnly_r13_14_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
redistrOnPagingOnly_r13_14_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	redistrOnPagingOnly_r13_14_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
redistrOnPagingOnly_r13_14_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	redistrOnPagingOnly_r13_14_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
redistrOnPagingOnly_r13_14_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	redistrOnPagingOnly_r13_14_inherit_TYPE_descriptor(td1);
	redistrOnPagingOnly_r13_14_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
redistrOnPagingOnly_r13_14_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	redistrOnPagingOnly_r13_14_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
memb_redistributionFactorServing_r13_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 10)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_redistributionFactorCell_r13_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_t360_r13_constr_5 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_redistrOnPagingOnly_r13_constr_14 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_redistributionFactorServing_r13_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  10 }	/* (0..10) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_redistributionFactorCell_r13_value2enum_3[] = {
	{ 0,	4,	"true" }
};
static unsigned int asn_MAP_redistributionFactorCell_r13_enum2value_3[] = {
	0	/* true(0) */
};
static asn_INTEGER_specifics_t asn_SPC_redistributionFactorCell_r13_specs_3 = {
	asn_MAP_redistributionFactorCell_r13_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_redistributionFactorCell_r13_enum2value_3,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_redistributionFactorCell_r13_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_redistributionFactorCell_r13_3 = {
	"redistributionFactorCell-r13",
	"redistributionFactorCell-r13",
	redistributionFactorCell_r13_3_free,
	redistributionFactorCell_r13_3_print,
	redistributionFactorCell_r13_3_constraint,
	redistributionFactorCell_r13_3_decode_ber,
	redistributionFactorCell_r13_3_encode_der,
	redistributionFactorCell_r13_3_decode_xer,
	redistributionFactorCell_r13_3_encode_xer,
	redistributionFactorCell_r13_3_decode_uper,
	redistributionFactorCell_r13_3_encode_uper,
	redistributionFactorCell_r13_3_decode_aper,
	redistributionFactorCell_r13_3_encode_aper,
	redistributionFactorCell_r13_3_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_redistributionFactorCell_r13_tags_3,
	sizeof(asn_DEF_redistributionFactorCell_r13_tags_3)
		/sizeof(asn_DEF_redistributionFactorCell_r13_tags_3[0]) - 1, /* 1 */
	asn_DEF_redistributionFactorCell_r13_tags_3,	/* Same as above */
	sizeof(asn_DEF_redistributionFactorCell_r13_tags_3)
		/sizeof(asn_DEF_redistributionFactorCell_r13_tags_3[0]), /* 2 */
	&asn_PER_type_redistributionFactorCell_r13_constr_3,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_redistributionFactorCell_r13_specs_3	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_t360_r13_value2enum_5[] = {
	{ 0,	4,	"min4" },
	{ 1,	4,	"min8" },
	{ 2,	5,	"min16" },
	{ 3,	5,	"min32" },
	{ 4,	8,	"infinity" },
	{ 5,	6,	"spare3" },
	{ 6,	6,	"spare2" },
	{ 7,	6,	"spare1" }
};
static unsigned int asn_MAP_t360_r13_enum2value_5[] = {
	4,	/* infinity(4) */
	2,	/* min16(2) */
	3,	/* min32(3) */
	0,	/* min4(0) */
	1,	/* min8(1) */
	7,	/* spare1(7) */
	6,	/* spare2(6) */
	5	/* spare3(5) */
};
static asn_INTEGER_specifics_t asn_SPC_t360_r13_specs_5 = {
	asn_MAP_t360_r13_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_t360_r13_enum2value_5,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_t360_r13_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_t360_r13_5 = {
	"t360-r13",
	"t360-r13",
	t360_r13_5_free,
	t360_r13_5_print,
	t360_r13_5_constraint,
	t360_r13_5_decode_ber,
	t360_r13_5_encode_der,
	t360_r13_5_decode_xer,
	t360_r13_5_encode_xer,
	t360_r13_5_decode_uper,
	t360_r13_5_encode_uper,
	t360_r13_5_decode_aper,
	t360_r13_5_encode_aper,
	t360_r13_5_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_t360_r13_tags_5,
	sizeof(asn_DEF_t360_r13_tags_5)
		/sizeof(asn_DEF_t360_r13_tags_5[0]) - 1, /* 1 */
	asn_DEF_t360_r13_tags_5,	/* Same as above */
	sizeof(asn_DEF_t360_r13_tags_5)
		/sizeof(asn_DEF_t360_r13_tags_5[0]), /* 2 */
	&asn_PER_type_t360_r13_constr_5,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_t360_r13_specs_5	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_redistrOnPagingOnly_r13_value2enum_14[] = {
	{ 0,	4,	"true" }
};
static unsigned int asn_MAP_redistrOnPagingOnly_r13_enum2value_14[] = {
	0	/* true(0) */
};
static asn_INTEGER_specifics_t asn_SPC_redistrOnPagingOnly_r13_specs_14 = {
	asn_MAP_redistrOnPagingOnly_r13_value2enum_14,	/* "tag" => N; sorted by tag */
	asn_MAP_redistrOnPagingOnly_r13_enum2value_14,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_redistrOnPagingOnly_r13_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_redistrOnPagingOnly_r13_14 = {
	"redistrOnPagingOnly-r13",
	"redistrOnPagingOnly-r13",
	redistrOnPagingOnly_r13_14_free,
	redistrOnPagingOnly_r13_14_print,
	redistrOnPagingOnly_r13_14_constraint,
	redistrOnPagingOnly_r13_14_decode_ber,
	redistrOnPagingOnly_r13_14_encode_der,
	redistrOnPagingOnly_r13_14_decode_xer,
	redistrOnPagingOnly_r13_14_encode_xer,
	redistrOnPagingOnly_r13_14_decode_uper,
	redistrOnPagingOnly_r13_14_encode_uper,
	redistrOnPagingOnly_r13_14_decode_aper,
	redistrOnPagingOnly_r13_14_encode_aper,
	redistrOnPagingOnly_r13_14_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_redistrOnPagingOnly_r13_tags_14,
	sizeof(asn_DEF_redistrOnPagingOnly_r13_tags_14)
		/sizeof(asn_DEF_redistrOnPagingOnly_r13_tags_14[0]) - 1, /* 1 */
	asn_DEF_redistrOnPagingOnly_r13_tags_14,	/* Same as above */
	sizeof(asn_DEF_redistrOnPagingOnly_r13_tags_14)
		/sizeof(asn_DEF_redistrOnPagingOnly_r13_tags_14[0]), /* 2 */
	&asn_PER_type_redistrOnPagingOnly_r13_constr_14,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_redistrOnPagingOnly_r13_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RedistributionServingInfo_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RedistributionServingInfo_r13, redistributionFactorServing_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_redistributionFactorServing_r13_constraint_1,
		&asn_PER_memb_redistributionFactorServing_r13_constr_2,
		0,
		"redistributionFactorServing-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct RedistributionServingInfo_r13, redistributionFactorCell_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_redistributionFactorCell_r13_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"redistributionFactorCell-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RedistributionServingInfo_r13, t360_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_t360_r13_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"t360-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct RedistributionServingInfo_r13, redistrOnPagingOnly_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_redistrOnPagingOnly_r13_14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"redistrOnPagingOnly-r13"
		},
};
static int asn_MAP_RedistributionServingInfo_r13_oms_1[] = { 1, 3 };
static ber_tlv_tag_t asn_DEF_RedistributionServingInfo_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RedistributionServingInfo_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* redistributionFactorServing-r13 at 2574 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* redistributionFactorCell-r13 at 2575 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* t360-r13 at 2576 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* redistrOnPagingOnly-r13 at 2578 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RedistributionServingInfo_r13_specs_1 = {
	sizeof(struct RedistributionServingInfo_r13),
	offsetof(struct RedistributionServingInfo_r13, _asn_ctx),
	asn_MAP_RedistributionServingInfo_r13_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_RedistributionServingInfo_r13_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RedistributionServingInfo_r13 = {
	"RedistributionServingInfo-r13",
	"RedistributionServingInfo-r13",
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
	asn_DEF_RedistributionServingInfo_r13_tags_1,
	sizeof(asn_DEF_RedistributionServingInfo_r13_tags_1)
		/sizeof(asn_DEF_RedistributionServingInfo_r13_tags_1[0]), /* 1 */
	asn_DEF_RedistributionServingInfo_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_RedistributionServingInfo_r13_tags_1)
		/sizeof(asn_DEF_RedistributionServingInfo_r13_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RedistributionServingInfo_r13_1,
	4,	/* Elements count */
	&asn_SPC_RedistributionServingInfo_r13_specs_1	/* Additional specs */
};
