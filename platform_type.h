// platform_type.h.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#ifdef PLATFORM_TYPE_H_
#define PLATFORM_TYPE_H_
#endif // PLATFORM_TYPE_H_

#include <iostream>
#include <stdbool.h>
#include <stdint.h>

#ifndef _bool
#define _bool unsigned char
#endif


#define CPU_TYPE  CPU_TYPE_32
#define CPU_BIT_ORDER  MSB_FIRST
#define CPU_BYTE_ORDER  HIGH_BYTE_FIRST

#ifndef FALSE
#define FALSE (boolean)false 
#endif // FALSE

#ifndef TRUE
#define TRUE (boolean)true 
#endif // TRUE


typedef _bool      boolean;
typedef int8_t     sint8;
typedef uint8_t    uint8;
typedef char       char_L;
typedef int16_t    sint16;
typedef uint16_t   uint16;
typedef int32_t    sint32;
typedef uint32_t   uint32;
typedef int64_t    sint64;
typedef uint64_t   uint64;

typedef volatile int8_t     vint8_t;
typedef volatile uint8_t    vuint8_t;
typedef volatile int16_t    vint16_t;
typedef volatile uint16_t   vuint16_t;
typedef volatile int32_t    vint32_t;
typedef volatile uint32_t   vuint32_t;
typedef volatile int64_t    vint64_t;
typedef volatile uint64_t   vuint64_t;

int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
