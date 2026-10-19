#include "exs.h"
#include <stdbool.h>
#include <stdio.h>

#define STACK_SIZE 100
#define N 10

static int contents[STACK_SIZE];
static int *top_ptr;

static void make_empty(void);
static bool is_empty(void);
static bool is_full(void);
static int sum_array(const int *a, int n);
static void make_ident_mat(double a[][N], int n);
static void make_ident_mat_with_pointer(double (*a)[N], int n);


void ex2(void) {
    int a[] = {3,7,2,1,4};
    int *high, *low, *middle;
    high = &a[4];
    low = &a[0];
    middle = (high - low) / 2 + low;
    // Because you can't add a pointer to another (just subtract, or add/subtract a pointer to an integer).
}

void ex4(void) {
    make_empty();
    is_empty();
    is_full();
}

static void make_empty(void) {
    // top = 0;
    top_ptr = contents;
}

static bool is_empty(void) {
    return top_ptr == contents;
}

static bool is_full(void) {
    return top_ptr == &contents[STACK_SIZE];
}

void ex6(void) {
    int a[] = {2,6,1,2,4};
    const int n = 5;
    sum_array(a, n);
}

static int sum_array(const int *a, const int n) {
    int sum = 0;
    for (const int *j = a; j < &a[n]; j++)
        sum += *j;
    return sum;
}

void ex13(void) {
    double ident1[N][N];
    double ident2[N][N];
    make_ident_mat(ident1, N);
    make_ident_mat_with_pointer(ident2, N);
}

static void make_ident_mat(double a[][N], const int n) {
    int row, col;
    for (row = 0; row < n; row++)
        for (col = 0; col < n; col++)
            if (row == col)
                a[row][col] = 1.0;
            else {
                a[row][col] = 0.0;
            }
}

static void make_ident_mat_with_pointer(double (*a)[N], const int n) {
    int c = 0;
    for (double * p = &a[0][0]; p <= &a[n-1][n-1]; p++) {
        if (c % (n + 1) == 0) {
            *p = 1.0;
        } else {
            *p = 0.0;
        }
        c++;
    }
}

void ex15(void) {
    int temperatures[7][24];
    int row = 3;

    for (int *p = &temperatures[row][0]; p < &temperatures[row][24]; p++) {
        printf("%d  ", *p);
    }
    printf("\n");

    for (int *p = temperatures[row]; p < temperatures[row] + 24; p++) {
        printf("%d  ", *p);
    }
    printf("\n");
}
