#ifndef BW_H_
#define BW_H_


//To set or cloear a specific Bit in a register
unsigned char modifyBit (unsigned char, int ,int);

//To extract a nibble from a 8-bit register
unsigned char extractNibble (unsigned char, int);

//To toggle a bit in a position
unsigned char toggleBit_uint8 (unsigned char, int);

//To check if the K-th bit is set
unsigned char isKthBitSet (int, int);

//To count the number of set bits in a register
unsigned int countSetBits (unsigned int);

#endif