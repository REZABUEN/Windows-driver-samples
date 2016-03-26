//---------------------------------------------------------------------------
//
// Copyright (c) 2014 Realtek Semiconductor, Inc. All rights reserved.
// 
//---------------------------------------------------------------------------
// Description:
//		Contains WPS definitions specified in the spec.
//

#ifndef __INC_WPS_DEF_H
#define __INC_WPS_DEF_H

typedef enum _WPS_ATTRIBUTE {
	ATTR_AP_CHANNEL = 0x1001,
	ATTR_ASSOC_STATE = 0x1002,
	ATTR_AUTH_TYPE = 0x1003,
	ATTR_AUTH_TYPE_FLAGS = 0x1004,
	ATTR_AUTHENTICATOR = 0x1005,
	ATTR_CONFIG_METHODS = 0x1008,
	ATTR_CONFIG_ERROR = 0x1009,
	ATTR_CONFIRM_URL4 = 0x100a,
	ATTR_CONFIRM_URL6 = 0x100b,
	ATTR_CONN_TYPE = 0x100c,
	ATTR_CONN_TYPE_FLAGS = 0x100d,
	ATTR_CRED = 0x100e,
	ATTR_ENCR_TYPE = 0x100f,
	ATTR_ENCR_TYPE_FLAGS = 0x1010,
	ATTR_DEV_NAME = 0x1011,
	ATTR_DEV_PASSWORD_ID = 0x1012,
	ATTR_E_HASH1 = 0x1014,
	ATTR_E_HASH2 = 0x1015,
	ATTR_E_SNONCE1 = 0x1016,
	ATTR_E_SNONCE2 = 0x1017,
	ATTR_ENCR_SETTINGS = 0x1018,
	ATTR_ENROLLEE_NONCE = 0x101a,
	ATTR_FEATURE_ID = 0x101b,
	ATTR_IDENTITY = 0x101c,
	ATTR_IDENTITY_PROOF = 0x101d,
	ATTR_KEY_WRAP_AUTH = 0x101e,
	ATTR_KEY_ID = 0x101f,
	ATTR_MAC_ADDR = 0x1020,
	ATTR_MANUFACTURER = 0x1021,
	ATTR_MSG_TYPE = 0x1022,
	ATTR_MODEL_NAME = 0x1023,
	ATTR_MODEL_NUMBER = 0x1024,
	ATTR_NETWORK_INDEX = 0x1026,
	ATTR_NETWORK_KEY = 0x1027,
	ATTR_NETWORK_KEY_INDEX = 0x1028,
	ATTR_NEW_DEVICE_NAME = 0x1029,
	ATTR_NEW_PASSWORD = 0x102a,
	ATTR_OOB_DEVICE_PASSWORD = 0x102c,
	ATTR_OS_VERSION = 0x102d,
	ATTR_POWER_LEVEL = 0x102f,
	ATTR_PSK_CURRENT = 0x1030,
	ATTR_PSK_MAX = 0x1031,
	ATTR_PUBLIC_KEY = 0x1032,
	ATTR_RADIO_ENABLE = 0x1033,
	ATTR_REBOOT = 0x1034,
	ATTR_REGISTRAR_CURRENT = 0x1035,
	ATTR_REGISTRAR_ESTABLISHED = 0x1036,
	ATTR_REGISTRAR_LIST = 0x1037,
	ATTR_REGISTRAR_MAX = 0x1038,
	ATTR_REGISTRAR_NONCE = 0x1039,
	ATTR_REQUEST_TYPE = 0x103a,
	ATTR_RESPONSE_TYPE = 0x103b,
	ATTR_RF_BANDS = 0x103c,
	ATTR_R_HASH1 = 0x103d,
	ATTR_R_HASH2 = 0x103e,
	ATTR_R_SNONCE1 = 0x103f,
	ATTR_R_SNONCE2 = 0x1040,
	ATTR_SELECTED_REGISTRAR = 0x1041,
	ATTR_SERIAL_NUMBER = 0x1042,
	ATTR_WPS_STATE = 0x1044,
	ATTR_SSID = 0x1045,
	ATTR_TOTAL_NETWORKS = 0x1046,
	ATTR_UUID_E = 0x1047,
	ATTR_UUID_R = 0x1048,
	ATTR_VENDOR_EXT = 0x1049,
	ATTR_VERSION = 0x104a,
	ATTR_X509_CERT_REQ = 0x104b,
	ATTR_X509_CERT = 0x104c,
	ATTR_EAP_IDENTITY = 0x104d,
	ATTR_MSG_COUNTER = 0x104e,
	ATTR_PUBKEY_HASH = 0x104f,
	ATTR_REKEY_KEY = 0x1050,
	ATTR_KEY_LIFETIME = 0x1051,
	ATTR_PERMITTED_CFG_METHODS = 0x1052,
	ATTR_SELECTED_REGISTRAR_CONFIG_METHODS = 0x1053,
	ATTR_PRIMARY_DEV_TYPE = 0x1054,
	ATTR_SECONDARY_DEV_TYPE_LIST = 0x1055,
	ATTR_PORTABLE_DEV = 0x1056,
	ATTR_AP_SETUP_LOCKED = 0x1057,
	ATTR_APPLICATION_EXT = 0x1058,
	ATTR_EAP_TYPE = 0x1059,
	ATTR_IV = 0x1060,
	ATTR_KEY_PROVIDED_AUTO = 0x1061,
	ATTR_802_1X_ENABLED = 0x1062,
	ATTR_APPSESSIONKEY = 0x1063,
	ATTR_WEPTRANSMITKEY = 0x1064,
	ATTR_REQUESTED_DEV_TYPE = 0x106a,
	ATTR_EXTENSIBILITY_TEST = 0x10fa /* _NOT_ defined in the spec */
}WPS_ATTRIBUTE, *PWPS_ATTRIBUTE;

#define	WPS_PRI_DEV_TYPE_CATEGORY_UNKNOWN			0x0000
#define	WPS_PRI_DEV_TYPE_CATEGORY_PC				0x0001
#define	WPS_PRI_DEV_TYPE_CATEGORY_INPUT_DEVICE		0x0002
#define	WPS_PRI_DEV_TYPE_CATEGORY_PRINTERS			0x0003
#define	WPS_PRI_DEV_TYPE_CATEGORY_CAMERA			0x0004
#define	WPS_PRI_DEV_TYPE_CATEGORY_STORAGE			0x0005
#define	WPS_PRI_DEV_TYPE_CATEGORY_NETWORK_INFRA		0x0006
#define	WPS_PRI_DEV_TYPE_CATEGORY_DISPLAY			0x0007
#define	WPS_PRI_DEV_TYPE_CATEGORY_MULTIMEDIA		0x0008
#define	WPS_PRI_DEV_TYPE_CATEGORY_GAMING			0x0009
#define	WPS_PRI_DEV_TYPE_CATEGORY_TELEPHONE			0x000A
#define	WPS_PRI_DEV_TYPE_CATEGORY_AUDIO				0x000B

#define	WPS_PRI_DEV_TYPE_CATEGORY_OTHERS			0x00FF

#define	WPS_PRI_DEV_TYPE_SUB_CATEGORY_NO_SUB		0x0000

static u1Byte	WPS_NO_SUB_CAT_OUI[4] = {0x00, 0x50, 0xF2, 0x00};

#define	WPS_HANDSHAKE_TIMEOUT_SEC						120
#endif	// #ifndef __INC_WPS_DEF_H
