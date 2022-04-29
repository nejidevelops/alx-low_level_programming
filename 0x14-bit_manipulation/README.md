# 0x14-bit_manipulation

## Overview

This project involves creation of various C-functions and C-programs that make use of bit manipulation concepts in the C-programming language.

## Files

### main.h

 Project header file that contains all function prototypes for functions described below.

### 0-binary_to_uint.c

 This is a function that converts a binary number to an `unsigned int`.

 Prototype: `unsigned int binary_to_uint(const char *b);`
 - `b` points to a string of `0` and `1` chars
 - The function returns:
   - The converted number or 0 if
     - there is one or more chars in the string `b` that is not `0` or `1`
     - `b` is `NULL`

### 1-print_binary.c

 This function prints the binary representation of a number.

 Prototype: `void print_binary(unsigned long int n);`

 The following were were not allowed to be used in the function:
 - arrays
 - `malloc` function
 - `%` and `/` operators

### 2-get_bit.c

 This function returns the value of a bit at a given index.

 Prototype: `int get_bit(unsigned long int n, unsigned int index);`
 - `index` is the index, starting from 0, of the bit to obtain
 - Returns the value of the bit at index `index` or `-1` if an error occurs

### 3-set_bit.c

 This function sets the value of a bit to `1` at a given index

 Prototype: `int set_bit(unsigned long int *n, unsigned int index);`
 - `index` is the index, starting from 0, of the bit to be set.
 - Returns: `1` if the function is successful
            `-1` if an error occurs

### 4-clear_bit.c

 This function sets the value of a bit to `0` at a given index.

 Prototype: `int clear_bit(unsigned long int *n, unsigned int index);`
 - `index` is the index, starting from 0, of the bit to be set.
 - Returns: `1` if the function is successful
            `-1` if an error occured

### 5-flip_bits.c

 This function returns the number of bits that will need to be flipped to get from one number to another.

 Prototype: `unsigned int flip_bits(unsiged long int n, unsigned long int m);`
 - The `%` and `/` operators were forbidden for use

### 100-get_endianness.c

 This function checks the endianness

 Prototype: `int get_endianness(void);`
 - Returns: `0` if big endian, `1` if little endian

### 101-password

 This file contains the password for the [crackme3](https://github.com/holbertonschool/0x13.c "crackme3") program.