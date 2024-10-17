#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node* next;
} Node;

void add(Node **head, int n) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = n;
  newNode->next = *head;
  *head = newNode;
}

void printList(Node *head) {
  Node* cur = head;

  while (cur) {
    printf("List data: %d\n", cur->data);
    cur = cur->next;
  }
}

Node* reverseList(Node *head) {
  Node* prev = NULL;
  Node* cur = head;
  Node* next = NULL;

  while (cur != NULL) {
    next = cur->next;
    cur->next = prev;

    // update pointers for next iteration
    prev = cur;
    cur = next;
  }

  return prev;
}

int main() {
  Node *list = NULL; 

  add(&list, 1);
  add(&list, 2);
  add(&list, 3);
  add(&list, 4);
  add(&list, 5);

  printList(list);

  list = reverseList(list);

  printf("Reversed list:\n");
  printList(list);

  return 0;
}
