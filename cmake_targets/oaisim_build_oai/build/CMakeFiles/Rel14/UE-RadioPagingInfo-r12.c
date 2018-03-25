/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "UE-RadioPagingInfo-r12.h"

static int
ue_CategoryDL_v1310_5_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
ue_CategoryDL_v1310_5_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
ue_CategoryDL_v1310_5_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	ue_CategoryDL_v1310_5_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
ue_CategoryDL_v1310_5_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	ue_CategoryDL_v1310_5_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
ue_CategoryDL_v1310_5_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	ue_CategoryDL_v1310_5_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
ue_CategoryDL_v1310_5_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	ue_CategoryDL_v1310_5_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
ue_CategoryDL_v1310_5_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	ue_CategoryDL_v1310_5_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
ue_CategoryDL_v1310_5_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	ue_CategoryDL_v1310_5_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
ue_CategoryDL_v1310_5_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	ue_CategoryDL_v1310_5_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
ue_CategoryDL_v1310_5_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	ue_CategoryDL_v1310_5_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
ue_CategoryDL_v1310_5_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	ue_CategoryDL_v1310_5_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
ue_CategoryDL_v1310_5_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	ue_CategoryDL_v1310_5_inherit_TYPE_descriptor(td1);
	ue_CategoryDL_v1310_5_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
ue_CategoryDL_v1310_5_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	ue_CategoryDL_v1310_5_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
ce_ModeA_r13_7_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
ce_ModeA_r13_7_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
ce_ModeA_r13_7_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	ce_ModeA_r13_7_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
ce_ModeA_r13_7_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	ce_ModeA_r13_7_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
ce_ModeA_r13_7_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	ce_ModeA_r13_7_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
ce_ModeA_r13_7_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	ce_ModeA_r13_7_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
ce_ModeA_r13_7_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	ce_ModeA_r13_7_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
ce_ModeA_r13_7_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	ce_ModeA_r13_7_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
ce_ModeA_r13_7_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	ce_ModeA_r13_7_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
ce_ModeA_r13_7_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	ce_ModeA_r13_7_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
ce_ModeA_r13_7_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	ce_ModeA_r13_7_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
ce_ModeA_r13_7_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	ce_ModeA_r13_7_inherit_TYPE_descriptor(td1);
	ce_ModeA_r13_7_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
ce_ModeA_r13_7_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	ce_ModeA_r13_7_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
ce_ModeB_r13_9_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
ce_ModeB_r13_9_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
ce_ModeB_r13_9_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	ce_ModeB_r13_9_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
ce_ModeB_r13_9_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	ce_ModeB_r13_9_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
ce_ModeB_r13_9_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	ce_ModeB_r13_9_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
ce_ModeB_r13_9_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	ce_ModeB_r13_9_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
ce_ModeB_r13_9_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	ce_ModeB_r13_9_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
ce_ModeB_r13_9_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	ce_ModeB_r13_9_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
ce_ModeB_r13_9_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	ce_ModeB_r13_9_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
ce_ModeB_r13_9_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	ce_ModeB_r13_9_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
ce_ModeB_r13_9_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	ce_ModeB_r13_9_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
ce_ModeB_r13_9_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	ce_ModeB_r13_9_inherit_TYPE_descriptor(td1);
	ce_ModeB_r13_9_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
