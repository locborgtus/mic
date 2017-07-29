#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("rand max: %d\n", RAND_MAX);
  srand(4567);
  for (int i = 0; i < 10; i++) {
    printf("%d\n", rand());
  }
}
