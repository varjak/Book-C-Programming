#include <stdio.h>
#include "exs.h"

void ex3(void) {
    // 5 4 3 2

    int i, j;
    for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1) {
        printf("j = %d ", j);
        printf("i = %d\n", i);
    }
}

void ex4(void) {
    // c) - it increments i at the start of every loop
}

void ex8(void) {
    // 10 5 3 2 1 1 1...

    int i;
    for (i = 10; i >= 1; i /= 2)
        printf("%d ", i++);
}

void ex10(void) {

    // int i, sum = 0, n = 0;
    // while (sum < 10) {
    //     printf("Enter a number: ");
    //     scanf("%d", &i);
    //     if (i == 0)
    //         continue;
    //     sum += i;
    //     n++;
    // }

    int i, sum = 0, n = 0;
    while (sum < 10) {
        printf("Enter a number: ");
        scanf("%d", &i);
        if (i == 0)
            goto end_of_iteration;
        sum += i;
        n++;
        end_of_iteration: ;
    }
}

void ex12(void) {

    const int n = 20;
    for (int d = 2; (d * d) <= n; d++)
        if (n % d == 0)
            break;
}

void ex13(void) {
    int n, m = 10;
    for (n = 0; m > 0; n++, m /= 2)
        ;

    printf("n = %d; m = %d\n", n, m);

    // int n, m = 10;
    // for (n = 0; m > 0; n++)
    //      m /= 2;
    //
    // printf("n = %d; m = %d\n", n, m);
}

void ex14(void) {
    const int n = 10;
    if (n % 2 == 0)
        printf("n is even\n");
}