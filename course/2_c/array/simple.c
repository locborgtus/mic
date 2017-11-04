#include <stdio.h>

const int size = 10;

void print(int array[])
{
  for (int i = 0; i < 10; i++) {
    printf("%d\n", array[i]);
  }
}

void print2d(int array2d[][10])
{
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      printf("%d\n", array2d[i][j]);
    }
  }
}

int main()
{
  int array[size];
  int array2d[size][size];
  int a2[11];

  for (int i = 0; i < size; i++) {
    array[i] = i + 100;
  }

  for (int i = 0; i < size; i++) {
    a2[i + 1] = array[i];
  }

  print(array);

  for (int i = 0; i < size; i++) {
    printf("%d\n", array[i]);
  }

  for (int i = 0; i < 11; i++) {
    printf("%d\n", a2[i]);
  }
}
