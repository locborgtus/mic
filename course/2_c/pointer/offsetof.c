#include <stdio.h>
#include <stddef.h>
#include <stdint.h>

typedef struct Foo {
  char x;
  int y;
  uint16_t z;
} Foo;

int main() {
  printf("%zu\n", offsetof(Foo, y));
  printf("%zu\n", sizeof(max_align_t));
  return 0;
}
