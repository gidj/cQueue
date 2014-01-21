#include "queue.h"
#include <assert.h>
#include <stdlib.h>


extern Queue queue_new(int elementSize)
{
  Queue q = list_new(elementSize);
  return q;
}

extern void queue_free(Queue *queue)
{
  assert(queue && *queue);
  list_free(queue);
  free(*queue);
  *queue = NULL;
}

extern void* queue_add(Queue queue, void *element)
{
  list_append(queue, element);
  return list_tail(queue);
}

extern void* queue_pop(Queue queue)
{
  return list_pop(queue);
}

extern void* queue_peek(Queue queue)
{
  return list_peek(queue);
}
