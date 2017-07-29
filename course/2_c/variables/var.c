#include <stdio.h>
#include <stdbool.h>

int main()
{
  bool myBool = true;
  int myInt = 123;
  float myFloat = 0.123;
  char myChar = 'a';

  printf("%d %d %f %c\n", myBool, myInt, myFloat, myChar);

  scanf("%d %f", &myInt, &myFloat);
  printf("%d %f\n", myInt, myFloat);
}
