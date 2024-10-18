#include <stdio.h>
#include <stddef.h>

void testStddef() {
  size_t s = sizeof(int);
  printf("Size: %zu\n", s);
  
  // testing ptrdiff_t
  int arr[] = { 10, 20, 30, 40, 50, 60 };
  int* start = &arr[0];
  int* end = &arr[6];

  ptrdiff_t diff = &arr[5] - &arr[0];
  printf("%tx\n", diff);

  for (ptrdiff_t i = 0; start + i < end; i++) {
    printf("Element %td: %d\n", i, *(start + i));
  }

  int arr2[10] = { 0 };
  int *ptr1 = &arr2[0];
  int *ptr2 = &arr2[10];

  if (ptr2 - ptr1 > 0) {
    printf("ptr2 is %td elements ahead of ptr1\n", ptr2 - ptr1);
  } else {
    printf("ptr2 is not ahead of ptr1");
  }

  if (ptr2 - ptr1 >= 10) {
    printf("ptr2 is out of bounds");
  } else {
    printf("ptr2 is within array %td\n", ptr2 - ptr1);
  }
}

int main() {
  testStddef();

  return 0;
}
