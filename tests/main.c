#include <stdio.h>
#include "ucrc/ucrc.h"
#include "ucrc/ucrc_crc8.h"
#include "ucrc/ucrc_settings_crc8.h"

int main(int argc, char const *argv[])
{
    (void)argc;
    (void)argv;

    ucrc_result_t r = {0};
    uint8_t data[] = {0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39};
    ucrc_desc_t d = ucrc_desc_create(ucrc_api_crc8, 
                                     ucrc_settings_crc8_crc8, 
                                     (ucrc_crc8_data_t){0});

    ucrc_init(&d);
    ucrc_update(&d, data, sizeof(data));
    ucrc_complete(&d, &r);
    ucrc_deinit(&d);

    printf("crc = %X\n", r);

    return 0;
}
