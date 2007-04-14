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

#ifndef	_CCCIdentity_H_
#define	_CCCIdentity_H_


#include <asn_application.h>

/* Including external dependencies */
#include <VisibleString.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CCCIdentity_PR {
	CCCIdentity_PR_NOTHING,	/* No components present */
	CCCIdentity_PR_combCCC,
	CCCIdentity_PR_sepCCCpair,
	CCCIdentity_PR_indXmitCCC,
	CCCIdentity_PR_indRecvCCC,
	CCCIdentity_PR_indCCC
} CCCIdentity_PR;

/* CCCIdentity */
typedef struct CCCIdentity {
	CCCIdentity_PR present;
	union {
		VisibleString_t	 combCCC;
		struct CCCIdentity__sepCCCpair {
			VisibleString_t	 sepXmitCCC;
			VisibleString_t	 sepRecvCCC;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *sepCCCpair;
		VisibleString_t	 indXmitCCC;
		VisibleString_t	 indRecvCCC;
		VisibleString_t	 indCCC;
	};
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CCCIdentity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CCCIdentity;

#ifdef __cplusplus
}
#endif

#endif	/* _CCCIdentity_H_ */
