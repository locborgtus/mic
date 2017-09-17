# Arrays #

Arrays are a list of variables. Think of them like lots of buckets lined up on a shelf.

Each bucket in an array is called an `element`.

Each element must have the same type.

```c
#include <stdio.h>

int main()
{
  int size = 10;
  int array[size];

  for (int i = 0; i < size; i++) {
    array[i] = i + 100;
  }

  for (int i = 0; i < size; i++) {
    printf("%d\n", array[i]);
  }
}
```

## Exercise ##

Fill an array of size 100 with random numbers.
