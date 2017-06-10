# variables, data types, comments, input #

* variables are things that hold data
* data types in C:
  * booleans
  * strings
  * characters
  * int
  * float (decimal numbers)
* in C, you declare a variable like this:
  * `<variable type> <variable name> = <value>;`
* let's do a basic exercise to try out variables
  * set up a folder, call it `variables`
  * make a file call `basic.c`
  * let's try making an integer variable. they're the easiest:

```
int n = 5;
printf("value: %d\n", n);
```

  * the value on the right is optional, called initialization
  * using <value> to initialize the variable is optional, try printing out value without
  
```
int n;
printf("value: %d\n", n);
```

* variable arithmetics
  * try:

```
int n = 2;
printf("value: %d\n", n + 5);
printf("value: %d\n", n);
```

  * note that the variable didn't change
  * the variable only changes when you use the `=` sign on it
  * try
  
```
int n = 2;
printf("value: %d\n", n);
n = 5 + 3;
printf("value: %d\n", n);
```

* floating point (decimal) data
  * integers are whole numbers. floating point are decimal numbers with partials
  * anything with a decimal point are considered floating point numbers
  * examples: `1.2345, 0.5, -876.54`
  * use `%f` in printf to print. try:
  
```
  float f = 1.234;
  printf("float: %f\n", f);
```

* why not use everything as floats?
  * floats are slower and bigger
  * easier to read whole numbers

* choosing variable names
  * should be easy to read
  * if you use really short names, you won't know what the program does when you read it back
  * variable names are case-sensitive. So `pennies` and `Pennies` are different.
  * limits. can't use reserved names like `printf` or `float`. can't start with a number `5_cents`

* standard to declare all the variables in the function on the top. easier to read and find variables.

* arithmetic

* **exercise**: try different variable types
 * make a new file called `var.c`
 * for each of the 4 basic variable types (int, float, char, bool), make a variable `myInt` and so on and print
 * leave bool last. bool is special, `#include <stdbool.h>`
 * for printf, `%d` for int and bool, `%c` for char, and `%f` for float
 * you can try to assign non-matching data to variables. but it's weird, so don't do that. try assigning `123.45` to an int.

* **exercise**:
  * write a program that calculates coin types to dollar values, called coins
  * initialize number of pennies, dimes, and quarters
  
* comments
  * explain what you are doing in the program
  * the compiler doesn't really care about comments
  * 2 ways to make comments
  * `//`, only works on 1 line

```
// setting the x variable to 2
int x = 2;
```

  * or `/* */` pair. these can go multiplie lines:

```
/*
 hi
 this is a comment
 */
```

  * comments are useful because:
    * makes your code easier to read
    * other people can understand your code
    * useful for debugging when you explain your logic

* read in variables from user
  * in the dollar calculator, we initialized the variable from within code
  * this is bad, because it's not flexible
  * every time we want to change the amount, we have to recompile
  * solution: read from user. use the `scanf` function
  * scanf is kinda like printf, except backwards.

```
printf("enter an integer:\n");
scanf("%d", &n);
```

  * note in scanf there is no `\n`, and there is an `&` before the variable
  * ***exercise*** Write a sample program to check what happens if the user inputs wrong numbers
    * do `scanf("%d %f", &myInt, &myFloat);`, but input the wrong types
    * do `scanf("%d abc %f", &myInt, &myFloat);`, and see what happens

* update coins program to read number of coins from user
  * add comments to show what the program is doing
  * for example, input, calculation, and output (remember the black box?)

* homework or final exercise
  * write a program called fluids to calculate imperial fluid amount to gallons
  * 1 gallon = 4 quarts = 8 pints = 16 cups = 128 fluid ounces
  * ask the user to input quarts, pints, cups, and ounces
  * introduce `if` statements
 
* Other similar concepts
  * Currency (quarters, nickels, dimes)
  * Time (Week, days, hours)
  * Roman numerals (https://en.wikipedia.org/wiki/Roman_numerals)
