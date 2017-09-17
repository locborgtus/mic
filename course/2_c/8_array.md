# Arrays #

Arrays are a list of variables. Think of them like lots of buckets lined up on a shelf.

Each bucket in an array is called an `element`.

Each element must have the same type.

Declare an array by `int someArray[10];`, where the size is 10.

Access each element with the `[]` operator. So to get the first element, `array[0]`.

The last element is `someArray[size - 1]`, because an array starts at 0. If you try accessing out of range, your program will crash.

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

Fill an array of size 100 with random numbers. Then print out every 5th element.
