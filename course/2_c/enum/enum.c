#include <stdio.h>
#include <assert.h>

typedef enum {
  ON,
  OFF,
  SLEEP
} DeviceState;

typedef enum {
  N1_ON = -1,
  N1_OFF,
  N1_SLEEP
} DeviceStateNegativeOne;

int main() {
  printf("ON: %d\n", ON);
  assert(ON == 0);

  printf("N1 ON: %d\n", N1_ON);
  assert(N1_ON == -1);
  return 0;
}
