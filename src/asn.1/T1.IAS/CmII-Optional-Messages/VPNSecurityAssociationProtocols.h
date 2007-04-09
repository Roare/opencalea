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
 * From ASN.1 module "IAS-LAES-CmII-Optional-Messages-Abstract-Syntax-Module"
 * 	found in "IAS-LAES-CmII-Optional-Messages-Abstract-Syntax-Module.asn"
 * 	`asn1c -fnative-types`
 */

#ifndef	_VPNSecurityAssociationProtocols_H_
#define	_VPNSecurityAssociationProtocols_H_


#include <asn_application.h>

/* Including external dependencies */
#include <UTF8String.h>
#include <asn_SET_OF.h>
#include <constr_SET_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* VPNSecurityAssociationProtocols */
typedef struct VPNSecurityAssociationProtocols {
	A_SET_OF(UTF8String_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VPNSecurityAssociationProtocols_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VPNSecurityAssociationProtocols;

#ifdef __cplusplus
}
#endif

#endif	/* _VPNSecurityAssociationProtocols_H_ */
