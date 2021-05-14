/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.6-dev */

#ifndef PB_HELIUM_BLOCKCHAIN_TXN_REWARDS_V1_PB_H_INCLUDED
#define PB_HELIUM_BLOCKCHAIN_TXN_REWARDS_V1_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
typedef enum _helium_blockchain_txn_reward_v1_Type { 
    helium_blockchain_txn_reward_v1_Type_securities = 0, 
    helium_blockchain_txn_reward_v1_Type_data_credits = 1, 
    helium_blockchain_txn_reward_v1_Type_poc_challengees = 2, 
    helium_blockchain_txn_reward_v1_Type_poc_challengers = 3, 
    helium_blockchain_txn_reward_v1_Type_poc_witnesses = 4, 
    helium_blockchain_txn_reward_v1_Type_consensus = 5 
} helium_blockchain_txn_reward_v1_Type;

/* Struct definitions */
typedef struct _helium_blockchain_txn_reward_v1 { 
    pb_callback_t account; 
    pb_callback_t gateway; 
    uint64_t amount; 
    helium_blockchain_txn_reward_v1_Type type; 
} helium_blockchain_txn_reward_v1;

typedef struct _helium_blockchain_txn_rewards_v1 { 
    uint64_t start_epoch; 
    uint64_t end_epoch; 
    pb_callback_t rewards; 
} helium_blockchain_txn_rewards_v1;


/* Helper constants for enums */
#define _helium_blockchain_txn_reward_v1_Type_MIN helium_blockchain_txn_reward_v1_Type_securities
#define _helium_blockchain_txn_reward_v1_Type_MAX helium_blockchain_txn_reward_v1_Type_consensus
#define _helium_blockchain_txn_reward_v1_Type_ARRAYSIZE ((helium_blockchain_txn_reward_v1_Type)(helium_blockchain_txn_reward_v1_Type_consensus+1))


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define helium_blockchain_txn_reward_v1_init_default {{{NULL}, NULL}, {{NULL}, NULL}, 0, _helium_blockchain_txn_reward_v1_Type_MIN}
#define helium_blockchain_txn_rewards_v1_init_default {0, 0, {{NULL}, NULL}}
#define helium_blockchain_txn_reward_v1_init_zero {{{NULL}, NULL}, {{NULL}, NULL}, 0, _helium_blockchain_txn_reward_v1_Type_MIN}
#define helium_blockchain_txn_rewards_v1_init_zero {0, 0, {{NULL}, NULL}}

/* Field tags (for use in manual encoding/decoding) */
#define helium_blockchain_txn_reward_v1_account_tag 1
#define helium_blockchain_txn_reward_v1_gateway_tag 3
#define helium_blockchain_txn_reward_v1_amount_tag 4
#define helium_blockchain_txn_reward_v1_type_tag 5
#define helium_blockchain_txn_rewards_v1_start_epoch_tag 1
#define helium_blockchain_txn_rewards_v1_end_epoch_tag 2
#define helium_blockchain_txn_rewards_v1_rewards_tag 3

/* Struct field encoding specification for nanopb */
#define helium_blockchain_txn_reward_v1_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, BYTES,    account,           1) \
X(a, CALLBACK, SINGULAR, BYTES,    gateway,           3) \
X(a, STATIC,   SINGULAR, UINT64,   amount,            4) \
X(a, STATIC,   SINGULAR, UENUM,    type,              5)
#define helium_blockchain_txn_reward_v1_CALLBACK pb_default_field_callback
#define helium_blockchain_txn_reward_v1_DEFAULT NULL

#define helium_blockchain_txn_rewards_v1_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT64,   start_epoch,       1) \
X(a, STATIC,   SINGULAR, UINT64,   end_epoch,         2) \
X(a, CALLBACK, REPEATED, MESSAGE,  rewards,           3)
#define helium_blockchain_txn_rewards_v1_CALLBACK pb_default_field_callback
#define helium_blockchain_txn_rewards_v1_DEFAULT NULL
#define helium_blockchain_txn_rewards_v1_rewards_MSGTYPE helium_blockchain_txn_reward_v1

extern const pb_msgdesc_t helium_blockchain_txn_reward_v1_msg;
extern const pb_msgdesc_t helium_blockchain_txn_rewards_v1_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define helium_blockchain_txn_reward_v1_fields &helium_blockchain_txn_reward_v1_msg
#define helium_blockchain_txn_rewards_v1_fields &helium_blockchain_txn_rewards_v1_msg

/* Maximum encoded size of messages (where known) */
/* helium_blockchain_txn_reward_v1_size depends on runtime parameters */
/* helium_blockchain_txn_rewards_v1_size depends on runtime parameters */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif