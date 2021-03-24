#include <stdlib.h>
#include <stdio.h>
#include "queue.h"

Queue *queue_new(void) {
    Queue *queue = (Queue*) malloc(sizeof(Queue));
    queue->front = -1;
    queue->rear = -1;
    queue->size = 0;
    return queue;
}

int queue_empty(Queue *queue) {
    if(queue->rear == queue->front) return 1;

    return 0;
}

void queue_insert(Queue *queue, int val) {
    if(queue->size == MAX) {
        printf("Estouro da pilha\n");
        exit(1);
    } 

    if(queue->rear == MAX - 1) queue->rear = 0;
    else queue->rear++;

    queue->items[queue->rear] = val;
    queue->size++;
}

int queue_remove(Queue *queue) {
    if(queue_empty(queue)) {
        printf("A fila está vazia!\n");
        exit(1);
    }
    if(queue->front == MAX - 1) queue->front = 0;
    else queue->front++;
    queue->size--;
    return queue->items[queue->front];
}