# 3: conditional and logic #

## if statements ##

### really simple example ###
An `if` statement let us write a test, and choose what to do depending on the test result.

```
if (TEST) {
  CODE;
}
```

The CODE in `if` runs if TEST is `true` (1).

CODE is enclosed in braces.

A TEST is a logic expression that evaluates to `true` or `false`.

Example:

| sign | Logic Operators |
|------|-----------------|
| <    | less than       |
| >    | greater than       |
| <=   | less than or equal |
| >=   | greater than or equal |
| ==   | equal |
| !=   | not equal |
| !    | not / opposite |

```
100 > 5 (TRUE)
50 > 71 (FALSE)
-1 < 10 (TRUE)
123 == 123 (TRUE)
5 == 10 (FALSE)
25 >= 10 (TRUE)
25 < 25 (FALSE)
25 <= 25 (TRUE)
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
2. If the number is less than 10, print "number is less than 10".
3. Test your program with a variety of numbers.

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

The `else` statement lets you run code if the TEST is `false`.

**Exercise:** Update your program:

1. In the else {} block, print `number is bigger than 10`.
2. Add a print at the end of the program that prints the number you inputted.
3. Test your program with a variety of numbers.
4. What's the difference between the last print and the print in the else?

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
2. Use logic of deduction. Draw out on paper what the choices for a number can be if needed.

### compound tests ###

```
if (TEST1 logic operator TEST2) {
}
```

A logic operator can be `&&` (and), `||` (or).

Examples:

```
if ((myInt > 0) && (myInt < 10)) {
  printf("my number is between 0 and 10\n");
}

if ((myInt < 0) || (myInt > 10)) {
  printf("my number is less than 0 or is greater than 10\n");
}
```

**Exercise:**

1. On a piece of paper, draw a 2x2 table
2. Label this as `OR`.
3. Label the row and column with true and false.
4. Fill out each table box when you perform the OR test. Think of real life examples to help you.
  * Example: A local restaurant is giving out free pizzas. The are giving out free pizzas on Tuesday OR before 4:00 PM. When do you get a free pizza?
  * You can also use the computer to figure it out. `if (true || false) { ... }`.
5. Repeat with `AND`.

| OR             | Tuesday | any other day |
|----------------| ------- | ------------- |
| <b>before 4:00 | free    | free          |
| <b>after 4:00  | free    | not free      |

**Homework:**

Paper bill calculator.

1. Have the user input a dollar amount, anything from $0.45 to $1234.56
2. Quit the program if numbers are not valid. Give some example of invalid inputs?
3. Hint: scanf("%d") will return 0 if fail, 1 if succeeds.
4. No one want to carry too many coins. Recommend the number of bills to use. Example:

  * $156.23: 1x $100 bill, 1x $50 bill, 6x $1 bill
  * $52.34: 1x $50 bill, 12x $2 bill 
  * $652.33: 6x $100 bill, 1x $50 bill, 2x $1 bill
  
 5. Hint: think about how many different bill types there are. Start with the largest bill type, and subtract the remainder.
 6. Print out the most type of bills used. Example: $567.32 would have 5x $100, 1x $50, 1x $10, and 7x $1. The answer is 7x $1. You'll have to keep track of the largest amount of bills used over time.

* Extra credit:

Figure out exact change in addition to bills.

Hint: remember to subtract the coins from the amount before continuing to the next coin type.
