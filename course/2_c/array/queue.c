#include <stdio.h>

const int SIZE = 20;

int array[SIZE];

void init()
{
  for (int i = 0; i < SIZE; i++) {
    array[i] = -1;
  }
}

int isEmpty()
{
  return 1;
}

int get(int pos)
{
  return array[pos];
}
