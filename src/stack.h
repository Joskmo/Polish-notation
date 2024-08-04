#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>

typedef struct stack {
    double data;
    struct stack* next;
} STACK;

STACK* push(STACK* top, double data);
STACK* pop(STACK* top);
void show(const STACK* top);

#endif