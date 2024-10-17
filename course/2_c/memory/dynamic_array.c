#include <stdio.h>
#include <stdlib.h>

#define BLOCK_SIZE 8

typedef struct DynamicArray {
  int *array;
  int size;
  int used;
} DynamicArray;

void initArray(DynamicArray *a) {
  a->array = (int *)malloc(sizeof(int) * BLOCK_SIZE);
  a->used = 0;
  a->size = BLOCK_SIZE;
}

void freeArray(DynamicArray *a) {
  free(a->array);
  a->array = NULL;
  a->size = 0;
  a->used = 0;
}

void insertArray(DynamicArray *a, int n) {
  // check if array is full
  if (a->used == a->size) {
    // re-allocate the memory
    a->size += BLOCK_SIZE;
    a->array = realloc(a->array, a->size * sizeof(int));
  }

  a->array[a->used++] = n;
}

void printArray(DynamicArray *a) {
  for (int i = 0; i < a->used; i++) {
    printf("Data at %d: %d\n", i, a->array[i]);
  }
}

int main() {
  DynamicArray a;

  initArray(&a);

  for (int i = 0; i < 33; i++) {
    insertArray(&a, i);
  }

  printArray(&a);

  freeArray(&a);

  return 0;
}
