#include <stdio.h>
#include <stdbool.h>

bool isZero(int i)
{
  if (i == 0) {
    return true;
  } else {
    return false;
  }
}

int main()
{
  printf("%d\n", isZero(5));
  printf("%d\n", isZero(10));
  printf("%d\n", isZero(0));
}
