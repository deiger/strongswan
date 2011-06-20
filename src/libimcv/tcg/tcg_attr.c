/*
 * Copyright (C) 2011 Andreas Steffen, HSR Hochschule fuer Technik Rapperswil
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.  See <http://www.fsf.org/copyleft/gpl.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */

#include "tcg_attr.h"

ENUM_BEGIN(tcg_attr_names,	TCG_PTS_REQ_FUNCT_COMP_EVID,
							TCG_PTS_REQ_FUNCT_COMP_EVID,
	"Request Functional Component Evidence");
ENUM_NEXT(tcg_attr_names,	TCG_PTS_GEN_ATTEST_EVID,
							TCG_PTS_GEN_ATTEST_EVID,
							TCG_PTS_REQ_FUNCT_COMP_EVID,
	"Generate Attestation Evidence");
ENUM_NEXT(tcg_attr_names,	TCG_PTS_SIMPLE_COMP_EVID,
							TCG_PTS_SIMPLE_COMP_EVID,
							TCG_PTS_GEN_ATTEST_EVID,
	"Simple Component Evidence");
ENUM_NEXT(tcg_attr_names,	TCG_PTS_SIMPLE_EVID_FINAL,
							TCG_PTS_SIMPLE_EVID_FINAL,
							TCG_PTS_SIMPLE_COMP_EVID,
	"Simple Evidence Final");
ENUM_NEXT(tcg_attr_names,	TCG_PTS_VERIFICATION_RESULT,
							TCG_PTS_VERIFICATION_RESULT,
							TCG_PTS_SIMPLE_EVID_FINAL,
	"Verification Result");
ENUM_NEXT(tcg_attr_names,	TCG_PTS_INTEG_REPORT,
							TCG_PTS_INTEG_REPORT,
							TCG_PTS_VERIFICATION_RESULT,
	"Integrity Report");
ENUM_NEXT(tcg_attr_names,	TCG_PTS_REQ_FILE_META,
							TCG_PTS_REQ_FILE_META,
							TCG_PTS_INTEG_REPORT,
	"Request File Metadata");
ENUM_NEXT(tcg_attr_names,	TCG_PTS_WIN_FILE_META,
							TCG_PTS_WIN_FILE_META,
							TCG_PTS_REQ_FILE_META,
	"Windows-Style File Metadata");
ENUM_NEXT(tcg_attr_names,	TCG_PTS_UNIX_FILE_META,
							TCG_PTS_UNIX_FILE_META,
							TCG_PTS_WIN_FILE_META,
	"Unix-Style File Metadata");
ENUM_NEXT(tcg_attr_names,	TCG_PTS_REQ_REGISTRY_VALUE,
							TCG_PTS_REQ_REGISTRY_VALUE,
							TCG_PTS_UNIX_FILE_META,
	"Request Registry Value");
ENUM_NEXT(tcg_attr_names,	TCG_PTS_REGISTRY_VALUE,
							TCG_PTS_REGISTRY_VALUE,
							TCG_PTS_REQ_REGISTRY_VALUE,
	"Registry Value");
ENUM_NEXT(tcg_attr_names,	TCG_PTS_REQ_FILE_MEAS,
							TCG_PTS_REQ_FILE_MEAS,
							TCG_PTS_REGISTRY_VALUE,
	"Request File Measurement");
ENUM_NEXT(tcg_attr_names,	TCG_PTS_FILE_MEAS,
							TCG_PTS_FILE_MEAS,
							TCG_PTS_REQ_FILE_MEAS,
	"File Measurement");
ENUM_NEXT(tcg_attr_names,	TCG_PTS_REQ_INTEG_MEAS_LOG,
							TCG_PTS_REQ_INTEG_MEAS_LOG,
							TCG_PTS_FILE_MEAS,
	"Request Integrity Measurement Log");
ENUM_NEXT(tcg_attr_names,	TCG_PTS_INTEG_MEAS_LOG,
							TCG_PTS_INTEG_MEAS_LOG,
							TCG_PTS_REQ_INTEG_MEAS_LOG,
	"Integrity Measurement Log");
