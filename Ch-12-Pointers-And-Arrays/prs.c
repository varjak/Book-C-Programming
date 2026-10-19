#include "prs.h"

void pr1(void) {

    int a[100];  // Clang-tidy is wrong
    int i;
    printf("Type something please: ");
    for (i = 0; i < 100; i++) {
        const int ch = getchar();
        if (ch == '\n') {
            break;
        }
        a[i] = ch;
    }

    for (i--; i >= 0; i--) {
        printf("%c", a[i]);
    }
}

void pr3(void) {
    int a[100];
    int *p = a;
    printf("Type something please: ");

    while (1) {
        const int ch = getchar();
        if (ch == '\n' || p == a + 100) {
            break;
        }
        *p = ch;
        p++;
    }

    while (p >= a) {
        p--;
        printf("%c", *p);
    }
}