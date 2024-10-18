// Problem: Write a function that calculates the sum of an integer array using pointer arithmetic instead of array indexing.

#include <stdio.h>

int sumArray(int *arr, int size) {
  int sum = 0;
  int *ptr = arr;

  for (int i = 0; i < size; i++) {
    sum += *(ptr + i);
  }

  return sum;
}

int main() {
  int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

  printf("%d\n", sumArray(arr, 10) / 10);

  return 0;
}
