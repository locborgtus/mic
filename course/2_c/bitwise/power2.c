// Problem: Write a function to check if a number is a power of two using bitwise operators.

#include <stdio.h>

int isPowerOfTwo(int n) {
  // a number is a power of 2, if:
  // given a number n
  // and a number n - 1
  // if these 2 are bitwise AND together, a number power of 2 is zero

  return ((n & (n - 1)) == 0);
}

int main() {
  int n = 2;
  printf("is Power 2: %d : %d\n", n, isPowerOfTwo(n));

  n = 9;
  printf("is Power 2: %d : %d\n", n, isPowerOfTwo(n));
  return 0;
}
