#include <stdio.h>
#include "prs.h"

void pr1(void) {
    int m, d, y;
    printf("Enter a date in mm/dd/yyyy: ");
    scanf("%d/%d/%d", &m, &d, &y);
    printf("That date in yyyymmdd is: %d%d%d", y, m, d);
}

void pr3(void) {
    int gsi, gi, pc, in, cd;
    printf("Please enter an ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gsi, &gi, &pc, &in, &cd);
    printf("GSI: %d\nGI:%d\nPC:%d\nIN:%d\nCD:%d\n", gsi, gi, pc, in, cd);

}