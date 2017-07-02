# while loops #

A while loop let us repeat code as often as we want.

```
while(<condition>) {
  <code>
}
```

Use a while loop for running things that stops at a certain **condition**, not the amount of **times**.

**Excercise:** Write a while loop that prints out a the number 1 to 10. (This is basically a for loop)

The braces are optional.

**Excercise:** Assuming the previous exercise takes at least 2 lines, try to take out the braces and see what happens.

It's also a common error to put a `;` at the end of the while loop, like this:

```
while (<cond>);
  printf("hello world\n");
```

**Excercise:** Guess what happens when there's a `;` at the end

**Excercise:** A common use for the while loop is to ask the user for input until the input is 'Y' or 'y'. Hint: the way to represent a character is with single quotes.

There's also another loop type, called `do-while`:

```
do {
} while (<condition>
```

The main difference is the do-while loop will run at least once.

**Excercise:** Change the previous input program to use the do-while loop. Then make it so that you check for 'yes' and 'Yes' as well. Which version do you prefer? Hint: There's a function called `strcmp`, if you include <string.h>. The function returns a 0 if the strings are equal. The way to use it is:

```
int result = strcmp("hi", "hello");
```

**Excercise:** Start with a penny. Ask your parent to double your money every day for a month. Write a program to see what happens after 30 days. Print out the amount you have every day. 
  * Then, find out the rate they have to add your money to get to 1 million dollars at 30 days (hint: determine the percentage they are increasing now, and think of a way to change the rate and keep testing until you get to 1 million).
  * Then, print out at what day would you have 100 million dollars (100 000 000) or more, at the double rate.
---

**Homework:** 

Ask the user to input 2 numbers, X and Y (row and column). Use these two numbers to create a 2D grid of the letter 'O'. Make sure to keep asking the user for numbers until they are valid. Hint: scanf will return a 1 if it succeeds, not 1 if it fails.
