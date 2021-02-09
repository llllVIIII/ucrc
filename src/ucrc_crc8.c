#include "ucrc/ucrc_crc8.h"
#include <stdio.h>

int init(ucrc_desc_t* h)
{
    (void)h;
    printf("%s::%s\n", __FILE__, __func__);
    return 0;
}

int update(ucrc_desc_t* h, uint8_t const* data, size_t size)
{
    (void)h;
    (void)data;
    (void)size;
    printf("%s::%s\n", __FILE__, __func__);
    return 0;
}

int complete(ucrc_desc_t* h, ucrc_result_t* r)
{
    (void)h;
    (void)r;
    printf("%s::%s\n", __FILE__, __func__);
    return 0;
}

int deinit(ucrc_desc_t* h)
{
    (void)h;
    printf("%s::%s\n", __FILE__, __func__);
    return 0;
}

const ucrc_api_t ucrc_api_crc8 = {
    .init = init,
    .update = update,
    .complete = complete,
    .deinit = deinit,
};
