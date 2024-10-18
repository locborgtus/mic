#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

// Define the size of the memory pool and the size of each block
#define POOL_SIZE 128
#define BLOCK_SIZE sizeof(max_align_t) * 6

// Memory pool structure
typedef struct MemPool {
  unsigned char pool[POOL_SIZE];
  size_t next_free;
} MemPool;

// Function to initialize the memory pool
void initMemPool(MemPool *mp) {
  mp->next_free = 0;
}

// Function to allocate a block from the memory pool
void* allocateBlock(MemPool *mp) {
  // check if mem pool is full
  if (mp->next_free + BLOCK_SIZE > POOL_SIZE) {
    return NULL;
  }

  // we have memory, allocate and return pointer
  void *ptr = &mp->pool[mp->next_free];
  mp->next_free += BLOCK_SIZE;
  return ptr;
}

// Function to reset the memory pool (optional, for reuse)
void resetMemPool(MemPool *mp) {
  mp->next_free = 0;
}

// Example structure to store in the memory pool
typedef struct {
    int id;
    char name[32];
} ExampleStruct;

int main() {
    // Create and initialize the memory pool
    MemPool mp;
    initMemPool(&mp);
    
    // Allocate memory for ExampleStruct objects from the memory pool
    ExampleStruct *obj1 = (ExampleStruct*)allocateBlock(&mp);
    ExampleStruct *obj2 = (ExampleStruct*)allocateBlock(&mp);

    printf("%p\n", obj1);
    printf("%p\n", obj2);
    
    if (obj1 && obj2) {
        // Use the allocated memory
        obj1->id = 1;
        snprintf(obj1->name, sizeof(obj1->name), "Object 1");
        
        obj2->id = 2;
        snprintf(obj2->name, sizeof(obj2->name), "Object 2");
        
        // Print the objects
        printf("Object 1: ID=%d, Name=%s\n", obj1->id, obj1->name);
        printf("Object 2: ID=%d, Name=%s\n", obj2->id, obj2->name);
    } else {
        printf("Memory pool is out of space!\n");
    }
    
    // Reset the memory pool (optional)
    resetMemPool(&mp);
    
    return 0;
}
