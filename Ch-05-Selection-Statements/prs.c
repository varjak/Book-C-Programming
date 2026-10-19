#include <stdio.h>
#include "prs.h"

void pr2(void) {
    int h24, m;
    printf("Enter a 24h time: ");
    scanf("%d:%d", &h24, &m);

    int h12 = h24 % 12;

    if (h24 == 12)
        h12 = 12;

    if (h24 < 12)
        printf("Equivalent 12-hour time: %.2d:%.2d AM", h12, m);
    else
        printf("Equivalent 12-hour time: %.2d:%.2d PM", h12, m);
}

void pr4(void) {
    int speed;
    printf("How fast does the wind blow? ");
    scanf("%d", &speed);

    if (speed < 1)
        printf("It must be calm");
    else if (speed <= 3)
        printf("It must be light air");
    else if ( speed <= 27)
        printf("It must be breeze");
    else if (speed <= 47)
        printf("It must be gale");
    else if (speed <= 63)
        printf("It must be storm");
    else
        printf("It must be hurricane");

}

void pr6(void) {
    // Declare variables
    int d , i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, v1, cv1, first_sum, second_sum, total;

    // Ask and save input
    printf("Enter the first (single) digit: ");
    scanf("%1d",&d);
    printf("Enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d" , &i1, &i2, &i3, &i4, &i5);
    printf("Enter second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
    printf("Enter the last digit: ");
    scanf("%1d", &v1);

    // Calculate verification digit
    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total= 3 * first_sum + second_sum;
    cv1 = 9 - ((total - 1) % 10);

    // Warn if code is valid or invalid
    if (v1 == cv1)
        printf("VALID\n");
    else
        printf("INVALID\n");
}

void pr10(void) {
    int grade;
    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    if (grade > 100 || grade < 0) {
        printf("Error: grade is greater than 100 or less than 0.");
        return;
    }

    const int nOfTens = grade / 10;
    printf("nOfTens = %d", nOfTens);
    switch (nOfTens) {
        case 10: case 9:
            printf("Letter grade: A");
            break;
        case 8:
            printf("Letter grade: B");
            break;
        case 7:
            printf("Letter grade: C");
            break;
        case 6:
            printf("Letter grade: D");
            break;
        case 5 : case 4 : case 3 : case 2 : case 1 : case 0:
            printf("Letter grade: F");
            break;
        default: ;
    }
}
