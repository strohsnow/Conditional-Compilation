#ifdef QUEUE_ARR
    #include "queue_arr.h"
#elif defined QUEUE_LIST
    #include "queue_list.h"
#endif

int main()
{
    Queue *queue = queue_new();
    queue_delete(queue);

    return 0;
}
