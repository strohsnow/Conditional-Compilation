#ifdef QUEUE_LIST

#include "queue_list.h"
#include <stdlib.h>

Queue *queue_new()
{
    return (Queue *) calloc(1, sizeof(Queue));
}

void queue_delete(Queue *queue)
{
    Node *ptr = queue->front, *ptr_prev;
    while (ptr)
    {
        ptr_prev = ptr;
        ptr = ptr->next;
        free(ptr_prev);
    }
    free(queue);
}

#endif
