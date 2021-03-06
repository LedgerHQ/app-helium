/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.6-dev */

#ifndef PB_HELIUM_BLOCKCHAIN_TXN_STAKE_VALIDATOR_V1_PB_H_INCLUDED
#define PB_HELIUM_BLOCKCHAIN_TXN_STAKE_VALIDATOR_V1_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
typedef struct _helium_blockchain_txn_stake_validator_v1 { 
    pb_callback_t address; 
    pb_callback_t owner; 
    uint64_t stake; 
    pb_callback_t owner_signature; 
    uint64_t fee; 
} helium_blockchain_txn_stake_validator_v1;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define helium_blockchain_txn_stake_validator_v1_init_default {{{NULL}, NULL}, {{NULL}, NULL}, 0, {{NULL}, NULL}, 0}
#define helium_blockchain_txn_stake_validator_v1_init_zero {{{NULL}, NULL}, {{NULL}, NULL}, 0, {{NULL}, NULL}, 0}

/* Field tags (for use in manual encoding/decoding) */
#define helium_blockchain_txn_stake_validator_v1_address_tag 1
#define helium_blockchain_txn_stake_validator_v1_owner_tag 2
#define helium_blockchain_txn_stake_validator_v1_stake_tag 3
#define helium_blockchain_txn_stake_validator_v1_owner_signature_tag 4
#define helium_blockchain_txn_stake_validator_v1_fee_tag 5

/* Struct field encoding specification for nanopb */
#define helium_blockchain_txn_stake_validator_v1_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, BYTES,    address,           1) \
X(a, CALLBACK, SINGULAR, BYTES,    owner,             2) \
X(a, STATIC,   SINGULAR, UINT64,   stake,             3) \
X(a, CALLBACK, SINGULAR, BYTES,    owner_signature,   4) \
X(a, STATIC,   SINGULAR, UINT64,   fee,               5)
#define helium_blockchain_txn_stake_validator_v1_CALLBACK pb_default_field_callback
#define helium_blockchain_txn_stake_validator_v1_DEFAULT NULL

extern const pb_msgdesc_t helium_blockchain_txn_stake_validator_v1_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define helium_blockchain_txn_stake_validator_v1_fields &helium_blockchain_txn_stake_validator_v1_msg

/* Maximum encoded size of messages (where known) */
/* helium_blockchain_txn_stake_validator_v1_size depends on runtime parameters */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
