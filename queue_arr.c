#ifdef QUEUE_ARR

#include "queue_arr.h"
#include <stdlib.h>

#define CAPACITY 10

Queue *queue_new()
{
    Queue *q = (Queue *) malloc(sizeof(Queue));
    q->capacity = CAPACITY;
    q->front = q->rear = 0;

    q->data = (int *) malloc(q->capacity * sizeof(int));

    return q;
}

void queue_delete(Queue *queue)
{
    free(queue->data);
    free(queue);
}

#endif
