# 3: conditional and logic #

## if statements ##

### really simple example ###
An `if` statement let us write a test, and choose what to do depending on the test result.

```
if (TEST) {
  CODE;
}
```

The CODE in `if` runs if TEST is TRUE (1).

CODE is enclosed in braces.

A TEST is a logic expression that evaluates to TRUE or FALSE.

Example:

```
100 > 5 (TRUE)
50 < 71 (FALSE)
-1 < 10 (TRUE)
123 == 123 (TRUE)
5 == 10 (FALSE)
myInt > 50 (depends on myInt)
```

Full example:

```
if (myInt < 100) {
  printf('smaller than 100')
}
```

**Exercise:** Write a simple program that:

1. Read an integer from the user. Use scanf().
2. If the number is less than 10, print "This is a small number".

Make a new folder called `if`, and create the boilerplate.

Boilerplate is code that is required (and looks the same) to make the most basic program work.

### if-else ###

```
if (TEST) {
  CODE(TRUE)
} else {
  CODE(FALSE)
}
```

The `else` statement lets you run code if the TEST is FALSE.

**Exercise:** Update your program:

1. Print `number is bigger than 10` if the input is greater than 10.
2. Add a print at the end of the program that prints the number you inputted.
3. What's the difference between the last print and the print in the else?

### if-else-if-else ###

```
if (TEST) {
} else if (TEST) {
} else {
}
```

This series of statements lets you test multiple things, in sequence.

**Exercise:** Update your program:

1. Let the user know if a number is less than 0, greater than 100, or in between 0-100
