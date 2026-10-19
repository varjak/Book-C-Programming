#include "exs.h"
#include <stdio.h>

#define MK_COLOR(r,g,b) (((((unsigned long) r << 8) | (unsigned long) g) << 8) | (unsigned long) b)

static void toggle_bit(int *i, int n);
static unsigned short int swap_bytes_1(unsigned short int a);
static unsigned short int swap_bytes_2(unsigned short int a);

void ex1(void) {
    {
        // a) 0 (+ has higher precedence than >>)
        const unsigned short i = 8, j = 9;
        printf("%d\n", i >> 1 + j >> 1);
    }

    {
        // b) 0
        const unsigned short i = 1;
        printf("%d\n", i & ~i);
    }

    {
        // c) 1
        const unsigned short i = 2, j = 1, k = 0;
        printf("%d\n", ~i & j ^ k);
    }

    {
        // d) 15
        const unsigned short i = 7, j = 8, k = 9;
        printf("%d\n", i ^ j & k);
    }
}

void ex2(void) {
    int i = 15;
    const int n = 4;
    toggle_bit(&i, n);
    printf("%d\n", i);
}

static void toggle_bit(int *i, const int n) {
    *i ^= (1 << n);
}

void ex3(void) {
    // It switches x and y! (it's like temp = x; x = y; y = temp;)
}

void ex4(void) {
    const int r = 255, g = 0, b = 255;
    const long c = MK_COLOR(r,g,b);
}

void ex6(void) {
    const unsigned short int x = 0x1467;
    const unsigned short int y = swap_bytes_2(x);
    printf("%hx\n", x);
    printf("%hx\n", y);
}

unsigned short int swap_bytes_1(const unsigned short int a) {
    const unsigned short int byte_1 = (a << 8);
    const unsigned short int byte_2 = (a >> 8);
    return byte_1 | byte_2;
}

unsigned short int swap_bytes_2(const unsigned short int a) {
    return (a << 8) | (a >> 8);
}

void ex8(void) {
    // a) it's a value that, in binary, has only 0's, except for the first n least significant digits, that are 1.
    // b) It extracts the n digits of i before the mº digit
}

void ex13(void) {
    // It turns the lowest-order digit 1 into 0.
    unsigned int n = 58;
    printf("%d\n", n);
    for (int i = 0; i < 6; i++) {
        n &= n - 1;
        printf("%d\n", n);
    }
}

void ex14(void) {
    struct float_type {unsigned int sign: 1; unsigned int exponent: 8; unsigned int fraction: 23;};
}

void ex15(void) {
    // a)  It's because flag was declared as an int, and not unsigned int. If the compiler treats it as an unsigned int,
    // 1 will indeed represent the decimal number 1. If however, the compiler treats it as a signed int, the first bit
    // should be reserved to tell the sign of the int (0 for positive and 1 for negative), and since that bit is 1, it
    // might interpret the number as -1.
    // b) This problem can be avoided by declaring flag as an unsigned int.
}
