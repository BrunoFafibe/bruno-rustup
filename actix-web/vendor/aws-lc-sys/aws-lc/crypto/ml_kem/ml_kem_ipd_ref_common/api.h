#ifndef API_H
#define API_H

#include <stdint.h>
#include <openssl/base.h>

int ml_kem_512_ref_keypair_derand(uint8_t *pk, uint8_t *sk, const uint8_t *coins);
int ml_kem_512_ref_keypair(uint8_t *pk, uint8_t *sk);
int ml_kem_512_ref_enc_derand(uint8_t *ct, uint8_t *ss, const uint8_t *pk, const uint8_t *coins);
int ml_kem_512_ref_enc(uint8_t *ct, uint8_t *ss, const uint8_t *pk);
int ml_kem_512_ref_dec(uint8_t *ss, const uint8_t *ct, const uint8_t *sk);

int ml_kem_768_ref_keypair_derand(uint8_t *pk, uint8_t *sk, const uint8_t *coins);
int ml_kem_768_ref_keypair(uint8_t *pk, uint8_t *sk);
int ml_kem_768_ref_enc_derand(uint8_t *ct, uint8_t *ss, const uint8_t *pk, const uint8_t *coins);
int ml_kem_768_ref_enc(uint8_t *ct, uint8_t *ss, const uint8_t *pk);
int ml_kem_768_ref_dec(uint8_t *ss, const uint8_t *ct, const uint8_t *sk);

int ml_kem_1024_ref_keypair_derand(uint8_t *pk, uint8_t *sk, const uint8_t *coins);
int ml_kem_1024_ref_keypair(uint8_t *pk, uint8_t *sk);
int ml_kem_1024_ref_enc_derand(uint8_t *ct, uint8_t *ss, const uint8_t *pk, const uint8_t *coins);
int ml_kem_1024_ref_enc(uint8_t *ct, uint8_t *ss, const uint8_t *pk);
int ml_kem_1024_ref_dec(uint8_t *ss, const uint8_t *ct, const uint8_t *sk);

#endif
