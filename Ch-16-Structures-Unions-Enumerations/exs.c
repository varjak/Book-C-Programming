#include <stdio.h>
#include "exs.h"

#define PI 3.141592653589793
#define RECTANGLE 0
#define CIRCLE 1

struct shape {
    int shape_kind;
    struct point {int x, y;} center;
    union {struct {int height, width;} rectangle; struct {int radius;} circle;} u;
};

static double compute_area(struct shape s);
static void translate(struct shape s, int x, int y);
static void scale(struct shape s, const double c);

void ex2(void) {
    {
        // (a)
        struct complex {double real, imaginary;} c1, c2, c3;
    }

    {
        // (b)
        struct complex {double real; double imaginary;};
        struct complex c1 = {.real = 0.0, .imaginary = 1.0};
        const struct complex c2 = {.real = 1.0, .imaginary = 0.0};
        struct complex c3;

        // (c)
        c1 = c2;

        // (d)
        c3.real = c1.real + c2.real;
        c3.imaginary = c1.imaginary + c2.imaginary;
    }
}

void ex4(void) {
    typedef struct {double real, imaginary;} Complex;
    {
        // (a)
        Complex c1, c2, c3;
    }

    {
        // (b)
        Complex c1 = {.real = 1.0, .imaginary = 0.0};
        const Complex c2 = {.real = 0.0, .imaginary = 1.0};
        Complex c3;

        // (c)
        c1 = c2;

        // (d)
        c3.real = c1.real + c2.real;
        c3.imaginary = c1.imaginary + c2.imaginary;
    }
}

void ex11(void) {
    // double (8) + double (inside union) (8) + 4 char (1) = 20
}

void ex14(void) {
    const struct shape s = {.shape_kind = RECTANGLE, .center ={.x = 0, .y = 0}, .u.rectangle = {.height = 5, .width = 2}};
    // a)
    const double area = compute_area(s);
    // b)
    translate(s, 2, 4);
    // c)
    scale(s, 5);
}

static double compute_area(const struct shape s) {
    switch (s.shape_kind) {
        case RECTANGLE: return s.u.rectangle.height * s.u.rectangle.width;
        case CIRCLE: return s.u.circle.radius * s.u.circle.radius * PI;
        default: printf("Wrong shape!\n"); return 0.0;
    }
}

static void translate(struct shape s, const int x, const int y) {
    s.center.x += x;
    s.center.y += y;
}

static void scale(struct shape s, const double c) {
    switch (s.shape_kind) {
        case RECTANGLE:
            s.u.rectangle.height *= c;
            s.u.rectangle.width *= c;
        case CIRCLE:
            s.u.circle.radius *= c;
        default:
            printf("Wrong shape!\n");
    }
}

void ex15(void) {
    {
        // (a)
        enum day_of_week {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY};
    }

    // (b)
    typedef enum {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY} day_of_week;
}

void ex17(void) {
    // a), d), e)
}
