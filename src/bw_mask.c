#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include "header/bw.h"


unsigned char modifyBit_uint8 (unsigned char reg, int pos, int mode){
    if ((bool)mode)
        return ( reg | (1 << pos) );
    else
        return ( reg & ~(1 << pos) );
}


unsigned char extractNibble_uint8 (unsigned char reg, int pos){
    if ((bool)pos)
        return ( reg & 0xf0 );
    else
        return ( reg & 0x0f );
}

unsigned char toggleBit_uint8 (unsigned char reg, int pos){
    return ( reg ^ (1U << pos) );
}

unsigned char isKthBitSet(int reg, int pos){
    if (reg & (1 << pos))
        return 1;
    return 0;
}

unsigned int countSetBits (unsigned int reg){
    int i;
    int count = 0;
    while (reg){
        count += reg & 1;
        reg >> 1;
    }
    return count;
}

uint8_t set_bit_uint8 (uint8_t reg, uint8_t pos){
    return (reg | (1 << pos));
}

uint8_t clear_bit_uint8 (uint8_t reg, uint8_t pos){
    return (reg & ~(1 << pos));
}