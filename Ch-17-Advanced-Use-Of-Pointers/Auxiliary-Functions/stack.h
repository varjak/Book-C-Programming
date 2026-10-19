#ifndef STACK_H
#define STACK_H

struct node {int value; struct node *next;};

void init(void);
void make_empty(void);
int is_empty(void);
int is_full(void);
void push(int i);
struct node * pop(void);

#endif