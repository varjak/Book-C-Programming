#include "prs.h"

#include <stdio.h>

#define digitsNum 10
#define nR 5
#define nC 5

void pr2(void) {
    // Ask for number
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    // Count digit occurences
    int a[digitsNum] = {0};
    while (x > 0) {
        int d = x % 10;
        a[d]++;
        x /= 10;
    }

    // Print digit options
    printf("Digit:\t\t");
    for (int i = 0; i < digitsNum; i++) {
        printf("%3d",i);
    }
    printf("\n");

    // Print digit occurences
    printf("Occurrences:\t");
    for (int i = 0; i < digitsNum; i++) {
        printf("%3d",a[i]);
    }
    printf("\n");
}

void pr5(void) {
    int it0, nY, nI = 5, nM = 12, iV = 100;
    double vA[nI];
    printf("Enter interest rate: ");
    int scanf1 = scanf("%d",&it0);
    printf("Enter number of years: ");
    scanf("%d",&nY);
    double monthIt = it0 / (double)nM;

    printf("Years");

    for (int i = 0; i < nI; i++) {
        printf("\t%3d%%", it0 + i);
        vA[i] = iV;
    }


    for (int i = 1; i <= nY; i++) {
        printf("\n%3d", i);
        for (int j = 0; j < nI; j++) {
            for (int k = 0; k < nM; k++) {
                vA[j] = vA[j] * ( 1 + (double) (it0+j) / 100 / 12);
            }
            printf("\t%6.2f", vA[j]);
        }
    }
}

void pr7(void) {
    int mat[nR][nC];
    for (int i = 0; i < nR; i++) {
        printf("Enter row %d: ", i+1);
        scanf("%d %d %d %d %d", &mat[i][0], &mat[i][1], &mat[i][2], &mat[i][3], &mat[i][4]);
    }
    int sumR[nR] = {0};
    int sumC[nC] = {0};
    for (int i = 0; i < nR; i++) {
        for (int j = 0; j < nC; j++) {
            sumR[i] += mat[i][j];
            sumC[j] += mat[i][j];
        }
    }

    printf("Row totals: ");
    for (int i = 0; i < nR; i++) {
        printf("%d  ",sumR[i]);
    }

    printf("\nCol totals: ");
    for (int i = 0; i < nC; i++) {
        printf("%d  ",sumC[i]);
    }
}

void pr8(void) {
    int mat[nR][nC];

    for (int i = 0; i < nR; i++) {
        printf("Student %d, enter your 5 quiz grades: ", i+1);
        scanf("%d %d %d %d %d", &mat[i][0], &mat[i][1], &mat[i][2], &mat[i][3], &mat[i][4]);
    }

    int sumR[nR] = {0};
    int sumC[nC] = {0};
    int maxC[nC] = {0};
    int minC[nC] = {100, 100, 100, 100, 100};
    for (int i = 0; i < nR; i++) {
        for (int j = 0; j < nC; j++) {
            sumR[i] += mat[i][j];
            sumC[j] += mat[i][j];

            if (mat[i][j] > maxC[j])
                maxC[j] = mat[i][j];

            if (mat[i][j] < minC[j])
                minC[j] = mat[i][j];
        }
    }

    printf("Student total scores: ");
    for (int i = 0; i < nR; i++) {
        printf("%d  ",sumR[i]);
    }

    printf("\nStudent average scores: ");
    for (int i = 0; i < nR; i++) {
        printf("%f  ",sumR[i]/5.f);
    }

    printf("\nQuiz high scores: ");
    for (int i = 0; i < nC; i++) {
        printf("%d  ",maxC[i]);
    }

    printf("\nQuiz low scores: ");
    for (int i = 0; i < nC; i++) {
        printf("%d  ",minC[i]);
    }

    printf("\nQuiz average scores: ");
    for (int i = 0; i < nC; i++) {
        printf("%f  ",sumC[i]/5.f);
    }
}
