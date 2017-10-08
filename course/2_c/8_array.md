# Arrays #

Arrays are a list of variables. Think of them like lots of buckets lined up on a shelf.

Each bucket in an array is called an `element`.

Each element must have the same type.

Declare an array by `int someArray[10];`, where the size is 10.

Access each element with the `[]` operator. So to get the first element, `array[0]`.

Array size can't be changed when program is running. Once you declare it, that's how big it is.

Operations is done element wise.

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

## Exercise ##

Create a function called `print` that prints the contents of an integer array. Use this to declare the function.

```c
void print(int array[])
{
}
```

You'll be missing one piece of info to print the array. What is it?

## Exercise ##

Fill an integer array with a large number of random numbers (10000). Find the min and max number in this array, and where they are.

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

## Exercise

Use the same basic code as before to fill an array. Write a function to calculate the average.

You can get a range of random numbers using this piece of code:

```c
rand() % (max_number + 1 - minimum_number) + minimum_number
```

Set max to be 100, and minimum is 0. This is a good place to write a function to get a range of random numbers.

Verify that the average is (about) half of the sum of maximum and minimum. This only works because it's random numbers.

## Excercise

Quick exercise: copy 1 array to another

```c
void copyArray(int src[], int dst[], int size)
{
}
```

## Exercise

Find and print the set of duplicate numbers in an array. Your set of duplicate numbers should be in an array of its own. What is the proper size for the duplicate array?

```c
void findDups(int array[], int dups[], int size)
{
}
```

## Exercise

Continuing from the previous exercise, count how many times each duplicate appears. Think of what other storage you need in order to count duplicates.

## Exercise

Continuing from the previous exercise, remove all the duplicate numbers from the array. You will need to write a function called `shiftLeft`. The function moves every element left by 1 position. Remember that your random numbers should be positive, so use this to help you keep track of empty elements. The function should have this declaration:

```c
void shiftLeft(int array[], int size, int pos)
{
}
```

## Exercise

Write a function to add a number to the array at a particular position. Very similar to removing, but the other direction. For now, assume the array can't grow, so the last element gets dropped when adding.

```c
void shiftRight(int array[], int size, int pos)
{
}
```

## Exercise / Homework

Implement a `queue` and a `stack`. A Queue uses an array to keep track of elements in a last in, first out way. Also called FIFO. A stack also stores elements, but in a first in, first out way. Also called LIFO.

Assume positive integers for data type.

For a queue, write functions `enqueue()`, `dequeue()`, `reset()`, and `length()`.

For a stack, write functions `push()`, `pop()`, `reset()`, and `length()`.

Write enough sample uses of each to test corner cases, like dequeue when empty and pushing when full.

## Exercsise / Homework

Bubble sort. Sorting makes array elements go in one order.

![Bubble Sort](http://www.xybernetics.com/techtalk/SortingAlgorithmsExplained/images/bubble1.gif)

Using this visualization, develop the code using an array of random numbers. Sort the array using ascending order (from smallest to biggest).

Code (if we're stuck).

```c
for (i = 0 ; i < ( n - 1 ); i++) {
  for (j = 0 ; j < n - i - 1; j++) { // this is an optimization, we can leave this like a regular loop
    if (array[j] > array[j + 1]) {   // For decreasing order use <
      swap       = array[j];
      array[j]   = array[j + 1];
      array[j + 1] = swap;
    }
  }
}
```

## 2D arrays

A 2 dimensional array can be declared as:

```c
int array2D[100][200]
```

Iterate over it with 2 nested for loops:

```c
for (int i = 0; i < 100; i++) {
  for (int j = 0; i < 200; j++) {
    printf("%d ", array2D[i][j]);
  }
}
```

To pass a 2D array to a function, you have to give its size (in a 1D array, you don't)

```c
void print2d(int array2d[][10])
{
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      printf("%d\n", array2d[i][j]);
    }
  }
}
```

## Exercise

Fill in a 2D array with random numbers, and calculate the min, max, and average like you did with 1D array. Set the random number range to be [0, 100].
