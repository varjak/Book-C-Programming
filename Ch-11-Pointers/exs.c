#include <limits.h>
#include <stdio.h>
#include "exs.h"

static void swap(int *p, int *q);
static void find_two_largest(int a[], int n, int *largest, int *second_largest);

void ex1(void) {
    // a), g)
    int i = 5;
    int *p = &i;
    int ta[4] = {'b', 'c', 'd', 'f'};

    for (int ti = 0; ti < 4; ti++) {
        int t = ta[ti];
        switch (t) {
            case 'a': printf("%d\n", *p); break;
            case 'b': printf("%p\n", &p); break;
            case 'c': printf("%p\n", *&p); break;
            case 'd': printf("%p\n", &*p); break;
                //case 'e': printf("%d\n", *i); break;
            case 'f': printf("%p\n", &i); break;
            case 'g': printf("%d\n", *&i); break;
                //case 'h': printf("%d\n", &*i); break;
            default: printf("wrong option\n");
        }
    }
}

void ex2(void) {
    // a) Not legal
    // b) Not legal (I'm assuming an address type cannot be converted to int automatically)
    // c) Not legal (&p is an r-value, you cannot assign something to it)
    // d) Not legal (p is a pointer and &q is a pointer to a pointer)
    // e) Legal
    // f) Legal
    // g) Legal (but disastrous. I'm assuming you can assign an int to a pointer (that would interpret it as an address))
    // h) Not legal (I'm assuming an address type cannot be converted to int automatically)
    // i) Legal (but pointless)

    // int i = 6;
    // int *p = &i;
    // int *q = &i;
}

void ex4(void) {
    int i = 1, j = 2;
    swap(&i, &j);
    printf("i = %d\n j = %d\n", i, j);
}

static void swap(int *p, int *q) {
    const int temp = *p;
    *p = *q;
    *q = temp;
}

void ex6(void) {
    int a[] = {2,2,2,2};
    const int n = sizeof(a) / sizeof(a[0]);
    int largest, second_largest;
    find_two_largest(a, n, &largest, &second_largest);
}

static void find_two_largest(int a[], int n, int *largest, int *second_largest) {
    int max1 = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (a[i] > max1) {
            max1 = a[i];
        }
    }
    *largest = max1;
    printf("Largest value = %d\n", *largest);
    int max2 = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (a[i] > max2 && a[i] < max1) {
            max2 = a[i];
        }
    }
    if (max2 == INT_MIN) {
        printf("There is no second largest value.\n");
    } else {
        *second_largest = max2;
        printf("Second largest value = %d\n", *second_largest);
    }
}