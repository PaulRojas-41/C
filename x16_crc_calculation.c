/* [dev_ex16_formats] Formats test and crc32 algorithm placeholder*/

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "bitwise_lib.h"
#include "strings_lib.h"

int main()
{
    uint32_t crc32_table[] = {0xAABBCCDD,0x7788AADD};
    uint32_t *get_table_element = crc32_table;
    uint32_t crc32_bigEndian;

    
    printf("%x", *(get_table_element));

    /* Format to test the first byte to enter */
    crc32_bigEndian = (uint8_t)crc32_table[0];

    printf("\n%x", crc32_bigEndian);

    crc32_bigEndian = U32_BIG_ENDIAN((uint32_t)crc32_table[0]);
    
    printf("\n%x", crc32_bigEndian);

    *get_table_element = (uint8_t)crc32_bigEndian;

    printf("\n%x",*get_table_element);

    return 0;
}

uint8_t crc_stm32(const uint8_t crc_data)
{
    uint8_t init_crc = 0xFF;

    init_crc= init_crc ^ crc_data;

    for(int j= 0; j < 8; j++)
    {
        if(init_crc & 0x80)
            init_crc = (init_crc << 1) ^ 0xCB;
        else
            init_crc = init_crc <<  1;
    }

    return init_crc;
}