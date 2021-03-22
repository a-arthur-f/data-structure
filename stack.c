#include <stdio.h>
#include <stdlib.h>
#define MAX 10

typedef struct Stack {
    int top;
    int elements[MAX];
} Stack;

Stack *stack_new(void);
int empty(Stack*);
void push(Stack*, int);
int pop(Stack*);
int stackpop(Stack*);

int main() {
    
    return 0;
}

Stack *stack_new(void) {
    Stack *stack = (Stack*) malloc(sizeof(Stack));
    stack->top = -1;
    return stack;
}

int empty(Stack *stack) {
    if(stack->top == -1) return 1;
    return 0; 
}

void push(Stack *stack, int val) {
    if(stack->top == (MAX - 1)) printf("Pilha cheia\n");
    else stack->elements[++stack->top] = val;
}

int pop(Stack *stack) {
    if(empty(stack)) return -1;
    return stack->elements[stack->top--];
}

int stackpop(Stack *stack) {
    if(empty(stack)) return -1;
    return stack->elements[stack->top];
}