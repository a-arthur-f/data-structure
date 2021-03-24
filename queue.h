#ifndef H_QUEUE
#define H_QUEUE
#define MAX 10

typedef struct Queue {
    int items[MAX];
    int front, rear, size;  
} Queue;

Queue *queue_new(void);
int queue_empty(Queue*);
void queue_insert(Queue*, int);
int queue_remove(Queue*);

#endif