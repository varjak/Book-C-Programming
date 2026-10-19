#include <stdio.h>
#include "exs.h"

void ex2(void) {
    // It depends on the C standard.
    // In C89, if either value of a division is negative, the result could be rounded either up or down.
    // So -9 / 7 could be -1 or -2.
    // In C99, it's always rounded towards zero.
    // So -9 / 7 is -1.
}

void ex9(void) {
    {
        // a) 63 78
        int i = 7, j = 8;
        i *= j + 1;
        printf("%d %d\n", i, j);
    }
    {
        // b) 3 2 1
        int i, j, k;
        i = j = k = 1;
        i += j += k;
        printf("%d %d %d\n", i, j, k);
    }
    {
        // c) 2 -1 3
        int i, j, k;
        i = 1; j = 2; k = 3;
        i -= j -= k;
        printf("%d %d %d\n", i, j, k);
    }
    {
        // d) 0 0 0
        int i, j, k;
        i = 2; j = 1; k = 0;
        i *= j *= k;
        printf("%d %d %d\n", i, j, k);
    }
}

void ex11(void) {
    {
        // a)
        int i = 1;
        printf("%d ", i++ - 1);
        printf("%d", i);
    }
    {
        // b)
        int i = 10; int j = 5;
        printf("%d ", i++ - ++j);
        printf("%d %d", i, j);
    }
    {
        // c)
        int i = 7;
        int j = 8;
        printf("%d ", i++ - --j);
        printf("%d %d", i, j);
    }
    {
        // d)
        int i = 3;
        int j = 4;
        int k = 5;
        printf("%d ", i++ - j++ + --k);
        printf("%d %d %d", i, j, k);
    }
}

void ex13(void) {
    // It's ++i. The value (i+=1) returns is the updated value of i. The value of ++i is also the updated value of i,
    // while i++ returns the value of i before the update, and then updates it, before the end of statement.
}