/* Copyright (c) 2016, The Tor Project, Inc. */
/* See LICENSE for licensing information */

/**
 * \file hs_intropoint.h
 * \brief Header file for hs_intropoint.c.
 **/

#ifndef TOR_HS_INTRO_H
#define TOR_HS_INTRO_H

/* Authentication key type in an ESTABLISH_INTRO cell. */
enum hs_intro_auth_key_type {
  HS_INTRO_AUTH_KEY_TYPE_LEGACY0 = 0x00,
  HS_INTRO_AUTH_KEY_TYPE_LEGACY1 = 0x01,
  HS_INTRO_AUTH_KEY_TYPE_ED25519 = 0x02,
};

/* INTRODUCE_ACK status code. */
typedef enum {
  HS_INTRO_ACK_STATUS_SUCCESS    = 0x0000,
  HS_INTRO_ACK_STATUS_UNKNOWN_ID = 0x0001,
  HS_INTRO_ACK_STATUS_BAD_FORMAT = 0x0002,
  HS_INTRO_ACK_STATUS_CANT_RELAY = 0x0003,
} hs_intro_ack_status_t;

int hs_intro_received_establish_intro(or_circuit_t *circ,
                                      const uint8_t *request,
                                      size_t request_len);
int hs_intro_received_introduce1(or_circuit_t *circ, const uint8_t *request,
                                 size_t request_len);

MOCK_DECL(int, hs_intro_send_intro_established_cell,(or_circuit_t *circ));

/* also used by rendservice.c */
int hs_intro_circuit_is_suitable_for_establish_intro(const or_circuit_t *circ);

#ifdef HS_INTROPOINT_PRIVATE

#include "cell_establish_intro.h"
#include "cell_introduce1.h"

STATIC int
verify_establish_intro_cell(const hs_cell_establish_intro_t *out,
                            const uint8_t *circuit_key_material,
                            size_t circuit_key_material_len);

STATIC void
get_auth_key_from_cell(ed25519_public_key_t *auth_key_out,
                       unsigned int cell_type, const void *cell);

STATIC int introduce1_cell_is_legacy(const uint8_t *request);
STATIC int handle_introduce1(or_circuit_t *client_circ,
                             const uint8_t *request, size_t request_len);
STATIC int validate_introduce1_parsed_cell(const hs_cell_introduce1_t *cell);
STATIC int circuit_is_suitable_for_introduce1(const or_circuit_t *circ);

#endif /* HS_INTROPOINT_PRIVATE */

#endif /* TOR_HS_INTRO_H */

