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

#ifndef	_EnhancedProtocol_H_
#define	_EnhancedProtocol_H_


#include <asn_application.h>

/* Including external dependencies */
#include "T1S1-LAES-VoP-Abstract-Syntax-Module-OID.h"
#include "LaesMessage.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* EnhancedProtocol */
typedef struct EnhancedProtocol {
	T1S1_LAES_VoP_Abstract_Syntax_Module_OID_t	 protocolIdentifier;
	LaesMessage_t	 laesMessage;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EnhancedProtocol_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EnhancedProtocol;

#ifdef __cplusplus
}
#endif

#endif	/* _EnhancedProtocol_H_ */
