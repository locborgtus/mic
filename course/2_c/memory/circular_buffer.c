#include <stdio.h>
#include <stddef.h>
#include <stdbool.h>

#define MAX_ELEMENTS 10

// circular buffer
typedef struct CircBuffer {
  int data[sizeof(max_align_t) * MAX_ELEMENTS];
  int head; // data is read
  int tail; // data is added
  bool full;
} CircBuffer;

// init
void initCircBuffer(CircBuffer *buf) {
  buf->head = buf->tail = 0;
  buf->full = false;
}

// add
void enqueueCircBuffer(CircBuffer *buf, int n) {
  buf->data[buf->tail] = n;

  // check if we're full
  // if so, move the head forward to make space
  if (buf->full) {
    buf->head = (buf->head + 1) % MAX_ELEMENTS;
  }

  // always advance the tail
  // take care of wrap around
  buf->tail = (buf->tail + 1) % MAX_ELEMENTS;

  // check if there's a wraparound / full
  buf->full = (buf->tail == buf->head);
}

// remove
int dequeueCircBuffer(CircBuffer *buf) {
  // check if buffer empty
  // check fullness because head and tail is same when full
  if (buf->head == buf->tail && !buf->full) {
    printf("buffer empty\n");
    return -1;
  }

  // remove data from head, and advance head pos
  int ret = buf->data[buf->head];
  buf->head = (buf->head + 1) % MAX_ELEMENTS;

  // after we remove, it can never be full
  buf->full = 0;

  return ret;
}

// get buffer

// print buffer
void printCircBuffer(CircBuffer *buf) {
//  for (int i = 0; i < MAX_ELEMENTS; i++) {
//    printf("%d\n", buf->data[i]);
//  }
  int cur = buf->head;
printf("head: %d, tail: %d\n", cur, buf->tail);
  while (cur != buf->tail) {
    printf("%d\n", buf->data[cur]);
    cur = (cur + 1) % MAX_ELEMENTS;
  }
}

int main() {
  CircBuffer buf;

  initCircBuffer(&buf);
  enqueueCircBuffer(&buf, 10);
  enqueueCircBuffer(&buf, 20);
  enqueueCircBuffer(&buf, 30);
  enqueueCircBuffer(&buf, 40);
  enqueueCircBuffer(&buf, 50);
  enqueueCircBuffer(&buf, 60);
  enqueueCircBuffer(&buf, 70);
  enqueueCircBuffer(&buf, 80);
  enqueueCircBuffer(&buf, 90);
  enqueueCircBuffer(&buf, 100);
  enqueueCircBuffer(&buf, 110);
  enqueueCircBuffer(&buf, 120);
  printCircBuffer(&buf);

  int n = dequeueCircBuffer(&buf);
  printf("%d\n", n);
  printCircBuffer(&buf);
  return 0;
}
