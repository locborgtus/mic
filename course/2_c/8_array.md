# Arrays #

Arrays are a list of variables. Think of them like lots of buckets lined up on a shelf.

Each bucket in an array is called an `element`.

Each element must have the same type.

Declare an array by `int someArray[10];`, where the size is 10.

Access each element with the `[]` operator. So to get the first element, `array[0]`.

The last element is `someArray[size - 1]`, because an array starts at 0. If you try accessing out of range, your program may crash.

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

Array size can't be changed when program is running. Once you declare it, that's how big it is.

Operations is done element wise.

## Exercise ##

Create a function called `print` that prints the contents of an integer array. Use this to declare the function.

```c
void print(int array[])
{
}
```

You'll be missing one piece of info to print the array. What is it?

## Exercise ##

Fill an integer array with a large number of random numbers. Write a function to calculate the average.

Recall how to use rand():

```c
#include <stdio.h>
#include <stdlib.>

int main()
{
  printf("rand max: %d\n", RAND_MAX);
  srand(4567);
  for (int i = 0; i < 10; i++) {
    printf("%d\n", rand());
  }
}
```

You can get a range of random numbers using this piece of code:

```c
rand() % (max_number + 1 - minimum_number) + minimum_number
```

Verify that the average is half of the maximum, if minimum is zero.
