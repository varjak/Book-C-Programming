#include "exs.h"

void ex1(void) {
    // Because it depends on two variables (a[] and the type) whereas the first depends on one (a).
    // That is more prone to an error since the programmer might mismatch them (e.g. for an array of ints putting the type double)
}

void ex2(void) {
    int a[5];
    const char ch = '5';
    a[ch - '0'] = 0;
}

void ex7(void) {
    // If using all the shortcutz described in Chapter 8 and seens shrinking as less
    const int segments[10][7] = {{1,1,1,1,1,1},
                                 {[1]=1,1},
                                 {1,1,[3]=1,1,[6]=1},
                                 {1,1,1,1,[6]=1},
                                 {[1]=1,1,[5]=1,1},
                                 {1,[2]=1,1,[5]=1,1},
                                 {1,[2]=1,1,1,1,1},
                                 {1,1,1},
                                 {1,1,1,1,1,1,1},
                                 {1,1,1,1,[4]=1,1}};
}