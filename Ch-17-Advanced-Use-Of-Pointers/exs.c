#include "exs.h"
#include "Auxiliary-Functions/stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char* duplicate(const char*);
static int f(const void *, const void *);

void ex2(void) {
    const char *str = "Umbrella";
    char *p = duplicate(str);
    free(p);
}

char* duplicate(const char* s) {
    char* temp = malloc(strlen(s)+1);
    if (temp == NULL) {
        printf("Could not allocate memory for this string.\n");
        return NULL;
    }
    strcpy(temp, s);
    return temp;
}

void ex5(void) {
    // a) Illegal. Should index union d: (*p).d.b = ' '
    // b) Legal
    // c) Legal
    // d) Illegal. Should be: (p->d).b = ' '
}

void ex7(void) {
    // The loop statement successfully searches the linked list, but free() removes the current element, so that
    // it cannot be used to find the next. A solution would be to free the previous element
    struct node {int value; struct node *next;} *p = malloc(sizeof(struct node));
    while (p != NULL) {
        struct node *temp = p;
        p = p->next;
        free(temp);
    }
}

void ex8(void) {
    is_empty() ? printf("Linked list is empty\n") : printf("Linked list is not empty\n");
    push(5);
    push(7);
    is_empty() ? printf("Linked list is empty\n") : printf("Linked list is not empty\n");
    struct node *n = pop();
    make_empty();
    is_empty() ? printf("Linked list is empty\n") : printf("Linked list is not empty\n");
}

void ex15(void) {
    // Answer: 3
    // It finds the root of a quadratic expression (the x for which f(x) = 0)
}

void ex17(void) {
    int a[100];
    qsort(&a[50], 50, sizeof(a[0]), f);
}

int f(const void *a, const void *b) {
    return *(const int *)a - *(const int *)b;
}

