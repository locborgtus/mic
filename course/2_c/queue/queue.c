#include <stdio.h>

#define MAX_QUEUE_SIZE 10

// circular queue

typedef struct {
  int data[MAX_QUEUE_SIZE];
  int front;
  int rear;
} Queue;

// init queue
void initQueue(Queue *q) {
  q->front = -1;
  q->rear = -1;
}

// check if queue is empty
int isQueueEmpty(Queue *q) {
  return q->front == -1;
}

// check if queue is full
int isQueueFull(Queue *q) {
  // if moving the rear pointer forward by 1 will make it same as front, we're full
  // wrap around
  return (q->rear + 1) % MAX_QUEUE_SIZE == q->front;
}

int queueLength(Queue *q) {
  if (isQueueEmpty(q)) return 0;

  return (q->rear + 1) % MAX_QUEUE_SIZE - q->front;
}

// add to queue (head, 0)
int enqueue(Queue *q, int n) {
  if (isQueueFull(q)) {
    printf("Queue is full\n");
    return -1;
  } else {
    // first element to enter the queue
    if (q->front == -1) {
      q->front = 0;
    }

    q->rear = (q->rear + 1) % MAX_QUEUE_SIZE; // more rear pointer forward
    q->data[q->rear] = n;

    return queueLength(q);
  }
}

// remove from queue (tail)
int dequeue(Queue *q) {
  if (isQueueEmpty(q)) {
    printf("Queue is empty\n");
    return -1;
  } else {
    int value = q->data[q->front];

    if (q->front == q->rear) {
      // empty queue
      q->front = q->rear = -1;
    } else {
      q->front = (q->front + 1) % MAX_QUEUE_SIZE;
    }

    return value;
  }
}

int main() {
  Queue q;

  initQueue(&q);

  enqueue(&q, 10);
  printf("Queue Length: %d\n", queueLength(&q));
  enqueue(&q, 20);
  printf("Queue Length: %d\n", queueLength(&q));
  enqueue(&q, 30);
  printf("Queue Length: %d\n", queueLength(&q));

  printf("Dequeued: %d\n", dequeue(&q));
  printf("Dequeued: %d\n", dequeue(&q));
  printf("Queue Length: %d\n", queueLength(&q));

  enqueue(&q, 40);
  printf("Queue Length: %d\n", queueLength(&q));
  enqueue(&q, 50);
  printf("Queue Length: %d\n", queueLength(&q));

  printf("Dequeued: %d\n", dequeue(&q));
  printf("Dequeued: %d\n", dequeue(&q));
  printf("Queue Length: %d\n", queueLength(&q));

  return 0;
}
