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

#include "H323Media.h"

static asn_TYPE_member_t asn_MBR_H323Media_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct H323Media, h323MediaParameterType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_H323MediaParameterType,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"h323MediaParameterType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct H323Media, h323MediaParameter),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"h323MediaParameter"
		},
};
static ber_tlv_tag_t asn_DEF_H323Media_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_H323Media_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* h323MediaParameterType at 444 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* h323MediaParameter at 445 */
};
static asn_SEQUENCE_specifics_t asn_SPC_H323Media_specs_1 = {
	sizeof(struct H323Media),
	offsetof(struct H323Media, _asn_ctx),
	asn_MAP_H323Media_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_H323Media = {
	"H323Media",
	"H323Media",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_H323Media_tags_1,
	sizeof(asn_DEF_H323Media_tags_1)
		/sizeof(asn_DEF_H323Media_tags_1[0]), /* 1 */
	asn_DEF_H323Media_tags_1,	/* Same as above */
	sizeof(asn_DEF_H323Media_tags_1)
		/sizeof(asn_DEF_H323Media_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_H323Media_1,
	2,	/* Elements count */
	&asn_SPC_H323Media_specs_1	/* Additional specs */
};

