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

#ifndef	_PartyIdentity_H_
#define	_PartyIdentity_H_


#include <asn_application.h>

/* Including external dependencies */
#include <VisibleString.h>
#include <OCTET_STRING.h>
#include <UTF8String.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <asn_SET_OF.h>
#include <constr_SET_OF.h>
#include "SipHeader.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IpAddress;

/* PartyIdentity */
typedef struct PartyIdentity {
	VisibleString_t	*esn	/* OPTIONAL */;
	VisibleString_t	*imei	/* OPTIONAL */;
	VisibleString_t	*tei	/* OPTIONAL */;
	VisibleString_t	*spid	/* OPTIONAL */;
	VisibleString_t	*imsi	/* OPTIONAL */;
	VisibleString_t	*min	/* OPTIONAL */;
	VisibleString_t	*dn	/* OPTIONAL */;
	VisibleString_t	*userProvided	/* OPTIONAL */;
	VisibleString_t	*appearanceId	/* OPTIONAL */;
	VisibleString_t	*callingCardNum	/* OPTIONAL */;
	struct IpAddress	*ipAddress	/* OPTIONAL */;
	VisibleString_t	*x121	/* OPTIONAL */;
	VisibleString_t	*trunkId	/* OPTIONAL */;
	OCTET_STRING_t	*subaddress	/* OPTIONAL */;
	struct PartyIdentity__genericAddress {
		A_SEQUENCE_OF(VisibleString_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *genericAddress;
	struct PartyIdentity__genericDigits {
		A_SEQUENCE_OF(VisibleString_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *genericDigits;
	struct PartyIdentity__genericName {
		A_SEQUENCE_OF(UTF8String_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *genericName;
	VisibleString_t	*port	/* OPTIONAL */;
	VisibleString_t	*context	/* OPTIONAL */;
	OCTET_STRING_t	*isdnHighLayer	/* OPTIONAL */;
	OCTET_STRING_t	*isdnLowLayer	/* OPTIONAL */;
	struct PartyIdentity__uri {
		A_SET_OF(UTF8String_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *uri;
	struct PartyIdentity__sipHeader {
		A_SET_OF(SipHeader_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sipHeader;
	UTF8String_t	*nai	/* OPTIONAL */;
	VisibleString_t	*mac802	/* OPTIONAL */;
	UTF8String_t	*fqdn	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PartyIdentity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PartyIdentity;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IpAddress.h"

#endif	/* _PartyIdentity_H_ */