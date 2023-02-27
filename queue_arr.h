#ifndef QUEUE_ARR_H
#define QUEUE_ARR_H

typedef struct Queue
{
    int front, rear;
    int capacity;
    int *data;
}
Queue;

Queue *queue_new();

void queue_delete(Queue *);

#endif
