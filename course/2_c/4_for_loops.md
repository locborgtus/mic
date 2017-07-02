# Loops #

Loops are something that makes the computer do something over and over again. Super important to programming.

## New operators ##

* Introduce the `--` and `++` operator. Write a simple program to try it.

* Introduce the `+=` and `-=` operator. Write a simple program to try it.

## Exercise: why loops? ##

* **Exercise**: print out consecutive numbers from 1 to 5. Tip: use a variable to keep your current number.

* **Exercise**: print out consecutive nubmers from 1 to 10. Keep using a variable to keep your current number.

* What if we have to do this for 100? How about 1000? Or even 10000?

## For loop ##

A `for` loop let us do many repeatable operations. An example:

```
for (int i = 0; i < 10; i++) {
    <your code here>
}
```

Let's talk about what's between the semicolons. There are 2 semicolon, 3 sections:

* 1st section: Define and initialize **loop control variables**.
    * 0 is popular.
    * Can also define and initialize multiple variables using a comma
        ```
        for (int i = 0, j = 0; i < 10; i++) {
            <your code here>
        }
        ```

* 2nd section: Define when the loop **stops**.
    When the condition become `false`, the loop stops.

* 3rd section: Define how to change the loop variable.
    * Very common to use are `++` or `--`, but `+=` or `-=` works too.
    * Or whatever you like, division or multiplication works too

# For loop Exercise #

* Print out **consecutive** numbers from 1 to 100.
* Print out all **even** numbers between 1 to 100. There are 2 ways to do it. Hint: modulor or clever loop control.
* Were you using `<` or `<=`? What happens if you change to either one?

# Infinite Loop #

* A loop goes **infinite** when it misses its stop condition.

* **Exercise**: Make an infinite loop. Hint: to stop a program from running, hit `ctrl-c`.

* Or, this is also an infinite loop:

```
for(;;) {
}
```

* An infinite loop is not always bad. You can use it to keep doing something when you don't know for sure when to stop.

* Use the special word `break` to stop a loop. Example:

```
for (int i = 0; i < 100; i++) {
    if (i == 50) {
        break;
    }
    
    print("%d\n", i);
}
```

* **Exercise**: Continue to read a number from the user until the number is larger than 100.

* You can change the control variable inside the for loop.

## More exercises ##

* **Excercise:** Change the control variable inside the loop. Try to make the determination if this is a good thing to do.

* You can also put one loop inside another. For example:

```
for (...) {
  for (...) {
  }
}
```

* **Excercise:** Print out a 2-dimensional (2D) grid of the number 0. Separate each 0 with a space per column, and new lines (\n) for each row.

## Homework ##

* Convert whole numbers to roman numerals. Roman numerals:

    | I | V | X  | L  | C   | D   | M    |
    |---|---|----|----|-----|-----|------|
    | 1 | 5 | 10 | 50 | 100 | 500 | 1000 |
    
    Example: 123 = CXXIII
    
    Hint: use `for` loops to print out the number of characters for each representation.
    
* Fibonacci sequence.

    Fibonacci is an Italian mathematician. There's a sequence of number that he found. A number is the sum of the previous 2 numbers. Example:
    
    1, 1, 2, 3, 5, 8, 13
    
    Write a program that makes `n` number of fibonacci numbers.
    Fibonacci numbers are very common in nature.

    ![fib](https://upload.wikimedia.org/wikipedia/commons/2/2e/FibonacciSpiral.svg)
    ![flower](http://memolition.com/wp-content/uploads/2014/07/examples-of-the-golden-ratio-you-can-find-in-nature-84791.jpg)
    ![shell](http://2ff8n03drmib1b12373aauek-wpengine.netdna-ssl.com/assets/images/Art/Fibronacci/nautilus%20shell.jpg)
