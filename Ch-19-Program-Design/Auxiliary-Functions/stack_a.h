#ifndef STACKADT_H
#define STACKADT_H

#include <stdbool.h>   /* C99 only */

#define STACK_SIZE 100

typedef int Item;

struct stack_type {
 int contents[STACK_SIZE];
 int top;
};

typedef struct stack_type Stack;

Stack create(void);
void destroy(Stack *s);
void make_empty(Stack *s);
bool is_empty(const Stack *s);
bool is_full(Stack *s);
void push(Stack *s, Item i);
Item pop(Stack *s);

#endif
