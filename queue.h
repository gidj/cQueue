#include "include/list/list.h"

#ifndef QUEUE_H_
#define QUEUE_H_ 

typedef List Queue;

extern Queue queue_new(int elementSize);
extern void queue_destroy(Queue *queue);

extern void* queue_add(Queue queue, void *element);
extern void* queue_pop(Queue queue);
extern void* queue_peek(Queue queue);

#endif
