/* [dev_ex15_pragma_structs_bitfields_unions] Struct padding, bit field test and union test */

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "bitwise_lib.h"

union address{
    uint16_t shortaddr;
    uint32_t longaddr;
};

struct datapkt{
    uint8_t crc: 4;
    uint8_t flag2:2;
    uint8_t data2:8;
    uint8_t data1:8;
    uint8_t ID:4;
    uint8_t Header:4;
    uint8_t flag1:1; 
};

struct Packet {
    uint32_t crc : 2;
    uint32_t status: 1;
    uint32_t payload: 12;
    uint32_t bat: 3;
    uint32_t sensor: 3;
    uint32_t longaddr: 8;
    uint32_t shortaddr: 2;
    uint32_t addrmode: 1;
};

struct CarModel{
    uint32_t carModel;
    uint32_t carPrice;
    uint32_t carMaxSpeed;
    float carWeight;
};

#pragma pack(1)
typedef struct{
    int age;
    char name1;
    char name2;
    char name3;
    int num;
}userD_t;

int main(void) 
{
    printf("Mem in bytes of struct: %lld",sizeof(struct CarModel)); /* 16 bytes will print */
    printf("\nTypedef size: %lld",sizeof(userD_t));

    /* access to union */
    union address myaddress;

    myaddress.shortaddr = 0xAABB;
    myaddress.longaddr = 0xCCCCEEEE;

    printf("\n%X\n", myaddress.shortaddr);
    printf("\n%X\n", myaddress.longaddr);

    /* access to packet bitfields */
    uint32_t packet_frame = 34; /* 0010 0000 */
    uint32_t packet_frame2 = 32;
    struct datapkt myPacket;
    struct Packet  myPacket2;
    
    myPacket.crc = (uint8_t)(packet_frame & 0xF); /* 0000 */
    myPacket.flag2 = (uint8_t)((packet_frame >> 4) & 0x3); /* 00 0000 */
    myPacket.data2 = (uint8_t)((packet_frame >> 6) & 0xFF); /* 00000000 00 0000 */
    myPacket.data1 = (uint8_t)((packet_frame >> 14)& 0xFF); /* 00000000 00000000 00 0000 */
    myPacket.ID    = (uint8_t)((packet_frame >> 22)& 0x0F); /* 0000 00000000 00000000 00 0000 */
    myPacket.Header= (uint8_t)((packet_frame >> 26)& 0x0F); /* 0000 0000 00000000 00000000 00 0000 */
    myPacket.flag1 = (uint8_t)((packet_frame >> 30)& 0x01); /* 0 0000 0000 00000000 00000000 00 0000 */

    myPacket2.crc = (uint8_t)(packet_frame2 & 0x03); /* 00*/
    myPacket2.status = (uint8_t)((packet_frame2 >> 2) & 0x01); /* 0 00*/
    myPacket2.payload= (uint8_t)((packet_frame2 >> 3) & 0xFFF); /* 000000000000 0 00 */
    myPacket2.bat    = (uint8_t)((packet_frame2 >> 15)& 0x07); /* 000 000000000000 0 00 */
    myPacket2.sensor = (uint8_t)((packet_frame2 >> 18)& 0x07); /* 000 000 000000000000 0 00 */
    myPacket2.longaddr=(uint8_t)((packet_frame2 >> 21)& 0xFF); /* 00000000 000 000 000000000000 0 00 */
    myPacket2.shortaddr=(uint8_t)((packet_frame2>> 29)& 0x03); /* 00 00000000 000 000 000000000000 0 00 */
    myPacket2.addrmode = (uint8_t)((packet_frame2>>31)&0x01); /* 0 00 00000000 000 000 000000000000 0 00 */

    printf("crc: %x\n",myPacket2.crc);
    printf("status: %x\n",myPacket2.status);
    printf("payload: %x\n",myPacket2.payload);
    printf("bat: %x\n",myPacket2.bat);
    printf("sensor: %x\n",myPacket2.sensor);
    printf("longaddr: %x\n",myPacket2.longaddr);
    printf("shortaddr: %x\n",myPacket2.shortaddr);
    printf("addrmode: %x\n",myPacket2.addrmode);

    print_bit(sizeof(myPacket2),&myPacket2);

    return 0;
}