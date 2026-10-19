#define N 10
#define INC(x) (x+1)
#define SUB(x,y) (x-y)
#define SQR(x) ((x)*(x))
#define CUBE(x) (SQR(x)*(x))
#define M1(x,y) x##y
#define M2(x,y) #x #y
#include <stdio.h>
#include <math.h>

int main(void) {
    int a[N], i = 0, j = 0, k = 0, m = 0, jk = 0;

#ifdef N
    i = j;
#else
    j = i;
#endif

    i = 10 * INC(j);
    i = SUB(j, k);
    i = SQR(SQR(j));
    i = CUBE(j);
    i = M1(j,k);
    puts(M2(i,j));

#undef SQR
    i = (int)sqrt(j);
#define SQR
    i = SQR(j);

    return 0;
}
