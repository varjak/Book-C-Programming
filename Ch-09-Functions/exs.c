#include <limits.h>
#include <stdio.h>
#include "exs.h"

static int check(int x, int y, int n);
static int checkOneInput(int x, int n);
static int checkIfLeapYear(int year);
static int day_of_year(int month, int day, int year);
static int digit(int n, int k);
static void swap(int a, int b);
static int get_largest_value(const int a[], int n);
static double calc_avg_value(const int a[], int n);
static int count_positive_values(const int a[], int n);
static double median(double x, double y, double z);
static int fact(int n);
static void pb(int n);

void ex2(void) {
    const int x = 4, y = 2, n = 5;
    const int res = check(x, y, n);
    printf("Result: %d", res);
}

static int check(const int x,const int y,const int n) {
    return checkOneInput(x, n) && checkOneInput(y, n);
}

static int checkOneInput(const int x, const int n) {
    return x >= 0 && x <= n-1;
}

void ex4(void) {
    const int month = 10;
    const int day = 18;
    const int year = 1994;
    printf("Day of the year: %d\n", day_of_year(month, day, year));
}

static int day_of_year(const int month,const int day,const int year) {
    // Store number of days in each month
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Correct February if leap year
    if (checkIfLeapYear(year)) {
        months[1] = 29;
    }

    // Sum days until specified month-day
    int d = 0;
    for (int i = 0; i < month-1; i++) {
        d += months[i];
    }
    d += day;

    return d;
}

static int checkIfLeapYear(const int year) {
    const int d4 = year % 4 == 0;
    const int d100 = year % 100 == 0;
    const int d400 = year % 400 == 0;

    if (d4 && d100 && d400)
        return 1;

    if (d4 && !d100)
        return 1;

    return 0;
}

void ex6(void) {
    const int n = 436, k = 3;
    printf("Digit of %d in place num %d: %d",n, k, digit(n, k));
}

static int digit(const int n, const int k) {
    // return (n / (int)pow(10,k - 1)) % 10;
    // To not use pow (which uses floating point arithmetic):
    int divisor = 1;
    for (int i = 0; i < k - 1; i++) {
        divisor *= 10;
    }
    return (n / divisor) % 10;
}

void ex8(void) {
    // void f(double x)
    // void f(double)
}

void ex9(void) {
    // it will be "i = 1, j = 2" (i.e. swap will have no effect)
    const int i = 1, j = 2;
    swap(i, j);
    printf("i = %d, j = %d\n", i, j);
}

static void swap(int a, int b) {
    const int temp = a;
    a = b;
    b = temp;
}

void ex10(void) {
    int a[] = {2,5,1,2,65,3,0,-14,-2};
    const int n = sizeof(a) / sizeof(a[0]);
    printf("The largest value is: %d\n", get_largest_value(a, n));
    printf("The average value is: %.2f\n", calc_avg_value(a, n));
    printf("The number of positive values is: %d\n", count_positive_values(a, n));
}

static int get_largest_value(const int a[], const int n) {
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

static double calc_avg_value(const int a[], const int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    const double avg = (double) sum / n;
    return avg;
}

static int count_positive_values(const int a[], const int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0)
            count++;
    }
    return count;
}

void ex15(void) {
    const double x = 2.464, y = 0.1, z = 1 / 3.0;
    printf("The median is: %f", median(x, y, z));
}

// The Clang-tidy warning says: not all control paths return a value. But mathematically, they do.
static double median(const double x, const double y, const double z) {
    const double a[] = {x, y, z};
    const int n = 3;
    for (int i = 0; i < n; i++) {
        const int i1 = (i-1+n)%n;
        const int i2 = (i+1+n)%n;
        if ((a[i] <= a[i1] && a[i] >= a[i2]) || (a[i] >= a[i1] && a[i] <= a[i2]))
            return a[i];
    }
}

void ex17(void) {
    const int n = 4;
    printf("%d! = %d\n", n, fact(n));
}

static int fact(int n) {
    int f = 1;
    while (n > 1) {
        f *= n;
        n--;
    }
    return f;
}

void ex19(void) {
    // I think it converts a positive decimal number into a binary number!
    const int n = 4;
    pb(n);
}

static void pb(const int n) {
    if (n != 0) {
        pb(n/2);
        putchar('0' + n % 2);
    }
}