ce_ModeB_r13_9_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	ce_ModeB_r13_9_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
memb_ue_Category_v1250_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value == 0)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_ue_CategoryDL_v1310_constr_5 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ce_ModeA_r13_constr_7 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ce_ModeB_r13_constr_9 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ue_Category_v1250_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_ue_CategoryDL_v1310_value2enum_5[] = {
	{ 0,	2,	"m1" }
};
static unsigned int asn_MAP_ue_CategoryDL_v1310_enum2value_5[] = {
	0	/* m1(0) */
};
static asn_INTEGER_specifics_t asn_SPC_ue_CategoryDL_v1310_specs_5 = {
	asn_MAP_ue_CategoryDL_v1310_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_ue_CategoryDL_v1310_enum2value_5,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_ue_CategoryDL_v1310_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ue_CategoryDL_v1310_5 = {
	"ue-CategoryDL-v1310",
	"ue-CategoryDL-v1310",
	ue_CategoryDL_v1310_5_free,
	ue_CategoryDL_v1310_5_print,
	ue_CategoryDL_v1310_5_constraint,
	ue_CategoryDL_v1310_5_decode_ber,
	ue_CategoryDL_v1310_5_encode_der,
	ue_CategoryDL_v1310_5_decode_xer,
	ue_CategoryDL_v1310_5_encode_xer,
	ue_CategoryDL_v1310_5_decode_uper,
	ue_CategoryDL_v1310_5_encode_uper,
	ue_CategoryDL_v1310_5_decode_aper,
	ue_CategoryDL_v1310_5_encode_aper,
	ue_CategoryDL_v1310_5_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ue_CategoryDL_v1310_tags_5,
	sizeof(asn_DEF_ue_CategoryDL_v1310_tags_5)
		/sizeof(asn_DEF_ue_CategoryDL_v1310_tags_5[0]) - 1, /* 1 */
	asn_DEF_ue_CategoryDL_v1310_tags_5,	/* Same as above */
	sizeof(asn_DEF_ue_CategoryDL_v1310_tags_5)
		/sizeof(asn_DEF_ue_CategoryDL_v1310_tags_5[0]), /* 2 */
	&asn_PER_type_ue_CategoryDL_v1310_constr_5,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ue_CategoryDL_v1310_specs_5	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_ce_ModeA_r13_value2enum_7[] = {
	{ 0,	4,	"true" }
};
static unsigned int asn_MAP_ce_ModeA_r13_enum2value_7[] = {
	0	/* true(0) */
};
static asn_INTEGER_specifics_t asn_SPC_ce_ModeA_r13_specs_7 = {
	asn_MAP_ce_ModeA_r13_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_ce_ModeA_r13_enum2value_7,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_ce_ModeA_r13_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ce_ModeA_r13_7 = {
	"ce-ModeA-r13",
	"ce-ModeA-r13",
	ce_ModeA_r13_7_free,
	ce_ModeA_r13_7_print,
	ce_ModeA_r13_7_constraint,
	ce_ModeA_r13_7_decode_ber,
	ce_ModeA_r13_7_encode_der,
	ce_ModeA_r13_7_decode_xer,
	ce_ModeA_r13_7_encode_xer,
	ce_ModeA_r13_7_decode_uper,
	ce_ModeA_r13_7_encode_uper,
	ce_ModeA_r13_7_decode_aper,
	ce_ModeA_r13_7_encode_aper,
	ce_ModeA_r13_7_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ce_ModeA_r13_tags_7,
	sizeof(asn_DEF_ce_ModeA_r13_tags_7)
		/sizeof(asn_DEF_ce_ModeA_r13_tags_7[0]) - 1, /* 1 */
	asn_DEF_ce_ModeA_r13_tags_7,	/* Same as above */
	sizeof(asn_DEF_ce_ModeA_r13_tags_7)
		/sizeof(asn_DEF_ce_ModeA_r13_tags_7[0]), /* 2 */
	&asn_PER_type_ce_ModeA_r13_constr_7,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ce_ModeA_r13_specs_7	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_ce_ModeB_r13_value2enum_9[] = {
	{ 0,	4,	"true" }
};
static unsigned int asn_MAP_ce_ModeB_r13_enum2value_9[] = {
	0	/* true(0) */
};
static asn_INTEGER_specifics_t asn_SPC_ce_ModeB_r13_specs_9 = {
	asn_MAP_ce_ModeB_r13_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_ce_ModeB_r13_enum2value_9,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_ce_ModeB_r13_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ce_ModeB_r13_9 = {
	"ce-ModeB-r13",
	"ce-ModeB-r13",
	ce_ModeB_r13_9_free,
	ce_ModeB_r13_9_print,
	ce_ModeB_r13_9_constraint,
	ce_ModeB_r13_9_decode_ber,
	ce_ModeB_r13_9_encode_der,
	ce_ModeB_r13_9_decode_xer,
	ce_ModeB_r13_9_encode_xer,
	ce_ModeB_r13_9_decode_uper,
	ce_ModeB_r13_9_encode_uper,
	ce_ModeB_r13_9_decode_aper,
	ce_ModeB_r13_9_encode_aper,
	ce_ModeB_r13_9_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ce_ModeB_r13_tags_9,
	sizeof(asn_DEF_ce_ModeB_r13_tags_9)
		/sizeof(asn_DEF_ce_ModeB_r13_tags_9[0]) - 1, /* 1 */
	asn_DEF_ce_ModeB_r13_tags_9,	/* Same as above */
	sizeof(asn_DEF_ce_ModeB_r13_tags_9)
		/sizeof(asn_DEF_ce_ModeB_r13_tags_9[0]), /* 2 */
	&asn_PER_type_ce_ModeB_r13_constr_9,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ce_ModeB_r13_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_4[] = {
	{ ATF_POINTER, 3, offsetof(struct UE_RadioPagingInfo_r12__ext1, ue_CategoryDL_v1310),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ue_CategoryDL_v1310_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ue-CategoryDL-v1310"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_RadioPagingInfo_r12__ext1, ce_ModeA_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ce_ModeA_r13_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ce-ModeA-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_RadioPagingInfo_r12__ext1, ce_ModeB_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ce_ModeB_r13_9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ce-ModeB-r13"
		},
};
static int asn_MAP_ext1_oms_4[] = { 0, 1, 2 };
static ber_tlv_tag_t asn_DEF_ext1_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-CategoryDL-v1310 at 8734 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ce-ModeA-r13 at 8735 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ce-ModeB-r13 at 8736 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_4 = {
	sizeof(struct UE_RadioPagingInfo_r12__ext1),
	offsetof(struct UE_RadioPagingInfo_r12__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_4,
	3,	/* Count of tags in the map */
	asn_MAP_ext1_oms_4,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_4 = {
	"ext1",
	"ext1",
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
	asn_DEF_ext1_tags_4,
	sizeof(asn_DEF_ext1_tags_4)
		/sizeof(asn_DEF_ext1_tags_4[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_4,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_4)
		/sizeof(asn_DEF_ext1_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ext1_4,
	3,	/* Elements count */
	&asn_SPC_ext1_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_UE_RadioPagingInfo_r12_1[] = {
	{ ATF_POINTER, 2, offsetof(struct UE_RadioPagingInfo_r12, ue_Category_v1250),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_ue_Category_v1250_constraint_1,
		&asn_PER_memb_ue_Category_v1250_constr_2,
		0,
		"ue-Category-v1250"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_RadioPagingInfo_r12, ext1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ext1_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ext1"
		},
};
static int asn_MAP_UE_RadioPagingInfo_r12_oms_1[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_UE_RadioPagingInfo_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_UE_RadioPagingInfo_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-Category-v1250 at 8732 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ext1 at 8734 */
};
static asn_SEQUENCE_specifics_t asn_SPC_UE_RadioPagingInfo_r12_specs_1 = {
	sizeof(struct UE_RadioPagingInfo_r12),
	offsetof(struct UE_RadioPagingInfo_r12, _asn_ctx),
	asn_MAP_UE_RadioPagingInfo_r12_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_UE_RadioPagingInfo_r12_oms_1,	/* Optional members */
	1, 1,	/* Root/Additions */
	0,	/* Start extensions */
	3	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UE_RadioPagingInfo_r12 = {
	"UE-RadioPagingInfo-r12",
	"UE-RadioPagingInfo-r12",
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
	asn_DEF_UE_RadioPagingInfo_r12_tags_1,
	sizeof(asn_DEF_UE_RadioPagingInfo_r12_tags_1)
		/sizeof(asn_DEF_UE_RadioPagingInfo_r12_tags_1[0]), /* 1 */
	asn_DEF_UE_RadioPagingInfo_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_RadioPagingInfo_r12_tags_1)
		/sizeof(asn_DEF_UE_RadioPagingInfo_r12_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UE_RadioPagingInfo_r12_1,
	2,	/* Elements count */
	&asn_SPC_UE_RadioPagingInfo_r12_specs_1	/* Additional specs */
};
