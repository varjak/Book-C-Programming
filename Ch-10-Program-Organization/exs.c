#include "exs.h"

void ex1(void) {
    // a) (f scope:) a, b, c
    // b) a, d
    // c) a, d, e
    // d) a, f
}

void ex3(void) {
    // Theoretically infinite:
    {
        int i = 1;
    }

    {
        int i = 2;
    }

    {
        // ...
    }
}
