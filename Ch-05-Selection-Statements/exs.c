#include <stdio.h>
#include "exs.h"

void ex2(void) {
    {
        // a)
        // 1
    }
    {
        // b)
        // 1
    }
    {
        // c)
        // 1
    }
    {
        // d)
        // 1
    }
}

void ex3(void) {
    {
        // a)
        // 1
        // 3 4 5
        int i = 3 ; int j = 4 ; int k = 5;
        printf( "%d ", i < j || ++j < k);
        printf("%d %d %d", i, j, k);
    }
    {
        // b)
        // 0
        // 7 8 9
        int i = 7 ; int j = 8 ; int k = 9;
        printf( "%d ", i - 7 && j++ < k);
        printf("%d %d %d", i, j, k);
    }
    {
        // c)
        // 1
        // 8 8 9
        int i = 7 ; int j = 8 ; int k = 9;
        printf( "%d ", (i = j) || (j = k));
        printf("%d %d %d", i, j, k);
    }
    {
        // d)
        // 1
        // 2 1 1
        int i = 1; int j = 1; int k = 1;
        printf( "%d ", ++i || ++j && ++k);
        printf("%d %d %d", i, j, k);
    }

}

void ex4(void) {
    // i < j ? -1 : (i == j ? 0 : 1);
    // const int i = 2, j = 1;
    // printf("%d", i < j ? -1 : (i == j ? 0 : 1));
}

void ex5(void) {
    //  Yes, and it will be true. But in fact, it will always be true.
    int n = 20;
    if ((n >= 1) <= 10)
        printf ( "n is between 1 and 10\n");
}

void ex6(void) {
    // It's legal, but it will be false except for n = -9 (and hence not work as is intended)
}

void ex10(void) {
    // onetwo
}