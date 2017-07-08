# functions #

functions are blocks of code that are self-contained, on their own.

Functions:
  * makes code easier to read and debug
  * reusable
  * can take in parameters

## Simple example ##

Example - Print out a number:

```
void printNumber(int i)
{
  printf("Number: %d\n", i);
}
```

## Return value ##

A function can also return a value.

Example - return if a number is equal to zero.

```
#include <stdbool.h>

bool isZero(int i)
{
  if (i == 0) {
    return true;
  } else {
    return false;
  }
}

printf("%d\n", isZero(5));
printf("%d\n", isZero(10));
printf("%d\n", isZero(0));
```

Note the `bool` in front of the function. That's defines the return type.

## Exercise ##

Write a function called isEven() that checks if a number is even or odd. Assume zero is even.

Write a few test cases, and print out the value.

## Example ##

A function can take in more than 1 parameter.

```
void printTwoNumbers(int a, int b)
{
  printf("%d %d\n", a, b);
}
```

## Exercise ##

Write a function called max(). Take in 2 numbers, and return the one that is bigger.

Also write a function called min(), same functionality as max(), but reverse.




* example: write a set of geometry support functions, like square area, perimeter
