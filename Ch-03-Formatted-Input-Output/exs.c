#include <stdio.h>
#include "exs.h"

void ex01(void) {
    /* a)     86, 1040
     * b)   3.02530e+1
     * c) 83.1620
     * d) 1.0e-6
     */
    printf("%6d,%4d", 86, 1040);
    printf("\n");
    printf("%#-6.2g", .0000009979);
}

void ex02(void) {
    const float x = 154.7628f;
    // a)
    printf("%-8.1e", x);
    printf("\n");
    // b)
    printf("%10.6e", x);
    printf("\n");
    // c)
    printf("%-8.3f", x);
    printf("\n");
    // d)
    printf("%6.0f", x);
}

void ex03(void) {

    int x1, y1, z1, x2, y2, z2;

    // a) Equal
    // scanf("%d", &x);
    // scanf(" %d", &y);
    // printf("x = %d\n", x);
    // printf("y = %d", y);

    // b) Different
    scanf("%d-%d-%d", &x1, &y1, &z1);
    scanf(" %d -%d -%d", &x2, &y2, &z2);
    printf("res = %d %d %d\n", x1, y1, z1);
    printf("res = %d %d %d", x2, y2, z2);
}

void ex04(void) {
    int i, j;
    float x;
    scanf( "%d%f%d" , &i, &x, &j);

    // 10 0.3 5
    printf("%d %f %d", i, x, j);
}

void ex05(void) {
    int i;
    float x, y;
    scanf( "%f%d%f" , &x, &i, &y);

    // 12.300000 45 0.600000
    printf("%f %d %f", x, i, y);
}