ENUM_NEXT(tcg_attr_names,	TCG_PTS_REQ_PROTO_CAPS,
							TCG_PTS_REQ_PROTO_CAPS,
							TCG_PTS_INTEG_MEAS_LOG,
	"Request PTS Protocol Capabilities");
ENUM_NEXT(tcg_attr_names,	TCG_PTS_PROTO_CAPS,
							TCG_PTS_PROTO_CAPS,
							TCG_PTS_REQ_PROTO_CAPS,
	"PTS Protocol Capabilities");
ENUM_NEXT(tcg_attr_names,	TCG_PTS_DH_NONCE_PARAMS_REQ,
							TCG_PTS_DH_NONCE_PARAMS_REQ,
							TCG_PTS_PROTO_CAPS,
	"DH Nonce Parameters Request");
ENUM_NEXT(tcg_attr_names,	TCG_PTS_DH_NONCE_PARAMS_RESP,
							TCG_PTS_DH_NONCE_PARAMS_RESP,
							TCG_PTS_DH_NONCE_PARAMS_REQ,
	"DH Nonce Parameters Response");
ENUM_NEXT(tcg_attr_names,	TCG_PTS_DH_NONCE_FINISH,
							TCG_PTS_DH_NONCE_FINISH,
							TCG_PTS_DH_NONCE_PARAMS_RESP,
	"DH Nonce Finish");
ENUM_NEXT(tcg_attr_names,	TCG_PTS_MEAS_ALGO,
							TCG_PTS_MEAS_ALGO,
							TCG_PTS_DH_NONCE_FINISH,
	"PTS Measurement Algorithm Request");
ENUM_NEXT(tcg_attr_names,	TCG_PTS_MEAS_ALGO_SELECTION,
							TCG_PTS_MEAS_ALGO_SELECTION,
							TCG_PTS_MEAS_ALGO,
	"PTS Measurement Algorithm");
ENUM_NEXT(tcg_attr_names,	TCG_PTS_GET_TPM_VERSION_INFO,
							TCG_PTS_GET_TPM_VERSION_INFO,
							TCG_PTS_MEAS_ALGO_SELECTION,
	"Get TPM Version Information");
ENUM_NEXT(tcg_attr_names,	TCG_PTS_TPM_VERSION_INFO,
							TCG_PTS_TPM_VERSION_INFO,
							TCG_PTS_GET_TPM_VERSION_INFO,
	"TPM Version Information");
ENUM_NEXT(tcg_attr_names,	TCG_PTS_REQ_TEMPL_REF_MANI_SET_META,
							TCG_PTS_REQ_TEMPL_REF_MANI_SET_META,
							TCG_PTS_TPM_VERSION_INFO,
	"Request Template Reference Manifest Set Metadata");
ENUM_NEXT(tcg_attr_names,	TCG_PTS_TEMPL_REF_MANI_SET_META,
							TCG_PTS_TEMPL_REF_MANI_SET_META,
							TCG_PTS_REQ_TEMPL_REF_MANI_SET_META,
	"Template Reference Manifest Set Metadata");
ENUM_NEXT(tcg_attr_names,	TCG_PTS_UPDATE_TEMPL_REF_MANI,
							TCG_PTS_UPDATE_TEMPL_REF_MANI,
							TCG_PTS_TEMPL_REF_MANI_SET_META,
	"Update Template Reference Manifest");
ENUM_NEXT(tcg_attr_names,	TCG_PTS_GET_AIK,
							TCG_PTS_GET_AIK,
							TCG_PTS_UPDATE_TEMPL_REF_MANI,
	"Get Attestation Identity Key");
ENUM_NEXT(tcg_attr_names,	TCG_PTS_AIK,
							TCG_PTS_AIK,
							TCG_PTS_GET_AIK,
	"Attestation Identity Key");
ENUM_END(tcg_attr_names,	TCG_PTS_AIK);
