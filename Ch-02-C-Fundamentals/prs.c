#include <stdio.h>
#include "prs.h"
#include <math.h>

void pr1(void) {
    printf("       *\n");
    printf("      *\n");
    printf("     *\n");
    printf("*   *\n");
    printf(" * *\n");
    printf("  *\n");
}

void pr2(void) {
    float v, r = 10;
    v = 4.0f / 3.0f * M_PI * r * r * r;
    printf("Volume of the sphere: %f\n", v);
    printf("Test: %f", 4.0f / 3.0f);
}

void pr3(void) {
    float v, r;
    printf("Radius of the sphere: ");
    scanf("%f", &r);
    v = 4.0f / 3.0f * M_PI * r * r * r;
    printf("Volume of the sphere: %f\n", v);
    printf("Test: %f", 4.0f / 3.0f);
}

void pr4(void) {
    float value;
    printf("Enter a dollar and cents amount: ");
    scanf("%f", &value);
    const float tax = 0.05f;
    const float valueWithTax = value * (1 + tax);
    printf("With tax added: $%.2f", valueWithTax);
}

void pr5(void) {
    float x;
    printf("Please enter the value of x: ");
    scanf("%f", &x);
    const float y = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6;
    printf("y = %.2f\n", y);
}

void pr6(void) {
    float x;
    printf("Please enter the value of x: ");
    scanf("%f", &x);
    const float y = ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6;
    printf("y = %.2f\n", y);
}

void pr7(void) {
    float value;
    printf("Please enter an amount: ");
    scanf("%f", &value);
    const int numOf20 = (int) (value / 20);
    const int numOf10 = (int) ((value - (float)numOf20 * 20) / 10);
    const int numOf05 = (int) ((value - (float)numOf20 * 20 - (float)numOf10 *  10) / 5);
    const int numOf01 = (int) ((value - (float)numOf20 * 20 - (float)numOf10 *  10 - (float)numOf05 * 5));
    printf("$20 bills:  %d\n", numOf20);
    printf("$10 bills:  %d\n", numOf10);
    printf("$05 bills:  %d\n", numOf05);
    printf("$01 bills:  %d\n", numOf01);
}

void pr8(void) {
    float loan, interest, monthPay;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter amount of interest rate: ");
    scanf("%f", &interest);
    printf("Enter amount of monthly payment: ");
    scanf("%f", &monthPay);
    const float monthInterestPer = interest / 12 / 100;
    const float loadAfter1Month = loan - monthPay + loan * monthInterestPer;
    const float loadAfter2Month = loadAfter1Month - monthPay + loadAfter1Month * monthInterestPer;
    const float loadAfter3Month = loadAfter2Month - monthPay + loadAfter2Month * monthInterestPer;
    printf("Balance remaining after first payment: %.2f\n", loadAfter1Month);
    printf("Balance remaining after second payment: %.2f\n", loadAfter2Month);
    printf("Balance remaining after third payment: %.2f\n", loadAfter3Month);
}