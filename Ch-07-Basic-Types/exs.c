#include "exs.h"

void ex3(void) {
    // b)
    int x = 3;
    short unsigned int y = 4;
    long double z = 3.0;
    unsigned long m = 0;
}

void ex4(void) {
    // d)
}

void ex10(void) {
    // unsigned int (in a type clash between int and unsigned int, unsigned int wins)
}

void ex12(void) {
    // i turns to float. i and f are added. the result turns to double. the result is stored in d.
}

void ex14(void) {
    // I think that if f is too large or too little (large negative) to be cast into an int, (int) f may lead to undefined behaviour.
}

