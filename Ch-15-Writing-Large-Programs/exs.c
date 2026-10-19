#include "exs.h"

void ex2(void) {
    // b) Because if the same function gets pasted into different source files, after they are compiled, the linker will not know which to use to make the final exe file
}

void ex6(void) {
    // a) main.c, f1.c, f2.c
    // b) if just f1.c was changed? (not f1.h?) : just f1.c
    // c) main.c, f1.c and f2.c
    // d) f1.c and f2.c

    int a[] = {1,2,3};
    int *b = a;
}