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

#ifndef	_Connection_H_
#define	_Connection_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CaseIdentity.h"
#include "IAPSystemIdentity.h"
#include "TimeStamp.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <asn_SET_OF.h>
#include <constr_SET_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MediaInformation;
struct ProtocolSpecificParameters;
struct CallIdentity;
struct PartyIdentity;
struct EncapsulatedSignalingMessage;

/* Connection */
typedef struct Connection {
	CaseIdentity_t	 caseId;
	IAPSystemIdentity_t	*iAPSystemId	/* OPTIONAL */;
	TimeStamp_t	 timestamp;
	struct Connection__callId {
		A_SEQUENCE_OF(struct CallIdentity) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} callId;
	struct Connection__connectedParties {
		A_SEQUENCE_OF(struct PartyIdentity) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *connectedParties;
	struct Connection__newParties {
		A_SEQUENCE_OF(struct PartyIdentity) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *newParties;
	struct MediaInformation	*connectedMedia	/* OPTIONAL */;
	struct ProtocolSpecificParameters	*protocolSpecificParameters	/* OPTIONAL */;
	struct Connection__signalingMsg {
		A_SET_OF(struct EncapsulatedSignalingMessage) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *signalingMsg;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Connection_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Connection;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MediaInformation.h"
#include "ProtocolSpecificParameters.h"
#include "CallIdentity.h"
#include "PartyIdentity.h"
#include "EncapsulatedSignalingMessage.h"

#endif	/* _Connection_H_ */