#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

Stack *stack_new(void) {
    Stack *stack = (Stack*) malloc(sizeof(Stack));
    stack->top = -1;
    return stack;
}

int stack_empty(Stack *stack) {
    if(stack->top == -1) return 1;
    return 0; 
}

void stack_push(Stack *stack, int val) {
    if(stack->top == (MAX - 1)) printf("Pilha cheia\n");
    else stack->elements[++stack->top] = val;
}

int stack_pop(Stack *stack) {
    if(empty(stack)) return -1;
    return stack->elements[stack->top--];
}
