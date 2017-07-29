#include <stdio.h>

int main() {
  char c = ' ';

  while (c != 'y') {
    if (c != '\n')
      printf("Enter a character: ");
    scanf("%c", &c);
  }
}
