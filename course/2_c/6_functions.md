# functions #

functions are blocks of code that are self-contained, on their own.

Functions:
  * makes code easier to read and debug
  * reusable

## Simple example ##

Example - Print out a number:

```
void printNumber(int i)
{
  printf("Number: %d\n", i);
}
```

Note:

* function can take in parameters
* note that you have to define the parameter type
* note you have to put braces around the code (just like if and loops)
* no semicolon at the end of the curly (just like if and loops)

To use a function, you "call" it.

```
main() {
  printNumber(5);
  printNumber(10);
}
```

You called a function before. For example, printf() and floor().

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

If you put in `void`, that means no return and you don't have to have a return line.

If you put in a type, you have to have a return line.

## Exercise ##

Write a function called isEven() that checks if a number is even or odd. Assume zero is even.

Write a few test cases, and print out the value.

Try removing one of the return lines, and see what happens.

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

## Where can you call functions ##

Inside if statements:

```
if (max(5, 10) > 8) {
  printf("a number is bigger than 8");
}
```

Inside loops:

```
for (int i = max(5, 10); i < 20; i++) {
  printf("%d\n", i);
}
```

As a paramter to another function:

```
max(max(5, 10), 8);
```

## Exercise ##

Write a set of functions that computes the characteristics of a rectangle.

First take in 2 numbers, a and b.

Then write functions that calculate characteristics like the perimeter, area

* example: write a set of geometry support functions, like square area, perimeter, and the longest distance between 2 points. Hint: use the pythagorean theorem. The function is called sqrt(), if you include math.h and compile with -lm.

## Homework ##

Collatz conjecture

Given any number, if you run the following algorithm continually, you'll always come to the number 1.

If the number is even, divide by 2.

If the number is odd, multiply by 3 and add 1.

Ask the user for a number, and print out how many steps it took to get to 1. For every step, print out the number.

Hint: Use while loops. Find out your stopping condition.

Hint: Write a function called collatz() and implement the algorithm. Use the return to run the function again, if needed.
