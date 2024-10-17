// Problem: Write a function that computes the length of a string using pointer arithmetic (without using strlen).

#include <stdio.h>

// finds the string length using pointers
// returns -1 if string is invalid
int myStrlen(const char *str) {
  if (!str) return -1;

  const char* ptr = str;
  while (*ptr != '\0') ptr++;

  return ptr - str;
}

int main() {
  const char* str = "hello world"; // len = 11
  printf("strlen: %d\n", myStrlen(str));
  return 0;
}
