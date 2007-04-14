/*
 * Copyright (c) 2007 Norman Brandinger <norm@goes.com>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "IAS-LAES-CmII-Abstract-Syntax-Module"
 * 	found in "IAS-LAES-CmII-Abstract-Syntax-Module.asn"
 * 	`asn1c -funnamed-unions -findirect-choice -fbless-SIZE -fcompound-names -fnative-types`
 */

#include <asn_internal.h>

#include "IAS-LAES-CmII-Abstract-Syntax-Module-OID.h"

int
IAS_LAES_CmII_Abstract_Syntax_Module_OID_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_OBJECT_IDENTIFIER.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using OBJECT_IDENTIFIER,
 * so here we adjust the DEF accordingly.
 */
static void
IAS_LAES_CmII_Abstract_Syntax_Module_OID_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_OBJECT_IDENTIFIER.free_struct;
	td->print_struct   = asn_DEF_OBJECT_IDENTIFIER.print_struct;
	td->ber_decoder    = asn_DEF_OBJECT_IDENTIFIER.ber_decoder;
	td->der_encoder    = asn_DEF_OBJECT_IDENTIFIER.der_encoder;
	td->xer_decoder    = asn_DEF_OBJECT_IDENTIFIER.xer_decoder;
	td->xer_encoder    = asn_DEF_OBJECT_IDENTIFIER.xer_encoder;
	td->uper_decoder   = asn_DEF_OBJECT_IDENTIFIER.uper_decoder;
	td->uper_encoder   = asn_DEF_OBJECT_IDENTIFIER.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_OBJECT_IDENTIFIER.per_constraints;
	td->elements       = asn_DEF_OBJECT_IDENTIFIER.elements;
	td->elements_count = asn_DEF_OBJECT_IDENTIFIER.elements_count;
	td->specifics      = asn_DEF_OBJECT_IDENTIFIER.specifics;
}

void
IAS_LAES_CmII_Abstract_Syntax_Module_OID_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	IAS_LAES_CmII_Abstract_Syntax_Module_OID_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
IAS_LAES_CmII_Abstract_Syntax_Module_OID_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	IAS_LAES_CmII_Abstract_Syntax_Module_OID_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
IAS_LAES_CmII_Abstract_Syntax_Module_OID_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	IAS_LAES_CmII_Abstract_Syntax_Module_OID_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
IAS_LAES_CmII_Abstract_Syntax_Module_OID_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	IAS_LAES_CmII_Abstract_Syntax_Module_OID_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
IAS_LAES_CmII_Abstract_Syntax_Module_OID_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	IAS_LAES_CmII_Abstract_Syntax_Module_OID_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
IAS_LAES_CmII_Abstract_Syntax_Module_OID_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	IAS_LAES_CmII_Abstract_Syntax_Module_OID_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static ber_tlv_tag_t asn_DEF_IAS_LAES_CmII_Abstract_Syntax_Module_OID_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (6 << 2))
};
asn_TYPE_descriptor_t asn_DEF_IAS_LAES_CmII_Abstract_Syntax_Module_OID = {
	"IAS-LAES-CmII-Abstract-Syntax-Module-OID",
	"IAS-LAES-CmII-Abstract-Syntax-Module-OID",
	IAS_LAES_CmII_Abstract_Syntax_Module_OID_free,
	IAS_LAES_CmII_Abstract_Syntax_Module_OID_print,
	IAS_LAES_CmII_Abstract_Syntax_Module_OID_constraint,
	IAS_LAES_CmII_Abstract_Syntax_Module_OID_decode_ber,
	IAS_LAES_CmII_Abstract_Syntax_Module_OID_encode_der,
	IAS_LAES_CmII_Abstract_Syntax_Module_OID_decode_xer,
	IAS_LAES_CmII_Abstract_Syntax_Module_OID_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_IAS_LAES_CmII_Abstract_Syntax_Module_OID_tags_1,
	sizeof(asn_DEF_IAS_LAES_CmII_Abstract_Syntax_Module_OID_tags_1)
		/sizeof(asn_DEF_IAS_LAES_CmII_Abstract_Syntax_Module_OID_tags_1[0]), /* 1 */
	asn_DEF_IAS_LAES_CmII_Abstract_Syntax_Module_OID_tags_1,	/* Same as above */
	sizeof(asn_DEF_IAS_LAES_CmII_Abstract_Syntax_Module_OID_tags_1)
		/sizeof(asn_DEF_IAS_LAES_CmII_Abstract_Syntax_Module_OID_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	0	/* No specifics */
};

