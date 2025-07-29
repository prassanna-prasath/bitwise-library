#ifndef BW_H_
#define BW_H_


//To set or cloear a specific Bit in a register
unsigned char modifyBit_uint8 (unsigned char, int ,int);

//To extract a nibble from a 8-bit register
unsigned char extractNibble_uint8 (unsigned char, int);

//To toggle a bit in a position
unsigned char toggleBit_uint8 (unsigned char, int);

//To check if the K-th bit is set
unsigned char isKthBitSet (int, int);

//To count the number of set bits in a register
unsigned int countSetBits (unsigned int);

//To set a bit in an 8-bit register
uint8_t set_bit_uint8 (uint8_t, uint8_t);
#endif