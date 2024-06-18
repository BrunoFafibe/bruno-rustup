/* Copyright (c) 2015, Google Inc.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION
 * OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE. */

 /* This file was generated by err_data_generate.go. */

#include <openssl/base.h>
#include <openssl/err.h>
#include <openssl/type_check.h>


OPENSSL_STATIC_ASSERT(ERR_LIB_NONE == 1, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_SYS == 2, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_BN == 3, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_RSA == 4, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_DH == 5, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_EVP == 6, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_BUF == 7, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_OBJ == 8, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_PEM == 9, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_DSA == 10, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_X509 == 11, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_ASN1 == 12, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_CONF == 13, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_CRYPTO == 14, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_EC == 15, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_SSL == 16, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_BIO == 17, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_PKCS7 == 18, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_PKCS8 == 19, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_X509V3 == 20, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_RAND == 21, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_ENGINE == 22, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_OCSP == 23, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_UI == 24, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_COMP == 25, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_ECDSA == 26, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_ECDH == 27, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_HMAC == 28, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_DIGEST == 29, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_CIPHER == 30, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_HKDF == 31, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_TRUST_TOKEN == 32, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_USER == 33, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_NUM_LIBS == 34, number_of_libraries_changed)

const uint32_t kOpenSSLReasonValues[] = {
    0xc320885,
    0xc32889f,
    0xc3308ae,
    0xc3388be,
    0xc3408cd,
    0xc3488e6,
    0xc3508f2,
    0xc35890f,
    0xc36092f,
    0xc36893d,
    0xc37094d,
    0xc37895a,
    0xc38096a,
    0xc388975,
    0xc39098b,
    0xc39899a,
    0xc3a09ae,
    0xc3a8892,
    0xc3b00f7,
    0xc3b8921,
    0x10320892,
    0x10329981,
    0x1033198d,
    0x103399a6,
    0x103419b9,
    0x10349064,
    0x10350db0,
    0x103599cc,
    0x103619f6,
    0x10369a09,
    0x10371a28,
    0x10379a41,
    0x10381a56,
    0x10389a74,
    0x10391a83,
    0x10399a9f,
    0x103a1aba,
    0x103a9ac9,
    0x103b1ae5,
    0x103b9b00,
    0x103c1b26,
    0x103c80f7,
    0x103d1b37,
    0x103d9b4b,
    0x103e1b6a,
    0x103e9b79,
    0x103f1b90,
    0x103f9ba3,
    0x10400d74,
    0x10409bb6,
    0x10411bd4,
    0x10419be7,
    0x10421c01,
    0x10429c11,
    0x10431c25,
    0x10439c3b,
    0x10441c53,
    0x10449c68,
    0x10451c7c,
    0x10459c8e,
    0x10460635,
    0x1046899a,
    0x10471ca3,
    0x10479cba,
    0x10481ccf,
    0x10489cdd,
    0x10490fb0,
    0x10499b17,
    0x104a19e1,
    0x107c1072,
    0x14320d38,
    0x14328d65,
    0x14330d74,
    0x14338d86,
    0x143400b9,
    0x143480f7,
    0x14350d46,
    0x14358d52,
    0x18320090,
    0x183290cf,
    0x183300b9,
    0x183390e5,
    0x183410f9,
    0x183480f7,
    0x18351118,
    0x18359130,
    0x18361145,
    0x18369159,
    0x18371191,
    0x183791a7,
    0x183811bb,
    0x183891cb,
    0x18390aef,
    0x183991db,
    0x183a1210,
    0x183a9265,
    0x183b0dbc,
    0x183b92b4,
    0x183c12c6,
    0x183c92d1,
    0x183d12e1,
    0x183d92f2,
    0x183e1303,
    0x183e9315,
    0x183f133e,
    0x183f9357,
    0x1840136f,
    0x1840870d,
    0x18411288,
    0x18419253,
    0x18421272,
    0x18428d52,
    0x184311f0,
    0x1843929a,
    0x1844110e,
    0x1844917d,
    0x184509f2,
    0x18fa1201,
    0x18fa9224,
    0x18fb1239,
    0x203213a9,
    0x20329396,
    0x243215b7,
    0x243289f2,
    0x243315c9,
    0x243395d6,
    0x243415e3,
    0x243495f5,
    0x24351604,
    0x24359621,
    0x2436162e,
    0x2436963c,
    0x2437164a,
    0x24379672,
    0x2438167b,
    0x24389688,
    0x2439169b,
    0x24399658,
    0x28320da4,
    0x28328dbc,
    0x28330d74,
    0x28338dcf,
    0x28340db0,
    0x283480b9,
    0x283500f7,
    0x28358d52,
    0x2836099a,
    0x2c32370c,
    0x2c3296b2,
    0x2c33371a,
    0x2c33b72c,
    0x2c343740,
    0x2c34b752,
    0x2c35376d,
    0x2c35b77f,
    0x2c3637af,
    0x2c36833a,
    0x2c3737bc,
    0x2c37b7e8,
    0x2c383826,
    0x2c38b83d,
    0x2c39385b,
    0x2c39b86b,
    0x2c3a387d,
    0x2c3ab891,
    0x2c3b38a2,
    0x2c3bb8c1,
    0x2c3c16c4,
    0x2c3c96da,
    0x2c3d3906,
    0x2c3d96f3,
    0x2c3e3930,
    0x2c3eb93e,
    0x2c3f3956,
    0x2c3fb96e,
    0x2c403998,
    0x2c4093a9,
    0x2c4139a9,
    0x2c41b9cf,
    0x2c42136f,
    0x2c42b9e0,
    0x2c43076d,
    0x2c43b8b3,
    0x2c4437fb,
    0x2c44b97b,
    0x2c453792,
    0x2c45b7ce,
    0x2c46384b,
    0x2c46b8d5,
    0x2c4738ea,
    0x2c47b923,
    0x2c48380d,
    0x2c48b9bc,
    0x30320000,
    0x30328015,
    0x3033001f,
    0x30338038,
    0x30340057,
    0x30348071,
    0x30350078,
    0x30358090,
    0x303600a1,
    0x303680b9,
    0x303700c6,
    0x303780d5,
    0x303800f7,
    0x30388104,
    0x30390117,
    0x30398132,
    0x303a0147,
    0x303a815b,
    0x303b016f,
    0x303b8180,
    0x303c0199,
    0x303c81b6,
    0x303d01c4,
    0x303d81d8,
    0x303e01e8,
    0x303e8201,
    0x303f0211,
    0x303f8224,
    0x30400233,
    0x3040823f,
    0x30410254,
    0x30418264,
    0x3042027b,
    0x30428288,
    0x3043029b,
    0x304382aa,
    0x304402bf,
    0x304482e0,
    0x304502f3,
    0x30458306,
    0x3046031f,
    0x3046833a,
    0x30470372,
    0x30478384,
    0x304803a2,
    0x304883b3,
    0x304903c2,
    0x304983da,
    0x304a03ec,
    0x304a8400,
    0x304b0418,
    0x304b842b,
    0x304c0436,
    0x304c8447,
    0x304d0453,
    0x304d8469,
    0x304e0477,
    0x304e848d,
    0x304f049f,
    0x304f84b1,
    0x305004d4,
    0x305084e7,
    0x305104f8,
    0x30518508,
    0x30520520,
    0x30528535,
    0x3053054d,
    0x30538561,
    0x30540579,
    0x30548592,
    0x305505ab,
    0x305585c8,
    0x305605d3,
    0x305685eb,
    0x305705fb,
    0x3057860c,
    0x3058061f,
    0x30588635,
    0x3059063e,
    0x30598653,
    0x305a0666,
    0x305a8675,
    0x305b0695,
    0x305b86a4,
    0x305c06c5,
    0x305c86e1,
    0x305d06ed,
    0x305d870d,
    0x305e0729,
    0x305e874d,
    0x305f0763,
    0x305f876d,
    0x306004c4,
    0x3060804a,
    0x30610357,
    0x3061873a,
    0x30620392,
    0x34320c75,
    0x34328c89,
    0x34330ca6,
    0x34338cb9,
    0x34340cc8,
    0x34348d22,
    0x34350d06,
    0x34358ce5,
    0x3c320090,
    0x3c328df9,
    0x3c330e12,
    0x3c338e2d,
    0x3c340e4a,
    0x3c348e74,
    0x3c350e8f,
    0x3c358eb5,
    0x3c360ece,
    0x3c368ee6,
    0x3c370ef7,
    0x3c378f05,
    0x3c380f12,
    0x3c388f26,
    0x3c390dbc,
    0x3c398f49,
    0x3c3a0f5d,
    0x3c3a895a,
    0x3c3b0f6d,
    0x3c3b8f88,
    0x3c3c0f9a,
    0x3c3c8fcd,
    0x3c3d0fd7,
    0x3c3d8feb,
    0x3c3e0ff9,
    0x3c3e901e,
    0x3c3f0de5,
    0x3c3f9007,
    0x3c4000b9,
    0x3c4080f7,
    0x3c410e65,
    0x3c418ea4,
    0x3c420fb0,
    0x3c428f3a,
    0x40321d6f,
    0x40329d85,
    0x40331db3,
    0x40339dbd,
    0x40341dd4,
    0x40349df2,
    0x40351e02,
    0x40359e14,
    0x40361e21,
    0x40369e2d,
    0x40371e42,
    0x40379e7b,
    0x40381e86,
    0x40389e98,
    0x40391064,
    0x40399ea8,
    0x403a1ebb,
    0x403a9edc,
    0x403b1eed,
    0x403b9efd,
    0x403c0071,
    0x403c8090,
    0x403d1f5e,
    0x403d9f74,
    0x403e1f83,
    0x403e9fbb,
    0x403f1fd5,
    0x403f9ffd,
    0x40402012,
    0x4040a026,
    0x40412061,
    0x4041a07c,
    0x40422095,
    0x4042a0a8,
    0x404320bc,
    0x4043a0ea,
    0x40442101,
    0x404480b9,
    0x40452116,
    0x4045a128,
    0x4046214c,
    0x4046a16c,
    0x4047217a,
    0x4047a1a1,
    0x40482212,
    0x4048a2cc,
    0x404922e3,
    0x4049a2fd,
    0x404a2314,
    0x404aa332,
    0x404b234a,
    0x404ba377,
    0x404c238d,
    0x404ca39f,
    0x404d23c0,
    0x404da3f9,
    0x404e240d,
    0x404ea41a,
    0x404f24cb,
    0x404fa541,
    0x405025b0,
    0x4050a5c4,
    0x405125f7,
    0x40522607,
    0x4052a62b,
    0x40532643,
    0x4053a656,
    0x4054266b,
    0x4054a68e,
    0x405526b9,
    0x4055a6f6,
    0x4056271b,
    0x4056a734,
    0x4057274c,
    0x4057a75f,
    0x40582774,
    0x4058a79b,
    0x405927ca,
    0x4059a7f7,
    0x405aa80b,
    0x405b2823,
    0x405ba834,
    0x405c2847,
    0x405ca886,
    0x405d2893,
    0x405da8b8,
    0x405e28f6,
    0x405e8b2d,
    0x405f2917,
    0x405fa924,
    0x40602932,
    0x4060a954,
    0x406129b5,
    0x4061a9ed,
    0x40622a04,
    0x4062aa15,
    0x40632a62,
    0x4063aa77,
    0x40642a8e,
    0x4064aaba,
    0x40652ad5,
    0x4065aaec,
    0x40662b04,
    0x4066ab2e,
    0x40672b59,
    0x4067ac5c,
    0x40682ca4,
    0x4068acc5,
    0x40692cf7,
    0x4069ad25,
    0x406a2d46,
    0x406aad66,
    0x406b2eee,
    0x406baf11,
    0x406c2f27,
    0x406cb231,
    0x406d3260,
    0x406db288,
    0x406e32b6,
    0x406eb303,
    0x406f335c,
    0x406fb394,
    0x407033a7,
    0x4070b3c4,
    0x4071084d,
    0x4071b3d6,
    0x407233e9,
    0x4072b41f,
    0x40733437,
    0x407398dc,
    0x4074344b,
    0x4074b465,
    0x40753476,
    0x4075b48a,
    0x40763498,
    0x40769688,
    0x407734bd,
    0x4077b4fd,
    0x40783518,
    0x4078b551,
    0x40793568,
    0x4079b57e,
    0x407a35aa,
    0x407ab5bd,
    0x407b35d2,
    0x407bb5e4,
    0x407c3615,
    0x407cb61e,
    0x407d2ce0,
    0x407da569,
    0x407e352d,
    0x407ea7ab,
    0x407f218e,
    0x407fa361,
    0x408024db,
    0x4080a1b6,
    0x40812619,
    0x4081a468,
    0x408232a1,
    0x40829f09,
    0x40832786,
    0x4083aa9f,
    0x408421ca,
    0x4084a7e3,
    0x40852858,
    0x4085a97c,
    0x408628d8,
    0x4086a583,
    0x408732e7,
    0x4087a9ca,
    0x40881f47,
    0x4088ac6f,
    0x40891f96,
    0x40899f23,
    0x408a2f5f,
    0x408a9cf4,
    0x408b35f9,
    0x408bb371,
    0x408c2868,
    0x408c9d2c,
    0x408d22b2,
    0x408da1fc,
    0x408e23e2,
    0x408ea6d6,
    0x408f2c83,
    0x408fa998,
    0x40902b7a,
    0x4090a8aa,
    0x40912f47,
    0x40919d52,
    0x40921fe3,
    0x4092b322,
    0x40933402,
    0x4093a594,
    0x409421de,
    0x4094af78,
    0x40952a26,
    0x4095b58a,
    0x409632ce,
    0x4096a4f4,
    0x409725df,
    0x4097a431,
    0x40982043,
    0x4098aa3a,
    0x4099333e,
    0x4099a703,
    0x409a269c,
    0x409a9d10,
    0x409b2238,
    0x409ba263,
    0x409c34df,
    0x409ca28b,
    0x409d24b0,
    0x409da47e,
    0x409e20d4,
    0x409ea529,
    0x409f2511,
    0x409fa22b,
    0x40a02551,
    0x40a0a44b,
    0x40a12499,
    0x40fa2c42,
    0x40faab9e,
    0x40fb2c21,
    0x40fbabb8,
    0x40fcac00,
    0x40fd2bd9,
    0x40fd9e54,
    0x40fe1e68,
    0x41f42e19,
    0x41f92eab,
    0x41fe2d9e,
    0x41feb054,
    0x41ff3182,
    0x42032e32,
    0x42082e54,
    0x4208ae90,
    0x42092d82,
    0x4209aeca,
    0x420a2dd9,
    0x420aadb9,
    0x420b2df9,
    0x420bae72,
    0x420c319e,
    0x420caf88,
    0x420d303b,
    0x420db072,
    0x421230a5,
    0x42173165,
    0x4217b0e7,
    0x421c3109,
    0x421f30c4,
    0x42213216,
    0x42263148,
    0x422b31f4,
    0x422bb016,
    0x422c31d6,
    0x422cafc9,
    0x422d2fa2,
    0x422db1b5,
    0x422e2ff5,
    0x42303124,
    0x4230b08c,
    0x42310b85,
    0x44320778,
    0x44328787,
    0x44330793,
    0x443387a1,
    0x443407b4,
    0x443487c5,
    0x443507cc,
    0x443587d6,
    0x443607e9,
    0x443687ff,
    0x44370811,
    0x4437881e,
    0x4438082d,
    0x44388835,
    0x4439084d,
    0x4439885b,
    0x443a086e,
    0x483216b2,
    0x483296c4,
    0x483316da,
    0x483396f3,
    0x4c321730,
    0x4c329740,
    0x4c331753,
    0x4c339773,
    0x4c3400b9,
    0x4c3480f7,
    0x4c35177f,
    0x4c35978d,
    0x4c3617a9,
    0x4c3697cf,
    0x4c3717de,
    0x4c3797ec,
    0x4c381801,
    0x4c38980d,
    0x4c39182d,
    0x4c399857,
    0x4c3a1870,
    0x4c3a9889,
    0x4c3b0635,
    0x4c3b98a2,
    0x4c3c18b4,
    0x4c3c98c3,
    0x4c3d18dc,
    0x4c3d8d97,
    0x4c3e1949,
    0x4c3e98eb,
    0x4c3f196b,
    0x4c3f9688,
    0x4c401901,
    0x4c40971c,
    0x4c411939,
    0x4c4197bc,
    0x4c421925,
    0x4c429704,
    0x503239f2,
    0x5032ba01,
    0x50333a0c,
    0x5033ba1c,
    0x50343a35,
    0x5034ba4f,
    0x50353a5d,
    0x5035ba73,
    0x50363a85,
    0x5036ba9b,
    0x50373ab4,
    0x5037bac7,
    0x50383adf,
    0x5038baf0,
    0x50393b05,
    0x5039bb19,
    0x503a3b39,
    0x503abb4f,
    0x503b3b67,
    0x503bbb79,
    0x503c3b95,
    0x503cbbac,
    0x503d3bc5,
    0x503dbbdb,
    0x503e3be8,
    0x503ebbfe,
    0x503f3c10,
    0x503f83b3,
    0x50403c23,
    0x5040bc33,
    0x50413c4d,
    0x5041bc5c,
    0x50423c76,
    0x5042bc93,
    0x50433ca3,
    0x5043bcb3,
    0x50443cd0,
    0x50448469,
    0x50453ce4,
    0x5045bd02,
    0x50463d15,
    0x5046bd2b,
    0x50473d3d,
    0x5047bd52,
    0x50483d78,
    0x5048bd86,
    0x50493d99,
    0x5049bdae,
    0x504a3dc4,
    0x504abdd4,
    0x504b3df4,
    0x504bbe07,
    0x504c3e2a,
    0x504cbe58,
    0x504d3e85,
    0x504dbea2,
    0x504e3ebd,
    0x504ebed9,
    0x504f3eeb,
    0x504fbf02,
    0x50503f11,
    0x50508729,
    0x50513f24,
    0x5051bcc2,
    0x50523e6a,
    0x583210b7,
    0x5c3293b5,
    0x5c3313ce,
    0x5c33941f,
    0x5c341456,
    0x5c349469,
    0x5c361482,
    0x5c3714c2,
    0x5c3794e9,
    0x5c38150e,
    0x5c399522,
    0x5c3a953e,
    0x5c3b1550,
    0x5c3b95a0,
    0x5c3c13a9,
    0x5c3c940d,
    0x5c3d13d9,
    0x5c3d93f3,
    0x5c3e1439,
    0x5c3e956d,
    0x5c3f157c,
    0x5c3f9591,
    0x5c411493,
    0x5c4194a1,
    0x68321064,
    0x68328dbc,
    0x68330dcf,
    0x68339087,
    0x68341097,
    0x683480f7,
    0x6835099a,
    0x68669072,
    0x6c32102a,
    0x6c328d86,
    0x6c331035,
    0x6c33904e,
    0x74320a95,
    0x743280b9,
    0x74330d97,
    0x783209cb,
    0x783289f2,
    0x783309fe,
    0x78338090,
    0x78340a0d,
    0x78348a22,
    0x78350a5e,
    0x78358a80,
    0x78360a95,
    0x78368aab,
    0x78370abb,
    0x78378adc,
    0x78380aef,
    0x78388b01,
    0x78390b0e,
    0x78398b2d,
    0x783a0ba9,
    0x783a8bb7,
    0x783b0bc1,
    0x783b8bd5,
    0x783c0bec,
    0x783c8c01,
    0x783d0c18,
    0x783d8c2d,
    0x783e0b1c,
    0x783e8ace,
    0x78450c61,
    0x78458c46,
    0x78460a41,
    0x78468b62,
    0x784709e0,
    0x78478b85,
    0x78480b42,
    0x7c321385,
    0x803217cf,
    0x80328090,
    0x803336db,
    0x803380b9,
    0x803436ea,
    0x8034b652,
    0x80353670,
    0x8035b6fe,
    0x803636b2,
    0x8036b661,
    0x803736a4,
    0x8037b63f,
    0x803836c5,
    0x8038b681,
    0x80393696,
};

