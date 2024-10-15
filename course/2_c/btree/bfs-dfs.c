#include <stdio.h>
#include <stdlib.h>

// Binary Tree Node Definition
typedef struct Node {
  int data;
  struct Node* left;
  struct Node* right;
} Node;

// Function to create a new node
Node* createNode(int data) {
  Node* newNode = (Node*)malloc(sizeof(Node));
  newNode->data = data;
  newNode->left = NULL;
  newNode->right = NULL;
  return newNode;
}

// Breadth-First Search (BFS) using a queue
void bfs(Node* root) {
  if (root == NULL) return;

  // Create a queue using an array (simple implementation)
  Node* queue[100];
  int front = 0;
  int rear = 0;

  // Enqueue the root node
  queue[rear++] = root;

  printf("BFS Traversal: ");

  // Perform BFS
  while (front < rear) {
    // Dequeue a node
    Node* current = queue[front++];
    printf("%d ", current->data);

    // Enqueue the left child (if any)
    if (current->left != NULL) {
      queue[rear++] = current->left;
    }

    // Enqueue the right child (if any)
    if (current->right != NULL) {
      queue[rear++] = current->right;
    }
  }

  printf("\n");
}

// Depth-First Search (DFS) using a stack (Iterative Pre-order Traversal)
void dfs(Node* root) {
  if (root == NULL) return;

  // Create a stack using an array (simple implementation)
  Node* stack[100];
  int top = -1;

  // Push the root node onto the stack
  stack[++top] = root;

  printf("DFS Traversal: ");

  // Perform DFS (pre-order)
  while (top >= 0) {
    // Pop a node from the stack
    Node* current = stack[top--];
    printf("%d ", current->data);

    // Push the right child first (so that left is processed first)
    if (current->right != NULL) {
      stack[++top] = current->right;
    }

    // Push the left child
    if (current->left != NULL) {
      stack[++top] = current->left;
    }
  }

  printf("\n");
}

int main() {
  // Creating a binary tree
  Node* root = createNode(1);
  root->left = createNode(2);
  root->right = createNode(3);
  root->left->left = createNode(4);
  root->left->right = createNode(5);
  root->right->left = createNode(6);
  root->right->right = createNode(7);

  // Perform BFS
  bfs(root);

  // Perform DFS
  dfs(root);

  return 0;
}
