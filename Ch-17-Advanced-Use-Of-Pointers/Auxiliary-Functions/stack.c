#include "../stack.h"
#include <stdlib.h>

static struct node *first = NULL;

void make_empty(void) {
    while (first != NULL) {
        struct node *old_first = first;
        first = first->next;
        free(old_first);
    }
}

int is_empty(void) {
    return first == NULL;
}

void push(const int i) {
    struct node *new_first = malloc(sizeof(struct node));
    new_first->value = i;
    new_first->next = first;
    first = new_first;
}

struct node * pop(void) {
    struct node *old_first = first;
    first = first->next;
    old_first->next = NULL;
    return old_first;
}