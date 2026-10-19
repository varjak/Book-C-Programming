#include <stdio.h>
#include "prs.h"

void pr2(void) {
    int n, m;
    printf("Enter two integers: ");
    scanf("%d %d", &n, &m);

    while (n != 0) {
        const int rem = m % n;
        m = n;
        n = rem;
    }
    printf("Greatest common divisor: %d", m);
}

void pr4(void) {
    float commission, value;

    while (1) {
        printf("Enter value of trade: ");
        scanf("%f", &value);

        if (value == 0.0f)
            printf("Program finished.");
        break;

        if (value < 2500.00f)
            commission = 30.00f + .017f * value;
        else if (value < 6250.00f)
            commission = 56.00f + .0066f * value;
        else if (value < 20000.00f)
            commission = 76.00f + .0034f * value;
        else if (value < 50000.00f)
            commission = 100.00f + .0022f * value;
        else if (value < 500000.00f)
            commission = 155.00f + .0011f * value;
        else
            commission = 255.00f + .0009f * value;

        if (commission < 39.00f)
            commission = 39.00f;

        printf("Commission: $%.2f\n", commission);
    }


}

void pr6(void) {

    // int n = 0;
    // while (1) {
    //
    //     n += 2;
    //     const int square = n * n;
    //
    //     const int m = 100;
    //     if (square > m)
    //         break;
    //
    // printf("%d\n", square);
    // }

    int n = 0;
    const int m = 100;
    for (n = 2; n * n <= m; n += 2) {
        const int square = n * n;
        printf("%d\n", square);
    }
}

void pr8(void) {
    int n, d;
    printf("Enter number of days in month: ");
    scanf("%d", &n);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &d);

    for (int i = 0; i < (d-1); i++) {
        printf("   ");
    }

    for (int i = 1; i <= n; i++) {
        printf("%3d", i);

        if ( (i - 1 + d) % 7 == 0) {
            printf("\n");
        }
    }
}
