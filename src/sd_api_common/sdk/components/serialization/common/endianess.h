#ifndef __PC_BLE_DRIVER_ENDIANNESS__
#define __PC_BLE_DRIVER_ENDIANNESS__


#include <stdint.h>

#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"

uint32_t ltoh_uint32_t(const uint32_t little);
uint32_t htol_uint32_t(const uint32_t host);
uint16_t ltoh_uint16_t(const uint16_t little);
uint16_t htol_uint16_t(const uint16_t host);

#endif

