#include <stdio.h>

#define MAX_STACK_SIZE 10

typedef struct {
  int data[MAX_STACK_SIZE];
  int top;
} Stack;

// stack init
void initStack(Stack *s) {
  s->top = -1;
}

// check if stack is full
int isStackFull(Stack *s) {
  return (s->top == MAX_STACK_SIZE - 1);
}

// check if stack is empty
int isStackEmpty(Stack *s) {
  return (s->top == -1);
}

// push data on stack
void push(Stack *s, int n) {
  if (isStackFull(s)) {
    printf("Stack is full\n");
  } else {
    s->data[++s->top] = n;
  }
}

// pop data off stack
int pop(Stack *s) {
  if (isStackEmpty(s)) {
    printf("Stack is empty\n");
    return -1;
  } else {
    return s->data[s->top--];
  }
}

int main() {
  Stack s;
  initStack(&s);

  push(&s, 10);
  push(&s, 20);
  push(&s, 30);

  printf("Popped: %d\n", pop(&s));
  printf("Popped: %d\n", pop(&s));

  return 0;
}
