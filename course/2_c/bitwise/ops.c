#include <stdio.h>
#include <assert.h>

int bitSet(int n, int pos) {
  return n |= (1 << pos);
}

int bitClear(int n, int pos) {
  return n &= ~(1 << pos);
}

int bitToggle(int n, int pos) {
  return n ^= (1 << pos);
}

int main() {
  int num = 1234; // 0x04d2

  // set a bit
  printf("Set bit 5: 0x%x\n", bitSet(num, 5));
  assert(bitSet(num, 5) == 0x4f2);

  // clear a bit
  printf("Clear bit 4: 0x%x\n", bitClear(num, 4));
  assert(bitClear(num, 4) == 0x4c2);

  // toggle a bit
  int toggle = bitToggle(num, 11);
  printf("Toggle bit 11: 0x%x\n", toggle);
  assert(toggle == 0xcd2);

  toggle = bitToggle(toggle, 11);
  printf("Toggle bit 11: 0x%x\n", toggle);
  assert(toggle == 0x4d2);
}
