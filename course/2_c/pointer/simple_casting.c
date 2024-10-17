// Problem: Given an integer, write a function that interprets it as a sequence of bytes. Print each byte using pointer casting.

#include <stdio.h>

int main() {
  int n = 1234;
  unsigned char *ptr = (unsigned char *) &n;

  for (int i = 0; i < 16; i++) {
    printf("%02x ", *(ptr + i));
  }
  printf("\n");
  return 0;
}
