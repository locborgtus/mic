#include <stdio.h>

int main() {
  unsigned int *ptr = (unsigned int*)0x4;
  ptr++;

  printf("Pointer value: %p\n", ptr);

  return 0;
}
