#include <stdio.h>
#include "prs.h"

void pr01(void) {

    int i;
    printf("Enter a two-digit number: ");
    scanf("%d", &i);

    const int d1 = i / 10;
    const int d2 = i % 10;

    printf("The reversal is: %d%d",d2, d1);
}

void pr02(void) {

    int i;
    printf("Enter a three-digit number: ");
    scanf("%d", &i);

    const int d1 = (i / 100) % 10;
    const int d2 = (i / 10) % 10;
    const int d3 = (i / 1) % 10;

    printf("The reversal is: %d%d%d", d3, d2, d1);

}