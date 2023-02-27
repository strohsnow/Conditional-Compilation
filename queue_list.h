#ifndef QUEUE_LIST_H
#define QUEUE_LIST_H

typedef struct Node
{
    int data;
    struct Node *next;
}
Node;

typedef struct Queue
{
    Node *front;
    Node *rear;
}
Queue;

Queue *queue_new();

void queue_delete(Queue *);

#endif
