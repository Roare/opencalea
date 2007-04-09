/*
 * This file is autogenerated by the ASN.1 compiler.
 * Copyright (c) 2003-2007 Lev Walkin <vlm@lionet.info>
 * See http://lionet.info/asn1c
 *
 * Source ASN.1 file is Copyright (c) by US CALEA, included
 * with permission (if included). <<< this depends on whether
 * or not you include the original ASN.1 file into OpenCALEA >>>
 *
 * This file is part of OpenCALEA suite (http://opencalea.org)
 * and is subject to OpenCALEA license (see COPYING file in the
 * root of the opencalea distribution).
 *
 * Copyright (c) 2007 Norman Brandinger <norm@goes.com>
 *
 */

/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "T1S1-LAES-VoP-Abstract-Syntax-Module"
 * 	found in "T1S1-LAES-VoP-Abstract-Syntax-Module.asn"
 * 	`asn1c -fnative-types`
 */

#include <asn_internal.h>

#include "TimeStamp.h"

int
TimeStamp_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_GeneralizedTime.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using GeneralizedTime,
 * so here we adjust the DEF accordingly.
 */
static void
TimeStamp_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_GeneralizedTime.free_struct;
	td->print_struct   = asn_DEF_GeneralizedTime.print_struct;
	td->ber_decoder    = asn_DEF_GeneralizedTime.ber_decoder;
	td->der_encoder    = asn_DEF_GeneralizedTime.der_encoder;
	td->xer_decoder    = asn_DEF_GeneralizedTime.xer_decoder;
	td->xer_encoder    = asn_DEF_GeneralizedTime.xer_encoder;
	td->uper_decoder   = asn_DEF_GeneralizedTime.uper_decoder;
	td->uper_encoder   = asn_DEF_GeneralizedTime.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_GeneralizedTime.per_constraints;
	td->elements       = asn_DEF_GeneralizedTime.elements;
	td->elements_count = asn_DEF_GeneralizedTime.elements_count;
	td->specifics      = asn_DEF_GeneralizedTime.specifics;
}

void
TimeStamp_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	TimeStamp_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
TimeStamp_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	TimeStamp_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
TimeStamp_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	TimeStamp_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
TimeStamp_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	TimeStamp_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
TimeStamp_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	TimeStamp_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
TimeStamp_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	TimeStamp_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static ber_tlv_tag_t asn_DEF_TimeStamp_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (24 << 2))
};
asn_TYPE_descriptor_t asn_DEF_TimeStamp = {
	"TimeStamp",
	"TimeStamp",
	TimeStamp_free,
	TimeStamp_print,
	TimeStamp_constraint,
	TimeStamp_decode_ber,
	TimeStamp_encode_der,
	TimeStamp_decode_xer,
	TimeStamp_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_TimeStamp_tags_1,
	sizeof(asn_DEF_TimeStamp_tags_1)
		/sizeof(asn_DEF_TimeStamp_tags_1[0]), /* 1 */
	asn_DEF_TimeStamp_tags_1,	/* Same as above */
	sizeof(asn_DEF_TimeStamp_tags_1)
		/sizeof(asn_DEF_TimeStamp_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	0	/* No specifics */
};

