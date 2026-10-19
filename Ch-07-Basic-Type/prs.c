#include <ctype.h>
#include <stdio.h>

void pr1(void) {
    int i, n;
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table:" );
    scanf("%d", &n);

    for (i = 150; i <= n; i++)
        printf("%10hd%10hd\n", i, i * i);

    // With int (%d): Doesn't pass 2^31 (2 147 483 648). Hence, the int has 32 bits in this machine.
    // With short (&hd): Doesn't pass 2^15. Hence, short int has 16 bits in this machine.
}

void pr2(void) {
    int i, n;
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table:" );
    scanf("%d", &n);
    while (getchar() != '\n') {};

    for (i = 1; i <= n; i++) {
        printf("%10d%10d\n", i, i * i);

        if (i % 24 == 0) {
            printf("Press Enter to continue...");
            getchar();
        }
    }
}

void pr5(void) {
    printf("Enter a word: ");
    int c, sum = 0;
    while ((c = getchar()) != '\n' && c != EOF) {
        c = toupper(c);
        switch (c) {
            case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
                sum += 1;
                break;
            case 'D': case 'G':
                sum += 2;
                break;
            case 'B': case 'C': case 'M': case 'P':
                sum += 3;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                sum += 4;
                break;
            case 'K':
                sum += 5;
                break;
            case 'J': case 'X':
                sum += 8;
                break;
            case 'Q': case 'Z':
                sum += 10;
                break;
            default: printf("This letter does not make part of the game! Try a different one \n");
        }
    }
    printf("Your score is: %d", sum);
}

void pr6(void) {
    printf("sizeof(int) = %zu\n", sizeof(int));
    printf("sizeof(short) = %zu\n", sizeof(short));
    printf("sizeof(long) = %zu\n", sizeof(long));
    printf("sizeof(float) = %zu\n", sizeof(float));
    printf("sizeof(double) = %zu\n", sizeof(double));
    printf("sizeof(long double) = %zu\n", sizeof(long double));
    printf("sizeof(size_t) = %zu\n", sizeof(size_t));
}
