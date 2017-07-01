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

**Excercise:** Start with a penny. Ask your parent to double your money every day for a month. Write a program to see what happens after 30 days. Print out the amount you have every day.

**Excercise:** A common use for the while loop is to ask the user for input until the input is 'Y' or 'y'. Then make it so that you check for 'yes' and 'Yes' as well.
