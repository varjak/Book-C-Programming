#include <stdio.h>

#include "exs.h"

#define NELEMS(a) sizeof(a)/sizeof(a[0])
#define AVG(x,y) (((x)+(y))/2)
#define AREA(x,y) ((x)*(y))
#define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))
#define GENERIC_MAX(type) type type##_max(type x, type y) return x > y ? x : y;
#define LINE_FILE_AUX2(l, f) "Line " #l " of file " f
#define LINE_FILE_AUX1(l, f) LINE_FILE_AUX2(l, f)
#define LINE_FILE LINE_FILE_AUX1(__LINE__, __FILE__)

void ex2(void) {
    int b[] = {2,5,4,8,1};
    printf("%zu\n", NELEMS(b));
}

void ex4(void) {
    const int x = 1, y = 3;
    printf("%d\n", 5 % AVG(x,y));
    printf("%d\n",  5 % AREA(x,y));
}

void ex5(void) {
    // a) I think i will be increment 3 times, and hence the output be 'D'
    // b) Same reason, but only 2 times, so: '2'
    char s[4+1];
    // strcpy(s, "abcd");
    strcpy(s, "0123");
    int i = 0;
    putchar(TOUPPER(s[++i]));
}

void ex7(void) {
    // a) GENERIC_MAX(long) : long long_max(long x, long y) return x > y ? x : y;
    // b) The function name would be teared apart: unsigned long_max
    // c) by changing the definition: replace the spaces in the string "unsigned long" by underscores, and pass it to GENERIC_MAX(fun_type, type) though fun_type
    // c) Without changing, unsigned long can be represented by ulong if including <sys/types.h>, or by specifying the bytes using e.g. uint64_t
    // c) OR, we could define the type ourselves (this was the book solution!): typedef unsigned long ULONG;
}

void ex8(void) {
    const char *str = LINE_FILE;
    printf("%s", str);
}

void ex12(void) {
    // c) e)
}

void ex14(void) {
    // Check "./Auxiliary-Functions/ex-14.c"
}

void ex16(void) {
    // _Pragma("ident \"foo\"")
    // Which is equal to: #pragma ident "foo"
}