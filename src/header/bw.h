#ifndef BW_H_
#define BW_H_


//To set or cloear a specific Bit in a register
unsigned char modifyBit (unsigned char, int ,int);

//To extract a nibble from a 8-bit register
unsigned char extractNibble (unsigned char, int);

//To toggle a bit in a position
unsigned char toggleBit_uint8 (unsigned char, int);




#endif