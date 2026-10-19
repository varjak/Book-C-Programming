#include <stdio.h>
#include "exs.h"

void ex1(void) {
    printf("hello, world\n");
}

void ex2(void) {
    printf("Parkinson's Law:\nWork expands so as to ");
    printf("fill the time\n");
    printf("available for its completion.\n");
}

void ex3(void) {
    const int height = 8, length = 12, width = 10;
    const int volume = height * length * width;
    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);
}

void ex4(void) {
    int x, y;
    float xf, yf;
    printf("%d %d %f %f", x, y, xf, yf);
}

void ex5(void) {
    int bottles_by_the_hundred_ = 10;
    printf("%d", bottles_by_the_hundred_);
}

void ex6(void) {
    /* Question
     * It might be because the text editor/IDE shows them united and therefore it is difficult to see how many are they
     * Although that in my IDE (CLion), they are clearly separated
     */
}

void ex7(void) {
    /* Question
     * a, while
     */
}

void ex8(void) {
    /* Question
     * answer = ( 3 * q - p * p ) / 3 ;
     * 14
     */
}

void ex9(void) {
    int p = 0, q = 1;
    int answer = ( 3 * q - p * p) / 3;
}

void ex10(void) {
    /* Question
     * The ones between types, between type and identifier, and in strings
     */
}