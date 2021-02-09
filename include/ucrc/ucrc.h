#pragma once

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

typedef struct ucrc_api_s ucrc_api_t;
typedef uint32_t ucrc_result_t;

typedef struct ucrc_settings_s {
    uint32_t width;
    uint32_t poly;
    uint32_t init;
    bool refIn;
    bool refOut;
    uint32_t xorOut;
    uint32_t residue;
} ucrc_settings_t;

typedef struct ucrc_desc_s {
    ucrc_api_t const* api;
    ucrc_settings_t const* settings;
    void* data;
} ucrc_desc_t;

typedef int (*ucrc_init_handle_t)(ucrc_desc_t* d);
typedef int (*ucrc_update_handle_t)(ucrc_desc_t* d, uint8_t const* data, size_t size);
typedef int (*ucrc_complete_handle_t)(ucrc_desc_t* d, ucrc_result_t* r);
typedef int (*ucrc_deinit_handle_t)(ucrc_desc_t* d);

typedef struct ucrc_api_s {
    ucrc_init_handle_t init;
    ucrc_update_handle_t update;
    ucrc_complete_handle_t complete;
    ucrc_deinit_handle_t deinit;
} ucrc_api_t;


#define ucrc_desc_create(_api, _settings, _data) \
    (ucrc_desc_t) { \
        .api = &_api, \
        .settings = &_settings, \
        .data = &_data, \
    }

int ucrc_init(ucrc_desc_t* d);
int ucrc_update(ucrc_desc_t* d, uint8_t const* data, size_t size);
int ucrc_complete(ucrc_desc_t* d, ucrc_result_t* r);
int ucrc_deinit(ucrc_desc_t* d);
