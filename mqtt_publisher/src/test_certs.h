/*
 * Copyright (c) 2016 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __TEST_CERTS_H__
#define __TEST_CERTS_H__

#if defined(CONFIG_NET_SOCKETS_OFFLOAD)
/* By default only certificates in DER format are supported. If you want to use
 * certificate in PEM format, you can enable support for it in Kconfig.
 */

#if defined(CONFIG_TLS_CREDENTIAL_FILENAMES)
static const unsigned char ca_certificate[] = "ca_cert.der";
#else
static const unsigned char ca_certificate[] = {
#include "ca_cert.der.inc"
};
#endif

#else
#include <mbedtls/ssl_ciphersuites.h>

#if defined(MBEDTLS_X509_CRT_PARSE_C)
/* This byte array can be generated by
 * "cat ca.crt | sed -e '1d;$d' | base64 -d |xxd -i"
 */
static const unsigned char ca_certificate[] = {
	0x30, 0x82, 0x02, 0xfb, 0x30, 0x82, 0x01, 0xe3,
	0xa0, 0x03, 0x02, 0x01, 0x02, 0x02, 0x09, 0x00,
	0xee, 0x10, 0x1f, 0xc1, 0xf2, 0x30, 0xe9, 0x11,
	0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86,
	0xf7, 0x0d, 0x01, 0x01, 0x0b, 0x05, 0x00, 0x30,
	0x14, 0x31, 0x12, 0x30, 0x10, 0x06, 0x03, 0x55,
	0x04, 0x03, 0x0c, 0x09, 0x6c, 0x6f, 0x63, 0x61,
	0x6c, 0x68, 0x6f, 0x73, 0x74, 0x30, 0x1e, 0x17,
	0x0d, 0x31, 0x37, 0x30, 0x36, 0x32, 0x36, 0x31,
	0x30, 0x35, 0x36, 0x31, 0x30, 0x5a, 0x17, 0x0d,
	0x34, 0x34, 0x31, 0x31, 0x31, 0x31, 0x31, 0x30,
	0x35, 0x36, 0x31, 0x30, 0x5a, 0x30, 0x14, 0x31,
	0x12, 0x30, 0x10, 0x06, 0x03, 0x55, 0x04, 0x03,
	0x0c, 0x09, 0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x68,
	0x6f, 0x73, 0x74, 0x30, 0x82, 0x01, 0x22, 0x30,
	0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7,
	0x0d, 0x01, 0x01, 0x01, 0x05, 0x00, 0x03, 0x82,
	0x01, 0x0f, 0x00, 0x30, 0x82, 0x01, 0x0a, 0x02,
	0x82, 0x01, 0x01, 0x00, 0xc6, 0x00, 0x7b, 0x0d,
	0xd1, 0x17, 0x43, 0x6b, 0xa9, 0xa7, 0x79, 0x9c,
	0x0f, 0x8d, 0x77, 0x91, 0xd2, 0xf7, 0x47, 0x35,
	0xb3, 0x17, 0xe2, 0xdd, 0xed, 0x6d, 0x01, 0xf9,
	0xb1, 0x92, 0xc9, 0x48, 0x80, 0xe0, 0x1f, 0xcf,
	0xb7, 0xa4, 0x5f, 0xf0, 0x36, 0xea, 0xbf, 0xe1,
	0x33, 0xf8, 0xa9, 0xc5, 0xe6, 0xd4, 0x19, 0x8b,
	0x82, 0x25, 0xd9, 0x19, 0x74, 0x70, 0x79, 0xec,
	0xc6, 0x68, 0xc9, 0xef, 0xce, 0x1a, 0xa9, 0xf0,
	0xb7, 0x01, 0x35, 0x91, 0xff, 0xd3, 0x75, 0x6e,
	0x02, 0xba, 0x06, 0x9a, 0x2a, 0xac, 0xcf, 0x22,
	0xbf, 0x2b, 0x1f, 0xc1, 0x72, 0x38, 0x22, 0x35,
	0xea, 0xda, 0x6f, 0xdd, 0x67, 0xa2, 0x2b, 0x19,
	0x38, 0x19, 0x0e, 0x44, 0xd1, 0x71, 0x38, 0xb4,
	0x6d, 0x26, 0x85, 0xd6, 0xc6, 0xbe, 0xc1, 0x6f,
	0x3c, 0xee, 0xaf, 0x94, 0x3c, 0x05, 0x56, 0x4e,
	0xad, 0x53, 0x81, 0x8b, 0xd4, 0x23, 0x31, 0x69,
	0x72, 0x27, 0x93, 0xb4, 0x3a, 0xac, 0x23, 0xe8,
	0x10, 0xae, 0xf5, 0x9f, 0x0b, 0xa6, 0x6e, 0xd3,
	0x73, 0xca, 0x18, 0x11, 0xca, 0xbe, 0x71, 0x00,
	0x56, 0x29, 0x34, 0x54, 0xcc, 0xda, 0x29, 0x5b,
	0x26, 0x29, 0x99, 0x4d, 0x5f, 0xa1, 0xa6, 0xb9,
	0xcb, 0x2b, 0xb2, 0x0f, 0x10, 0x00, 0x04, 0xa9,
	0x11, 0x2c, 0x48, 0xb1, 0x99, 0xa5, 0xca, 0x7c,
	0x67, 0xa5, 0xbe, 0x14, 0x20, 0x12, 0xb7, 0x3b,
	0x7a, 0x4f, 0xdc, 0xc7, 0xd5, 0x2d, 0x04, 0x66,
	0xbb, 0xf5, 0x0c, 0xcd, 0xf1, 0x32, 0x39, 0xd7,
	0x51, 0x9b, 0xba, 0xdb, 0xf1, 0xa7, 0xfe, 0x2d,
	0x9a, 0xe6, 0x9c, 0x6b, 0x54, 0xda, 0xf1, 0xdd,
	0x48, 0xf9, 0xd7, 0xf0, 0x35, 0x7c, 0x8e, 0x24,
	0x7e, 0x44, 0x2f, 0xf3, 0xbf, 0x39, 0x0e, 0x96,
	0xab, 0xe1, 0x45, 0x03, 0x8b, 0x54, 0xdc, 0xe1,
	0xb6, 0x11, 0x81, 0x21, 0x02, 0x03, 0x01, 0x00,
	0x01, 0xa3, 0x50, 0x30, 0x4e, 0x30, 0x1d, 0x06,
	0x03, 0x55, 0x1d, 0x0e, 0x04, 0x16, 0x04, 0x14,
	0xa4, 0xef, 0x6d, 0xdc, 0x9b, 0x23, 0xc5, 0x3a,
	0xdd, 0x34, 0xd9, 0x01, 0x1c, 0x68, 0x03, 0x53,
	0xae, 0x92, 0xc2, 0xc9, 0x30, 0x1f, 0x06, 0x03,
	0x55, 0x1d, 0x23, 0x04, 0x18, 0x30, 0x16, 0x80,
	0x14, 0xa4, 0xef, 0x6d, 0xdc, 0x9b, 0x23, 0xc5,
	0x3a, 0xdd, 0x34, 0xd9, 0x01, 0x1c, 0x68, 0x03,
	0x53, 0xae, 0x92, 0xc2, 0xc9, 0x30, 0x0c, 0x06,
	0x03, 0x55, 0x1d, 0x13, 0x04, 0x05, 0x30, 0x03,
	0x01, 0x01, 0xff, 0x30, 0x0d, 0x06, 0x09, 0x2a,
	0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x0b,
	0x05, 0x00, 0x03, 0x82, 0x01, 0x01, 0x00, 0x67,
	0x65, 0xbf, 0x93, 0x89, 0xde, 0x4f, 0x71, 0xff,
	0x1c, 0x93, 0x68, 0xa0, 0x64, 0x09, 0x5e, 0x95,
	0x94, 0xf5, 0xd5, 0xf4, 0x6b, 0x20, 0x32, 0xd8,
	0x04, 0x80, 0xac, 0xf8, 0x52, 0x36, 0x7a, 0x38,
	0x83, 0xae, 0xab, 0x29, 0x22, 0x42, 0x71, 0x7e,
	0xea, 0xe5, 0x4f, 0x71, 0xac, 0x44, 0x3f, 0x9e,
	0x5e, 0x49, 0x22, 0x05, 0xee, 0xa6, 0x7b, 0xab,
	0x56, 0x2e, 0xb3, 0x9a, 0x35, 0x1a, 0x88, 0xc3,
	0x54, 0x9b, 0xfd, 0xac, 0x65, 0x54, 0xaf, 0x21,
	0xa7, 0xe0, 0xdd, 0x62, 0x29, 0x8c, 0xae, 0x26,
	0x0b, 0x84, 0x1f, 0x69, 0x78, 0x84, 0xc6, 0x7e,
	0xcf, 0xc8, 0xf5, 0x92, 0x8c, 0x05, 0xa8, 0x13,
	0x38, 0xcd, 0x0b, 0x98, 0x53, 0xfb, 0xdd, 0x8d,
	0x51, 0x90, 0xa8, 0x51, 0xfa, 0x52, 0xbe, 0x28,
	0xd4, 0x71, 0x50, 0x73, 0x1f, 0xb0, 0xb6, 0x0e,
	0x45, 0xb1, 0x47, 0x41, 0x06, 0xd9, 0x1d, 0x7a,
	0x34, 0xe7, 0x80, 0x2e, 0x0c, 0x02, 0x50, 0x97,
	0xde, 0xa8, 0x7a, 0x84, 0x2c, 0x1d, 0xf4, 0x51,
	0x56, 0xa5, 0x52, 0xb5, 0x04, 0x2e, 0xcb, 0xdd,
	0x8b, 0x2e, 0x16, 0xc6, 0xde, 0xc8, 0xe9, 0x8d,
	0xee, 0x5e, 0xb6, 0xa0, 0xe0, 0x2b, 0x85, 0x2a,
	0x89, 0x7b, 0xba, 0x68, 0x80, 0x2b, 0xfb, 0x6e,
	0x2e, 0x80, 0xe7, 0x7a, 0x97, 0x09, 0xb5, 0x2f,
	0x20, 0x8e, 0xed, 0xbc, 0x98, 0x6f, 0x95, 0xd5,
	0x5b, 0x3d, 0x26, 0x19, 0x26, 0x14, 0x39, 0x82,
	0xa8, 0xa8, 0x42, 0x46, 0xab, 0x59, 0x93, 0x47,
	0x83, 0xf7, 0x79, 0xbf, 0x73, 0xb5, 0x5d, 0x5d,
	0x78, 0xfe, 0x62, 0xac, 0xed, 0xb7, 0x1e, 0x4a,
	0xad, 0xc3, 0x99, 0x39, 0x7d, 0x3e, 0x30, 0x21,
	0x26, 0x1d, 0x66, 0xdb, 0x0d, 0xf3, 0xba, 0x87,
	0x46, 0xf0, 0x04, 0xfc, 0xc3, 0xbe, 0x84, 0x85,
	0x3c, 0x01, 0xef, 0xe0, 0x68, 0x65, 0xee,
};
#endif /* MBEDTLS_X509_CRT_PARSE_C */

#if defined(MBEDTLS_KEY_EXCHANGE_SOME_PSK_ENABLED)
/* Avoid leading zero in psk because there's a potential issue of mosquitto
 * that leading zero of psk will be skipped and it leads to TLS handshake
 * failure
 */
const unsigned char client_psk[] = {
	0x01, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
	0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f
};

const char client_psk_id[] = "Client_identity";
#endif

#endif /* CONFIG_NET_SOCKETS_OFFLOAD */

#endif