const size_t kOpenSSLReasonValuesLen = sizeof(kOpenSSLReasonValues) / sizeof(kOpenSSLReasonValues[0]);

const char kOpenSSLReasonStringData[] =
    "ASN1_LENGTH_MISMATCH\0"
    "AUX_ERROR\0"
    "BAD_GET_ASN1_OBJECT_CALL\0"
    "BAD_OBJECT_HEADER\0"
    "BAD_TEMPLATE\0"
    "BMPSTRING_IS_WRONG_LENGTH\0"
    "BN_LIB\0"
    "BOOLEAN_IS_WRONG_LENGTH\0"
    "BUFFER_TOO_SMALL\0"
    "CONTEXT_NOT_INITIALISED\0"
    "DECODE_ERROR\0"
    "DEPTH_EXCEEDED\0"
    "DIGEST_AND_KEY_TYPE_NOT_SUPPORTED\0"
    "ENCODE_ERROR\0"
    "ERROR_GETTING_TIME\0"
    "EXPECTING_AN_ASN1_SEQUENCE\0"
    "EXPECTING_AN_INTEGER\0"
    "EXPECTING_AN_OBJECT\0"
    "EXPECTING_A_BOOLEAN\0"
    "EXPECTING_A_TIME\0"
    "EXPLICIT_LENGTH_MISMATCH\0"
    "EXPLICIT_TAG_NOT_CONSTRUCTED\0"
    "FIELD_MISSING\0"
    "FIRST_NUM_TOO_LARGE\0"
    "HEADER_TOO_LONG\0"
    "ILLEGAL_BITSTRING_FORMAT\0"
    "ILLEGAL_BOOLEAN\0"
    "ILLEGAL_CHARACTERS\0"
    "ILLEGAL_FORMAT\0"
    "ILLEGAL_HEX\0"
    "ILLEGAL_IMPLICIT_TAG\0"
    "ILLEGAL_INTEGER\0"
    "ILLEGAL_NESTED_TAGGING\0"
    "ILLEGAL_NULL\0"
    "ILLEGAL_NULL_VALUE\0"
    "ILLEGAL_OBJECT\0"
    "ILLEGAL_OPTIONAL_ANY\0"
    "ILLEGAL_OPTIONS_ON_ITEM_TEMPLATE\0"
    "ILLEGAL_TAGGED_ANY\0"
    "ILLEGAL_TIME_VALUE\0"
    "INTEGER_NOT_ASCII_FORMAT\0"
    "INTEGER_TOO_LARGE_FOR_LONG\0"
    "INVALID_BIT_STRING_BITS_LEFT\0"
    "INVALID_BIT_STRING_PADDING\0"
    "INVALID_BMPSTRING\0"
    "INVALID_DIGIT\0"
    "INVALID_INTEGER\0"
    "INVALID_MODIFIER\0"
    "INVALID_NUMBER\0"
    "INVALID_OBJECT_ENCODING\0"
    "INVALID_SEPARATOR\0"
    "INVALID_TIME_FORMAT\0"
    "INVALID_UNIVERSALSTRING\0"
    "INVALID_UTF8STRING\0"
    "LIST_ERROR\0"
    "MISSING_ASN1_EOS\0"
    "MISSING_EOC\0"
    "MISSING_SECOND_NUMBER\0"
    "MISSING_VALUE\0"
    "MSTRING_NOT_UNIVERSAL\0"
    "MSTRING_WRONG_TAG\0"
    "NESTED_ASN1_ERROR\0"
    "NESTED_ASN1_STRING\0"
    "NESTED_TOO_DEEP\0"
    "NON_HEX_CHARACTERS\0"
    "NOT_ASCII_FORMAT\0"
    "NOT_ENOUGH_DATA\0"
    "NO_MATCHING_CHOICE_TYPE\0"
    "NULL_IS_WRONG_LENGTH\0"
    "OBJECT_NOT_ASCII_FORMAT\0"
    "ODD_NUMBER_OF_CHARS\0"
    "SECOND_NUMBER_TOO_LARGE\0"
    "SEQUENCE_LENGTH_MISMATCH\0"
    "SEQUENCE_NOT_CONSTRUCTED\0"
    "SEQUENCE_OR_SET_NEEDS_CONFIG\0"
    "SHORT_LINE\0"
    "STREAMING_NOT_SUPPORTED\0"
    "STRING_TOO_LONG\0"
    "STRING_TOO_SHORT\0"
    "TAG_VALUE_TOO_HIGH\0"
    "TIME_NOT_ASCII_FORMAT\0"
    "TOO_LONG\0"
    "TYPE_NOT_CONSTRUCTED\0"
    "TYPE_NOT_PRIMITIVE\0"
    "UNEXPECTED_EOC\0"
    "UNIVERSALSTRING_IS_WRONG_LENGTH\0"
    "UNKNOWN_FORMAT\0"
    "UNKNOWN_MESSAGE_DIGEST_ALGORITHM\0"
    "UNKNOWN_SIGNATURE_ALGORITHM\0"
    "UNKNOWN_TAG\0"
    "UNSUPPORTED_ANY_DEFINED_BY_TYPE\0"
    "UNSUPPORTED_PUBLIC_KEY_TYPE\0"
    "UNSUPPORTED_TYPE\0"
    "WRONG_INTEGER_TYPE\0"
    "WRONG_PUBLIC_KEY_TYPE\0"
    "WRONG_TAG\0"
    "WRONG_TYPE\0"
    "BAD_FOPEN_MODE\0"
    "BROKEN_PIPE\0"
    "CONNECT_ERROR\0"
    "ERROR_SETTING_NBIO\0"
    "INVALID_ARGUMENT\0"
    "IN_USE\0"
    "KEEPALIVE\0"
    "NBIO_CONNECT_ERROR\0"
    "NO_HOSTNAME_SPECIFIED\0"
    "NO_PORT_SPECIFIED\0"
    "NO_SUCH_FILE\0"
    "NULL_PARAMETER\0"
    "SYS_LIB\0"
    "UNABLE_TO_CREATE_SOCKET\0"
    "UNINITIALIZED\0"
    "UNSUPPORTED_METHOD\0"
    "WRITE_TO_READ_ONLY_BIO\0"
    "ARG2_LT_ARG3\0"
    "BAD_ENCODING\0"
    "BAD_RECIPROCAL\0"
    "BIGNUM_TOO_LONG\0"
    "BITS_TOO_SMALL\0"
    "CALLED_WITH_EVEN_MODULUS\0"
    "DIV_BY_ZERO\0"
    "EXPAND_ON_STATIC_BIGNUM_DATA\0"
    "INPUT_NOT_REDUCED\0"
    "INVALID_INPUT\0"
    "INVALID_RANGE\0"
    "NEGATIVE_NUMBER\0"
    "NOT_A_SQUARE\0"
    "NOT_INITIALIZED\0"
    "NO_INVERSE\0"
    "PRIVATE_KEY_TOO_LARGE\0"
    "P_IS_NOT_PRIME\0"
    "TOO_MANY_ITERATIONS\0"
    "TOO_MANY_TEMPORARY_VARIABLES\0"
    "AES_KEY_SETUP_FAILED\0"
    "ALIGNMENT_CHANGED\0"
    "BAD_DECRYPT\0"
    "BAD_KEY_LENGTH\0"
    "CTRL_NOT_IMPLEMENTED\0"
    "CTRL_OPERATION_NOT_IMPLEMENTED\0"
    "CTRL_OPERATION_NOT_PERFORMED\0"
    "DATA_NOT_MULTIPLE_OF_BLOCK_LENGTH\0"
    "INITIALIZATION_ERROR\0"
    "INPUT_NOT_INITIALIZED\0"
    "INVALID_AD_SIZE\0"
    "INVALID_KEY_LENGTH\0"
    "INVALID_NONCE\0"
    "INVALID_NONCE_SIZE\0"
    "INVALID_OPERATION\0"
    "IV_TOO_LARGE\0"
    "NO_CIPHER_SET\0"
    "NO_DIRECTION_SET\0"
    "OUTPUT_ALIASES_INPUT\0"
    "SERIALIZATION_INVALID_CIPHER_ID\0"
    "SERIALIZATION_INVALID_EVP_AEAD_CTX\0"
    "SERIALIZATION_INVALID_SERDE_VERSION\0"
    "TAG_TOO_LARGE\0"
    "TOO_LARGE\0"
    "UNSUPPORTED_AD_SIZE\0"
    "UNSUPPORTED_INPUT_SIZE\0"
    "UNSUPPORTED_KEY_SIZE\0"
    "UNSUPPORTED_NONCE_SIZE\0"
    "UNSUPPORTED_TAG_SIZE\0"
    "WRONG_FINAL_BLOCK_LENGTH\0"
    "XTS_DATA_UNIT_IS_TOO_LARGE\0"
    "XTS_DUPLICATED_KEYS\0"
    "LIST_CANNOT_BE_NULL\0"
    "MISSING_CLOSE_SQUARE_BRACKET\0"
    "MISSING_EQUAL_SIGN\0"
    "NO_CLOSE_BRACE\0"
    "UNABLE_TO_CREATE_NEW_SECTION\0"
    "VARIABLE_EXPANSION_NOT_SUPPORTED\0"
    "VARIABLE_EXPANSION_TOO_LONG\0"
    "VARIABLE_HAS_NO_VALUE\0"
    "BAD_GENERATOR\0"
    "INVALID_NID\0"
    "INVALID_PARAMETERS\0"
    "INVALID_PUBKEY\0"
    "MODULUS_TOO_LARGE\0"
    "NO_PRIVATE_VALUE\0"
    "UNKNOWN_HASH\0"
    "BAD_Q_VALUE\0"
    "BAD_VERSION\0"
    "MISSING_PARAMETERS\0"
    "NEED_NEW_SETUP_VALUES\0"
    "BIGNUM_OUT_OF_RANGE\0"
    "COORDINATES_OUT_OF_RANGE\0"
    "D2I_ECPKPARAMETERS_FAILURE\0"
    "EC_GROUP_NEW_BY_NAME_FAILURE\0"
    "GROUP2PKPARAMETERS_FAILURE\0"
    "GROUP_MISMATCH\0"
    "I2D_ECPKPARAMETERS_FAILURE\0"
    "INCOMPATIBLE_OBJECTS\0"
    "INVALID_COFACTOR\0"
    "INVALID_COMPRESSED_POINT\0"
    "INVALID_COMPRESSION_BIT\0"
    "INVALID_ENCODING\0"
    "INVALID_FIELD\0"
    "INVALID_FORM\0"
    "INVALID_GROUP_ORDER\0"
    "INVALID_PRIVATE_KEY\0"
    "INVALID_SCALAR\0"
    "MISSING_PRIVATE_KEY\0"
    "NON_NAMED_CURVE\0"
    "PKPARAMETERS2GROUP_FAILURE\0"
    "POINT_AT_INFINITY\0"
    "POINT_IS_NOT_ON_CURVE\0"
    "PUBLIC_KEY_VALIDATION_FAILED\0"
    "SLOT_FULL\0"
    "UNDEFINED_GENERATOR\0"
    "UNKNOWN_GROUP\0"
    "UNKNOWN_ORDER\0"
    "WRONG_CURVE_PARAMETERS\0"
    "WRONG_ORDER\0"
    "KDF_FAILED\0"
    "POINT_ARITHMETIC_FAILURE\0"
    "UNKNOWN_DIGEST_LENGTH\0"
    "BAD_SIGNATURE\0"
    "MISMATCHED_SIGNATURE\0"
    "NOT_IMPLEMENTED\0"
    "RANDOM_NUMBER_GENERATION_FAILED\0"
    "OPERATION_NOT_SUPPORTED\0"
    "COMMAND_NOT_SUPPORTED\0"
    "DIFFERENT_KEY_TYPES\0"
    "DIFFERENT_PARAMETERS\0"
    "EMPTY_PSK\0"
    "EXPECTING_AN_EC_KEY_KEY\0"
    "EXPECTING_AN_RSA_KEY\0"
    "EXPECTING_A_DSA_KEY\0"
    "ILLEGAL_OR_UNSUPPORTED_PADDING_MODE\0"
    "INVALID_BUFFER_SIZE\0"
    "INVALID_DIGEST_LENGTH\0"
    "INVALID_DIGEST_TYPE\0"
    "INVALID_KEYBITS\0"
    "INVALID_MGF1_MD\0"
    "INVALID_PADDING_MODE\0"
    "INVALID_PEER_KEY\0"
    "INVALID_PSS_MD\0"
    "INVALID_PSS_SALTLEN\0"
    "INVALID_PSS_SALT_LEN\0"
    "INVALID_PSS_TRAILER_FIELD\0"
    "INVALID_SIGNATURE\0"
    "KEYS_NOT_SET\0"
    "MEMORY_LIMIT_EXCEEDED\0"
    "NOT_A_PRIVATE_KEY\0"
    "NOT_XOF_OR_INVALID_LENGTH\0"
    "NO_DEFAULT_DIGEST\0"
    "NO_KEY_SET\0"
    "NO_MDC2_SUPPORT\0"
    "NO_NID_FOR_CURVE\0"
    "NO_OPERATION_SET\0"
    "NO_PARAMETERS_SET\0"
    "OPERATION_NOT_SUPPORTED_FOR_THIS_KEYTYPE\0"
    "OPERATON_NOT_INITIALIZED\0"
    "UNKNOWN_PUBLIC_KEY_TYPE\0"
    "UNSUPPORTED_ALGORITHM\0"
    "OUTPUT_TOO_LARGE\0"
    "INVALID_OID_STRING\0"
    "UNKNOWN_NID\0"
    "CERTIFICATE_VERIFY_ERROR\0"
    "DIGEST_ERR\0"
    "ERROR_IN_NEXTUPDATE_FIELD\0"
    "ERROR_IN_THISUPDATE_FIELD\0"
    "ERROR_PARSING_URL\0"
    "MISSING_OCSPSIGNING_USAGE\0"
    "NEXTUPDATE_BEFORE_THISUPDATE\0"
    "NOT_BASIC_RESPONSE\0"
    "NO_CERTIFICATES_IN_CHAIN\0"
    "NO_RESPONSE_DATA\0"
    "NO_SIGNER_KEY\0"
    "OCSP_REQUEST_DUPLICATE_SIGNATURE\0"
    "PRIVATE_KEY_DOES_NOT_MATCH_CERTIFICATE\0"
    "RESPONSE_CONTAINS_NO_REVOCATION_DATA\0"
    "ROOT_CA_NOT_TRUSTED\0"
    "SERVER_RESPONSE_PARSE_ERROR\0"
    "SIGNATURE_FAILURE\0"
    "SIGNER_CERTIFICATE_NOT_FOUND\0"
    "STATUS_EXPIRED\0"
    "STATUS_NOT_YET_VALID\0"
    "STATUS_TOO_OLD\0"
    "UNKNOWN_MESSAGE_DIGEST\0"
    "BAD_BASE64_DECODE\0"
    "BAD_END_LINE\0"
    "BAD_IV_CHARS\0"
    "BAD_PASSWORD_READ\0"
    "CIPHER_IS_NULL\0"
    "ERROR_CONVERTING_PRIVATE_KEY\0"
    "NOT_DEK_INFO\0"
    "NOT_ENCRYPTED\0"
    "NOT_PROC_TYPE\0"
    "NO_START_LINE\0"
    "PROBLEMS_GETTING_PASSWORD\0"
    "READ_KEY\0"
    "SHORT_HEADER\0"
    "UNSUPPORTED_CIPHER\0"
    "UNSUPPORTED_ENCRYPTION\0"
    "BAD_PKCS7_VERSION\0"
    "NOT_PKCS7_SIGNED_DATA\0"
    "NO_CERTIFICATES_INCLUDED\0"
    "NO_CRLS_INCLUDED\0"
    "AMBIGUOUS_FRIENDLY_NAME\0"
    "BAD_ITERATION_COUNT\0"
    "BAD_PKCS12_DATA\0"
    "BAD_PKCS12_VERSION\0"
    "CIPHER_HAS_NO_OBJECT_IDENTIFIER\0"
    "CRYPT_ERROR\0"
    "ENCRYPT_ERROR\0"
    "ERROR_SETTING_CIPHER_PARAMS\0"
    "INCORRECT_PASSWORD\0"
    "INVALID_CHARACTERS\0"
    "KEYGEN_FAILURE\0"
    "KEY_GEN_ERROR\0"
    "METHOD_NOT_SUPPORTED\0"
    "MISSING_MAC\0"
    "MULTIPLE_PRIVATE_KEYS_IN_PKCS12\0"
    "PKCS12_PUBLIC_KEY_INTEGRITY_NOT_SUPPORTED\0"
    "PKCS12_TOO_DEEPLY_NESTED\0"
    "PRIVATE_KEY_DECODE_ERROR\0"
    "PRIVATE_KEY_ENCODE_ERROR\0"
    "UNKNOWN_ALGORITHM\0"
    "UNKNOWN_CIPHER\0"
    "UNKNOWN_CIPHER_ALGORITHM\0"
    "UNKNOWN_DIGEST\0"
    "UNSUPPORTED_KEYLENGTH\0"
    "UNSUPPORTED_KEY_DERIVATION_FUNCTION\0"
    "UNSUPPORTED_OPTIONS\0"
    "UNSUPPORTED_PRF\0"
    "UNSUPPORTED_PRIVATE_KEY_ALGORITHM\0"
    "UNSUPPORTED_SALT_TYPE\0"
    "BAD_E_VALUE\0"
    "BAD_FIXED_HEADER_DECRYPT\0"
    "BAD_PAD_BYTE_COUNT\0"
    "BAD_RSA_PARAMETERS\0"
    "BLOCK_TYPE_IS_NOT_01\0"
    "BLOCK_TYPE_IS_NOT_02\0"
    "BN_NOT_INITIALIZED\0"
    "CANNOT_RECOVER_MULTI_PRIME_KEY\0"
    "CRT_PARAMS_ALREADY_GIVEN\0"
    "CRT_VALUES_INCORRECT\0"
    "DATA_LEN_NOT_EQUAL_TO_MOD_LEN\0"
    "DATA_TOO_LARGE\0"
    "DATA_TOO_LARGE_FOR_KEY_SIZE\0"
    "DATA_TOO_LARGE_FOR_MODULUS\0"
    "DATA_TOO_SMALL\0"
    "DATA_TOO_SMALL_FOR_KEY_SIZE\0"
    "DIGEST_TOO_BIG_FOR_RSA_KEY\0"
    "D_E_NOT_CONGRUENT_TO_1\0"
    "D_OUT_OF_RANGE\0"
    "EMPTY_PUBLIC_KEY\0"
    "FIRST_OCTET_INVALID\0"
    "INCONSISTENT_SET_OF_CRT_VALUES\0"
    "INTERNAL_ERROR\0"
    "INVALID_MESSAGE_LENGTH\0"
    "KEY_SIZE_TOO_SMALL\0"
    "LAST_OCTET_INVALID\0"
    "MUST_HAVE_AT_LEAST_TWO_PRIMES\0"
    "NO_PUBLIC_EXPONENT\0"
    "NULL_BEFORE_BLOCK_MISSING\0"
    "N_NOT_EQUAL_P_Q\0"
    "OAEP_DECODING_ERROR\0"
    "ONLY_ONE_OF_P_Q_GIVEN\0"
    "OUTPUT_BUFFER_TOO_SMALL\0"
    "PADDING_CHECK_FAILED\0"
    "PKCS_DECODING_ERROR\0"
    "SLEN_CHECK_FAILED\0"
    "SLEN_RECOVERY_FAILED\0"
    "UNKNOWN_ALGORITHM_TYPE\0"
    "UNKNOWN_PADDING_TYPE\0"
    "VALUE_MISSING\0"
    "WRONG_SIGNATURE_LENGTH\0"
    "ALPN_MISMATCH_ON_EARLY_DATA\0"
    "ALPS_MISMATCH_ON_EARLY_DATA\0"
    "APPLICATION_DATA_INSTEAD_OF_HANDSHAKE\0"
    "APPLICATION_DATA_ON_SHUTDOWN\0"
    "APP_DATA_IN_HANDSHAKE\0"
    "ATTEMPT_TO_REUSE_SESSION_IN_DIFFERENT_CONTEXT\0"
    "BAD_ALERT\0"
    "BAD_CHANGE_CIPHER_SPEC\0"
    "BAD_DATA_RETURNED_BY_CALLBACK\0"
    "BAD_DH_P_LENGTH\0"
    "BAD_DIGEST_LENGTH\0"
    "BAD_ECC_CERT\0"
    "BAD_ECPOINT\0"
    "BAD_HANDSHAKE_RECORD\0"
    "BAD_HELLO_REQUEST\0"
    "BAD_HYBRID_KEYSHARE\0"
    "BAD_KEM_CIPHERTEXT\0"
    "BAD_LENGTH\0"
    "BAD_PACKET_LENGTH\0"
    "BAD_RSA_ENCRYPT\0"
    "BAD_SRTP_MKI_VALUE\0"
    "BAD_SRTP_PROTECTION_PROFILE_LIST\0"
    "BAD_SSL_FILETYPE\0"
    "BAD_WRITE_RETRY\0"
    "BIO_NOT_SET\0"
    "BLOCK_CIPHER_PAD_IS_WRONG\0"
    "CANNOT_HAVE_BOTH_PRIVKEY_AND_METHOD\0"
    "CANNOT_PARSE_LEAF_CERT\0"
    "CA_DN_LENGTH_MISMATCH\0"
    "CA_DN_TOO_LONG\0"
    "CCS_RECEIVED_EARLY\0"
    "CERTIFICATE_AND_PRIVATE_KEY_MISMATCH\0"
    "CERTIFICATE_VERIFY_FAILED\0"
    "CERT_CB_ERROR\0"
    "CERT_DECOMPRESSION_FAILED\0"
    "CERT_LENGTH_MISMATCH\0"
    "CHANNEL_ID_NOT_P256\0"
    "CHANNEL_ID_SIGNATURE_INVALID\0"
    "CIPHER_MISMATCH_ON_EARLY_DATA\0"
    "CIPHER_OR_HASH_UNAVAILABLE\0"
    "CLIENTHELLO_PARSE_FAILED\0"
    "CLIENTHELLO_TLSEXT\0"
    "CONNECTION_REJECTED\0"
    "CONNECTION_TYPE_NOT_SET\0"
    "COULD_NOT_PARSE_HINTS\0"
    "CUSTOM_EXTENSION_ERROR\0"
    "DATA_LENGTH_TOO_LONG\0"
    "DECRYPTION_FAILED\0"
    "DECRYPTION_FAILED_OR_BAD_RECORD_MAC\0"
    "DH_PUBLIC_VALUE_LENGTH_IS_WRONG\0"
    "DH_P_TOO_LONG\0"
    "DIGEST_CHECK_FAILED\0"
    "DOWNGRADE_DETECTED\0"
    "DTLS_MESSAGE_TOO_BIG\0"
    "DUPLICATE_EXTENSION\0"
    "DUPLICATE_KEY_SHARE\0"
    "DUPLICATE_SIGNATURE_ALGORITHM\0"
    "EARLY_DATA_NOT_IN_USE\0"
    "ECC_CERT_NOT_FOR_SIGNING\0"
    "ECH_REJECTED\0"
    "ECH_SERVER_CONFIG_AND_PRIVATE_KEY_MISMATCH\0"
    "ECH_SERVER_CONFIG_UNSUPPORTED_EXTENSION\0"
    "ECH_SERVER_WOULD_HAVE_NO_RETRY_CONFIGS\0"
    "EMPTY_HELLO_RETRY_REQUEST\0"
    "EMS_STATE_INCONSISTENT\0"
    "ENCRYPTED_LENGTH_TOO_LONG\0"
    "ERROR_ADDING_EXTENSION\0"
    "ERROR_IN_RECEIVED_CIPHER_LIST\0"
    "ERROR_PARSING_EXTENSION\0"
    "EXCESSIVE_MESSAGE_SIZE\0"
    "EXCESS_HANDSHAKE_DATA\0"
    "EXTRA_DATA_IN_MESSAGE\0"
    "FRAGMENT_MISMATCH\0"
    "GOT_NEXT_PROTO_WITHOUT_EXTENSION\0"
    "HANDSHAKE_FAILURE_ON_CLIENT_HELLO\0"
    "HANDSHAKE_NOT_COMPLETE\0"
    "HTTPS_PROXY_REQUEST\0"
    "HTTP_REQUEST\0"
    "INAPPROPRIATE_FALLBACK\0"
    "INCONSISTENT_CLIENT_HELLO\0"
    "INCONSISTENT_ECH_NEGOTIATION\0"
    "INVALID_ALPN_PROTOCOL\0"
    "INVALID_ALPN_PROTOCOL_LIST\0"
    "INVALID_ALPS_CODEPOINT\0"
    "INVALID_CLIENT_HELLO_INNER\0"
    "INVALID_COMMAND\0"
    "INVALID_COMPRESSION_LIST\0"
    "INVALID_DELEGATED_CREDENTIAL\0"
    "INVALID_ECH_CONFIG_LIST\0"
    "INVALID_ECH_PUBLIC_NAME\0"
    "INVALID_MESSAGE\0"
    "INVALID_OUTER_EXTENSION\0"
    "INVALID_OUTER_RECORD_TYPE\0"
    "INVALID_SCT_LIST\0"
    "INVALID_SIGNATURE_ALGORITHM\0"
    "INVALID_SSL_SESSION\0"
    "INVALID_TICKET_KEYS_LENGTH\0"
    "KEY_USAGE_BIT_INCORRECT\0"
    "LENGTH_MISMATCH\0"
    "MISSING_EXTENSION\0"
    "MISSING_KEY_SHARE\0"
    "MISSING_RSA_CERTIFICATE\0"
    "MISSING_TMP_DH_KEY\0"
    "MISSING_TMP_ECDH_KEY\0"
    "MIXED_SPECIAL_OPERATOR_WITH_GROUPS\0"
    "MTU_TOO_SMALL\0"
    "NEGOTIATED_ALPS_WITHOUT_ALPN\0"
    "NEGOTIATED_BOTH_NPN_AND_ALPN\0"
    "NEGOTIATED_TB_WITHOUT_EMS_OR_RI\0"
    "NESTED_GROUP\0"
    "NO_APPLICATION_PROTOCOL\0"
    "NO_CERTIFICATES_RETURNED\0"
    "NO_CERTIFICATE_ASSIGNED\0"
    "NO_CERTIFICATE_SET\0"
    "NO_CIPHERS_AVAILABLE\0"
    "NO_CIPHERS_PASSED\0"
    "NO_CIPHERS_SPECIFIED\0"
    "NO_CIPHER_MATCH\0"
    "NO_COMMON_SIGNATURE_ALGORITHMS\0"
    "NO_COMPRESSION_SPECIFIED\0"
    "NO_GROUPS_SPECIFIED\0"
    "NO_METHOD_SPECIFIED\0"
    "NO_PRIVATE_KEY_ASSIGNED\0"
    "NO_RENEGOTIATION\0"
    "NO_REQUIRED_DIGEST\0"
    "NO_SHARED_CIPHER\0"
    "NO_SHARED_GROUP\0"
    "NO_SUPPORTED_VERSIONS_ENABLED\0"
    "NULL_SSL_CTX\0"
    "NULL_SSL_METHOD_PASSED\0"
    "OCSP_CB_ERROR\0"
    "OLD_SESSION_CIPHER_NOT_RETURNED\0"
    "OLD_SESSION_PRF_HASH_MISMATCH\0"
    "OLD_SESSION_VERSION_NOT_RETURNED\0"
    "PARSE_TLSEXT\0"
    "PATH_TOO_LONG\0"
    "PEER_DID_NOT_RETURN_A_CERTIFICATE\0"
    "PEER_ERROR_UNSUPPORTED_CERTIFICATE_TYPE\0"
    "PRE_SHARED_KEY_MUST_BE_LAST\0"
    "PRIVATE_KEY_OPERATION_FAILED\0"
    "PROTOCOL_IS_SHUTDOWN\0"
    "PSK_IDENTITY_BINDER_COUNT_MISMATCH\0"
    "PSK_IDENTITY_NOT_FOUND\0"
    "PSK_NO_CLIENT_CB\0"
    "PSK_NO_SERVER_CB\0"
    "QUIC_INTERNAL_ERROR\0"
    "QUIC_TRANSPORT_PARAMETERS_MISCONFIGURED\0"
    "READ_TIMEOUT_EXPIRED\0"
    "RECORD_LENGTH_MISMATCH\0"
    "RECORD_TOO_LARGE\0"
    "RENEGOTIATION_EMS_MISMATCH\0"
    "RENEGOTIATION_ENCODING_ERR\0"
    "RENEGOTIATION_MISMATCH\0"
    "REQUIRED_CIPHER_MISSING\0"
    "RESUMED_EMS_SESSION_WITHOUT_EMS_EXTENSION\0"
    "RESUMED_NON_EMS_SESSION_WITH_EMS_EXTENSION\0"
    "SCSV_RECEIVED_WHEN_RENEGOTIATING\0"
    "SECOND_SERVERHELLO_VERSION_MISMATCH\0"
    "SERIALIZATION_INVALID_SSL\0"
    "SERIALIZATION_INVALID_SSL3_STATE\0"
    "SERIALIZATION_INVALID_SSL_AEAD_CONTEXT\0"
    "SERIALIZATION_INVALID_SSL_BUFFER\0"
    "SERIALIZATION_INVALID_SSL_CONFIG\0"
    "SERIALIZATION_UNSUPPORTED\0"
    "SERVERHELLO_TLSEXT\0"
    "SERVER_CERT_CHANGED\0"
    "SERVER_ECHOED_INVALID_SESSION_ID\0"
    "SESSION_ID_CONTEXT_UNINITIALIZED\0"
    "SESSION_MAY_NOT_BE_CREATED\0"
    "SHUTDOWN_WHILE_IN_INIT\0"
    "SIGNATURE_ALGORITHMS_EXTENSION_SENT_BY_SERVER\0"
    "SRTP_COULD_NOT_ALLOCATE_PROFILES\0"
    "SRTP_UNKNOWN_PROTECTION_PROFILE\0"
    "SSL3_EXT_INVALID_SERVERNAME\0"
    "SSLV3_ALERT_BAD_CERTIFICATE\0"
    "SSLV3_ALERT_BAD_RECORD_MAC\0"
    "SSLV3_ALERT_CERTIFICATE_EXPIRED\0"
    "SSLV3_ALERT_CERTIFICATE_REVOKED\0"
    "SSLV3_ALERT_CERTIFICATE_UNKNOWN\0"
    "SSLV3_ALERT_CLOSE_NOTIFY\0"
    "SSLV3_ALERT_DECOMPRESSION_FAILURE\0"
    "SSLV3_ALERT_HANDSHAKE_FAILURE\0"
    "SSLV3_ALERT_ILLEGAL_PARAMETER\0"
    "SSLV3_ALERT_NO_CERTIFICATE\0"
    "SSLV3_ALERT_UNEXPECTED_MESSAGE\0"
    "SSLV3_ALERT_UNSUPPORTED_CERTIFICATE\0"
    "SSL_CTX_HAS_NO_DEFAULT_SSL_VERSION\0"
    "SSL_HANDSHAKE_FAILURE\0"
    "SSL_SESSION_ID_CONTEXT_TOO_LONG\0"
    "SSL_SESSION_ID_TOO_LONG\0"
    "TICKET_ENCRYPTION_FAILED\0"
    "TLS13_DOWNGRADE\0"
    "TLSV1_ALERT_ACCESS_DENIED\0"
    "TLSV1_ALERT_BAD_CERTIFICATE_HASH_VALUE\0"
    "TLSV1_ALERT_BAD_CERTIFICATE_STATUS_RESPONSE\0"
    "TLSV1_ALERT_CERTIFICATE_REQUIRED\0"
    "TLSV1_ALERT_CERTIFICATE_UNOBTAINABLE\0"
    "TLSV1_ALERT_DECODE_ERROR\0"
    "TLSV1_ALERT_DECRYPTION_FAILED\0"
    "TLSV1_ALERT_DECRYPT_ERROR\0"
    "TLSV1_ALERT_ECH_REQUIRED\0"
    "TLSV1_ALERT_EXPORT_RESTRICTION\0"
    "TLSV1_ALERT_INAPPROPRIATE_FALLBACK\0"
    "TLSV1_ALERT_INSUFFICIENT_SECURITY\0"
    "TLSV1_ALERT_INTERNAL_ERROR\0"
    "TLSV1_ALERT_NO_APPLICATION_PROTOCOL\0"
    "TLSV1_ALERT_NO_RENEGOTIATION\0"
    "TLSV1_ALERT_PROTOCOL_VERSION\0"
    "TLSV1_ALERT_RECORD_OVERFLOW\0"
    "TLSV1_ALERT_UNKNOWN_CA\0"
    "TLSV1_ALERT_UNKNOWN_PSK_IDENTITY\0"
    "TLSV1_ALERT_UNRECOGNIZED_NAME\0"
    "TLSV1_ALERT_UNSUPPORTED_EXTENSION\0"
    "TLSV1_ALERT_USER_CANCELLED\0"
    "TLS_PEER_DID_NOT_RESPOND_WITH_CERTIFICATE_LIST\0"
    "TLS_RSA_ENCRYPTED_VALUE_LENGTH_IS_WRONG\0"
    "TOO_MANY_EMPTY_FRAGMENTS\0"
    "TOO_MANY_KEY_UPDATES\0"
    "TOO_MANY_WARNING_ALERTS\0"
    "TOO_MUCH_READ_EARLY_DATA\0"
    "TOO_MUCH_SKIPPED_EARLY_DATA\0"
    "UNABLE_TO_FIND_ECDH_PARAMETERS\0"
    "UNCOMPRESSED_CERT_TOO_LARGE\0"
    "UNEXPECTED_COMPATIBILITY_MODE\0"
    "UNEXPECTED_EXTENSION\0"
    "UNEXPECTED_EXTENSION_ON_EARLY_DATA\0"
    "UNEXPECTED_MESSAGE\0"
    "UNEXPECTED_OPERATOR_IN_GROUP\0"
    "UNEXPECTED_RECORD\0"
    "UNKNOWN_ALERT_TYPE\0"
    "UNKNOWN_CERTIFICATE_TYPE\0"
    "UNKNOWN_CERT_COMPRESSION_ALG\0"
    "UNKNOWN_CIPHER_RETURNED\0"
    "UNKNOWN_CIPHER_TYPE\0"
    "UNKNOWN_KEY_EXCHANGE_TYPE\0"
    "UNKNOWN_PROTOCOL\0"
    "UNKNOWN_SSL_VERSION\0"
    "UNKNOWN_STATE\0"
    "UNSAFE_LEGACY_RENEGOTIATION_DISABLED\0"
    "UNSUPPORTED_COMPRESSION_ALGORITHM\0"
    "UNSUPPORTED_ECH_SERVER_CONFIG\0"
    "UNSUPPORTED_ELLIPTIC_CURVE\0"
    "UNSUPPORTED_PROTOCOL\0"
    "UNSUPPORTED_PROTOCOL_FOR_CUSTOM_KEY\0"
    "WRONG_CERTIFICATE_TYPE\0"
    "WRONG_CIPHER_RETURNED\0"
    "WRONG_CURVE\0"
    "WRONG_ENCRYPTION_LEVEL_RECEIVED\0"
    "WRONG_MESSAGE_TYPE\0"
    "WRONG_SIGNATURE_TYPE\0"
    "WRONG_SSL_VERSION\0"
    "WRONG_VERSION_NUMBER\0"
    "WRONG_VERSION_ON_EARLY_DATA\0"
    "X509_LIB\0"
    "X509_VERIFICATION_SETUP_PROBLEMS\0"
    "BAD_VALIDITY_CHECK\0"
    "DECODE_FAILURE\0"
    "INVALID_KEY_ID\0"
    "INVALID_METADATA\0"
    "INVALID_METADATA_KEY\0"
    "INVALID_PROOF\0"
    "INVALID_TOKEN\0"
    "NO_KEYS_CONFIGURED\0"
    "NO_SRR_KEY_CONFIGURED\0"
    "OVER_BATCHSIZE\0"
    "SRR_SIGNATURE_ERROR\0"
    "TOO_MANY_KEYS\0"
    "AKID_MISMATCH\0"
    "BAD_X509_FILETYPE\0"
    "BASE64_DECODE_ERROR\0"
    "CANT_CHECK_DH_KEY\0"
    "CERT_ALREADY_IN_HASH_TABLE\0"
    "CRL_ALREADY_DELTA\0"
    "CRL_VERIFY_FAILURE\0"
    "DELTA_CRL_WITHOUT_CRL_NUMBER\0"
    "IDP_MISMATCH\0"
    "INVALID_DIRECTORY\0"
    "INVALID_FIELD_FOR_VERSION\0"
    "INVALID_FIELD_NAME\0"
    "INVALID_PARAMETER\0"
    "INVALID_POLICY_EXTENSION\0"
    "INVALID_PSS_PARAMETERS\0"
    "INVALID_TRUST\0"
    "INVALID_VERSION\0"
    "ISSUER_MISMATCH\0"
    "KEY_TYPE_MISMATCH\0"
    "KEY_VALUES_MISMATCH\0"
    "LOADING_CERT_DIR\0"
    "LOADING_DEFAULTS\0"
    "NAME_TOO_LONG\0"
    "NEWER_CRL_NOT_NEWER\0"
    "NO_CERTIFICATE_FOUND\0"
    "NO_CERTIFICATE_OR_CRL_FOUND\0"
    "NO_CERT_SET_FOR_US_TO_VERIFY\0"
    "NO_CRL_FOUND\0"
    "NO_CRL_NUMBER\0"
    "PUBLIC_KEY_DECODE_ERROR\0"
    "PUBLIC_KEY_ENCODE_ERROR\0"
    "SHOULD_RETRY\0"
    "SIGNATURE_ALGORITHM_MISMATCH\0"
    "UNKNOWN_KEY_TYPE\0"
    "UNKNOWN_PURPOSE_ID\0"
    "UNKNOWN_SIGID_ALGS\0"
    "UNKNOWN_TRUST_ID\0"
    "WRONG_LOOKUP_TYPE\0"
    "BAD_IP_ADDRESS\0"
    "BAD_OBJECT\0"
    "BN_DEC2BN_ERROR\0"
    "BN_TO_ASN1_INTEGER_ERROR\0"
    "CANNOT_FIND_FREE_FUNCTION\0"
    "DIRNAME_ERROR\0"
    "DISTPOINT_ALREADY_SET\0"
    "DUPLICATE_ZONE_ID\0"
    "ERROR_CONVERTING_ZONE\0"
    "ERROR_CREATING_EXTENSION\0"
    "ERROR_IN_EXTENSION\0"
    "EXPECTED_A_SECTION_NAME\0"
    "EXTENSION_EXISTS\0"
    "EXTENSION_NAME_ERROR\0"
    "EXTENSION_NOT_FOUND\0"
    "EXTENSION_SETTING_NOT_SUPPORTED\0"
    "EXTENSION_VALUE_ERROR\0"
    "ILLEGAL_EMPTY_EXTENSION\0"
    "ILLEGAL_HEX_DIGIT\0"
    "INCORRECT_POLICY_SYNTAX_TAG\0"
    "INVALID_BOOLEAN_STRING\0"
    "INVALID_EXTENSION_STRING\0"
    "INVALID_MULTIPLE_RDNS\0"
    "INVALID_NAME\0"
    "INVALID_NULL_ARGUMENT\0"
    "INVALID_NULL_NAME\0"
    "INVALID_NULL_VALUE\0"
    "INVALID_NUMBERS\0"
    "INVALID_OBJECT_IDENTIFIER\0"
    "INVALID_OPTION\0"
    "INVALID_POLICY_IDENTIFIER\0"
    "INVALID_PROXY_POLICY_SETTING\0"
    "INVALID_PURPOSE\0"
    "INVALID_SECTION\0"
    "INVALID_SYNTAX\0"
    "INVALID_VALUE\0"
    "ISSUER_DECODE_ERROR\0"
    "NEED_ORGANIZATION_AND_NUMBERS\0"
    "NO_CONFIG_DATABASE\0"
    "NO_ISSUER_CERTIFICATE\0"
    "NO_ISSUER_DETAILS\0"
    "NO_POLICY_IDENTIFIER\0"
    "NO_PROXY_CERT_POLICY_LANGUAGE_DEFINED\0"
    "NO_PUBLIC_KEY\0"
    "NO_SUBJECT_DETAILS\0"
    "ODD_NUMBER_OF_DIGITS\0"
    "OPERATION_NOT_DEFINED\0"
    "OTHERNAME_ERROR\0"
    "POLICY_LANGUAGE_ALREADY_DEFINED\0"
    "POLICY_PATH_LENGTH\0"
    "POLICY_PATH_LENGTH_ALREADY_DEFINED\0"
    "POLICY_WHEN_PROXY_LANGUAGE_REQUIRES_NO_POLICY\0"
    "SECTION_NOT_FOUND\0"
    "TRAILING_DATA_IN_EXTENSION\0"
    "UNABLE_TO_GET_ISSUER_DETAILS\0"
    "UNABLE_TO_GET_ISSUER_KEYID\0"
    "UNKNOWN_BIT_STRING_ARGUMENT\0"
    "UNKNOWN_EXTENSION\0"
    "UNKNOWN_EXTENSION_NAME\0"
    "UNKNOWN_OPTION\0"
    "UNSUPPORTED_OPTION\0"
    "USER_TOO_LONG\0"
    "";

