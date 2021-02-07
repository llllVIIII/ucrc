#include "ucrc/ucrc_settings_crc8.h"

const ucrc_settings_t ucrc_settings_crc8_crc8 = {
    .width = 8,
    .poly = 0x07,
    .init = 0x00,
    .refIn = false,
    .refOut = false,
    .xorOut = 0x00,
    .residue = 0x00
};

const ucrc_settings_t ucrc_settings_crc8_autosar = {
    .width = 8,
    .poly = 0x2F,
    .init = 0xFF,
    .refIn = false,
    .refOut = false,
    .xorOut = 0xFF,
    .residue = 0x42
};

const ucrc_settings_t ucrc_settings_crc8_bluetooth = {
    .width = 8,
    .poly = 0xa7,
    .init = 0x00,
    .refIn = true,
    .refOut = true,
    .xorOut = 0x00,
    .residue = 0x00
};

const ucrc_settings_t ucrc_settings_crc8_darc = {
    .width = 8,
    .poly = 0x39,
    .init = 0x00,
    .refIn = true,
    .refOut = true,
    .xorOut = 0x00,
    .residue = 0x00
};

const ucrc_settings_t ucrc_settings_crc8_ebu = {
    .width = 8,
    .poly = 0x1d,
    .init = 0xff,
    .refIn = true,
    .refOut = true,
    .xorOut = 0x00,
    .residue = 0x00
};

const ucrc_settings_t ucrc_settings_crc8_icode = {
    .width = 8,
    .poly = 0x1d,
    .init = 0xfd,
    .refIn = false,
    .refOut = false,
    .xorOut = 0x00,
    .residue = 0x00
};

const ucrc_settings_t ucrc_settings_crc8_maxim = {
    .width = 8,
    .poly = 0x31,
    .init = 0x00,
    .refIn = true,
    .refOut = true,
    .xorOut = 0x00,
    .residue = 0x00
};

const ucrc_settings_t ucrc_settings_crc8_opensafety = {
    .width = 8,
    .poly = 0x2f,
    .init = 0x00,
    .refIn = false,
    .refOut = false,
    .xorOut = 0x00,
    .residue = 0x00
};

const ucrc_settings_t ucrc_settings_crc8_sae_j1850 = {
    .width = 8,
    .poly = 0x1d,
    .init = 0xff,
    .refIn = false,
    .refOut = false,
    .xorOut = 0xff,
    .residue = 0xc4
};
