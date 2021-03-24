#ifndef H_STACK
#define H_STACK
#define MAX 10

typedef struct Stack {
    int top;
    int elements[MAX];
} Stack;

Stack *stack_new(void);
int stack_empty(Stack*);
void stack_push(Stack*, int);
int stack_pop(Stack*);

#endif
