#pragma once

#include "ucrc/ucrc.h"

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

typedef struct ucrc_crc8_data_s {
    uint32_t reg;
    uint8_t* lut;
    size_t lut_size;
} ucrc_crc8_data_t;

extern const ucrc_backend_t ucrc_backend_crc8;
