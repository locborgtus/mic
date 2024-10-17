// Problem: Implement a stack that supports push, pop, and peek using dynamic memory allocation.

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node* next;
} Node;

// push - adds data to the head
Node* push(Node* head, int n) {
  Node *newNode = (Node *) malloc(sizeof(Node));
  newNode->data = n;
  newNode->next = head;

  return newNode;
}

// pop - removes data from the head
Node* pop(Node *head, int *n) {
  if (!head) return NULL;

  Node *temp = head;
  head = head->next;
  *n = temp->data;
  free(temp);

  return head;
}

// peek - looks at what's at the head w/o removing it

// print
void print(Node *head) {
  Node* cur = head;

  if (!cur) {
    printf("Stack empty\n");
    return;
  }

  while (cur) {
    printf("%d\n", cur->data);
    cur = cur->next;
  }
}

int main() {
  Node* stack = NULL;
  int n = 0;

  // push some data
  stack = push(stack, 1);
  stack = push(stack, 2);
  stack = push(stack, 3);
  stack = push(stack, 4);

  print(stack);

  // pop the data
  stack = pop(stack, &n);
  printf("popped: %d\n", n);
  print(stack);

  for (int i = 0; i < 3; i++) {
    stack = pop(stack, &n);
    printf("popped: %d\n", n);
  }

  print(stack);

  return 0;
}
