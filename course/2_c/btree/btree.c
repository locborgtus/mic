#include <stdio.h>
#include <stdlib.h>

// Definition of a binary tree node
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

// Function to insert a node in a binary search tree (BST)
Node* insert(Node* root, int data) {
  if (root == NULL) {
    // If the tree is empty, return a new node
    return createNode(data);
  }

  // Otherwise, recursively insert the data
  if (data < root->data) {
    root->left = insert(root->left, data);
  } else if (data > root->data) {
    root->right = insert(root->right, data);
  }

  // Return the root node after insertion
  return root;
}

// Function to search for a value in the binary tree (recursive approach)
Node* searchRecursive(Node* root, int target) {
  if (root == NULL || root->data == target) {
    return root;  // Found the target or reached a leaf node
  }

  // Search in the left or right subtree depending on the target
  if (target < root->data) {
    return searchRecursive(root->left, target);
  } else {
    return searchRecursive(root->right, target);
  }
}

// Function to search for a value in the binary tree (iterative approach)
Node* searchIterative(Node* root, int target) {
  while (root != NULL && root->data != target) {
    if (target < root->data) {
      root = root->left;  // Move to the left subtree
    } else {
      root = root->right;  // Move to the right subtree
    }
  }
  return root;  // Return NULL if not found, otherwise return the found node
}

// Function to perform an in-order traversal (to verify tree structure)
void inorderTraversal(Node* root) {
  if (root != NULL) {
    inorderTraversal(root->left);
    printf("%d ", root->data);
    inorderTraversal(root->right);
  }
}

int main() {
  Node* root = NULL;
  
  // Inserting nodes into the binary search tree
  root = insert(root, 50);
  insert(root, 30);
  insert(root, 20);
  insert(root, 40);
  insert(root, 70);
  insert(root, 60);
  insert(root, 80);

  printf("In-Order Traversal of the Binary Tree: ");
  inorderTraversal(root);
  printf("\n");

  // Searching for a value using recursive search
  int target = 60;
  Node* result = searchRecursive(root, target);
  if (result != NULL) {
    printf("Element %d found in the tree (Recursive).\n", result->data);
  } else {
    printf("Element %d not found in the tree (Recursive).\n", target);
  }

  // Searching for a value using iterative search
  target = 100;
  result = searchIterative(root, target);
  if (result != NULL) {
    printf("Element %d found in the tree (Iterative).\n", result->data);
  } else {
    printf("Element %d not found in the tree (Iterative).\n", target);
  }

  return 0;
}
