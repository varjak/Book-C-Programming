#include "exs.h"

void ex2(void) {
    // a) extern
    // b) static (at file scope)
    // c) static, auto (at block scope)
}

void ex4(void) {
    // a) 0
    // b) 50
}

void ex8(void) {
    // a) array (x) of length 10 of pointers to functions with an argument int that return a char
    // b) function (x) with argument int that returns a pointer to an array of 5 ints
    // c) function (x) with no arguments that returns a pointer to a function with int argument that returns a pointer to a float
    // d) function (x) with two arguments: int, and a pointer to a function that receives int and outputs nothing;
    // that returns a pointer to a function that receives an int and outputs nothing
}

void ex10(void) {
    {
        // a)
        char *(*p)(char *);
    }
    {
        // b)
        void (*f(struct t *p, long n))(void);
    }
    {
        // c)
        void (*a[4])(void) = {insert, search, update, print};
    }
    {
        // d)
        struct t (*b[10])(int, int);
    }
}

void ex12(void) {
    // f is a function that has two arguments: one is a pointer to a function with argument long and return type float,
    // and the other is a pointer to a char. f returns a pointer to a function with argument double and return type int
    float (*x1) (long);
    char *x2;
    int (*y)(double);
    int (*f1(float (*)(long), char *)) (double);
    y = f1(x1, x2);
}

void ex13(void) {
    // a) Legal
    // b) Illegal: static variables must be initialized by compile-time constants
    // c) Legal
    // d) Legal
}

void ex15(void) {
    // a) Storage duration
}
