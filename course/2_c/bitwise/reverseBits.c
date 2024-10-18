#include <stdio.h>

unsigned int reverseBits(unsigned int n) {
  unsigned int r = 0;
  for (int i = 0; i < sizeof(unsigned int) * 8; i++) {
    r <<= 1;
    r |= (n & 0x1);
    n >>= 1;
  }

  return r;
}

int main() {
  int n = 0x3d;

  // n = 0x5, reverse = 1010 0xA
  // n = 0011 1101 0x3d, reverse = 1011 1100 0xbc

  printf("%x\n", reverseBits(n));
  
  return 0;
}
