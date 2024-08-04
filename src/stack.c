#include "stack.h"

STACK* push(STACK* top, double data) {
    STACK* ptr = malloc(sizeof(STACK));
    ptr->data = data;
    ptr->next = top;
    return ptr;
}  // add smth to stack

STACK* pop(STACK* top) {
    STACK* ptr_next = top;
    if (top) {
        STACK* ptr_next = top->next;
        free(top);
    }
    return ptr_next;
}  // del from stack

void show(const STACK* top) {
    const STACK* current = top;
    while (current != NULL) {
        printf("%lf\n", current->data);
        current = current->next;
    }
}  // show all stack data