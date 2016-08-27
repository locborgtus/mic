# Hello World in C #

## Intro ##

* A computer program is written in a language
* We'll be learning something called the C language
* Remember:
  * A computer is dumb, you have to tell it exactly what to do
  * give it proper instructions
* A proper program, in general, should:
  * follow the rules of the language, so words have to be spelled right, follow the correct order
  * the instructions have to be in the right order
* you don't have to memorize everything, when you get the hang of it you will be natural. like english.
* it's creative!
* use a text editor, like vim, to write programs

## Write our first program ##

* make a folder called `hello_world`
* inside the folder, use vim to write a file called `program.c`
* type in this program:

```
#include <stdio.h>

int main()
{
  printf("hello world\n");
  return 0;
}
```

* Run these commands to compile your program (open another terminal makes it easier)

```
gcc -c program.c -o program.o
gcc program.o -o program
```

* Run your program by typing `./program`. See what happens.
* You just wrote your first program! But what happened?

## What is compiling ##

* text editor -> source code file -> compiler -> machine code -> linker + library files = executabe
* let's break it down to what you did:
 * text editor makes source code file - vim + typing make program.c
 * compiling was `gcc -c program.c -o program.o`
 * the machine code file is `program.o`
 * linking is `gcc program.o -o program`
 * that makes the file called `program`

## Let's see what you just typed ##

`#include <stdio.h>`
 * This is a library for printing things on the screen, called header files
 * There's a lot of other libraries, or someday you'll write your own

`int main()`
* This is telling the computer where the first instructions are about to start
* This is called the "main function". Every C program has this.

`{`
* Every function needs to have starting braces

`printf("hello world\n");`
* This is the line where you print the text `hello world`

`return 0`
* This is telling the computer this function is done
* For main(), 0 means everything is good. Not a 0 means an error happened.

`}`
* Every function needs to have matching closing braces

## Let's change your program ##

* Edit your soruce file. Go to the `printf` line
* The double quotes define a string. A string is text.
* Edit the string to the back of the string, but before the `\n`
* So something like `hello world Simon\n`
* Re-compile and run. Your name should show up.

## Sometimes, typos happen ##

* Edit your source file. Go to the open braces line.
* Delete the open braces with the `x` key. Or hit `dd`.
* Re-compile. What happens?
* Error! The compiler checks your grammar when you compile.
* Restore the `{` with the `u` key before continuing
 
## Let's play with printf ##

* add a `\t` to the front of the string. Re-compile and run.
* The `\t` is a special character. It means a tab
* Get rid of the `\n` and recompile. See what happens.
* Bring the `\n` back.
* Add a `%d` after the `\t`. After the string, add a comma and a number, like `123`
* Re-compile and run
* Can also do arithmetic. Replace `123` with `1 + 2 + 3`.
* The `%d` means `printf` expects a number in the back.
* Try `%s`. That means string. Try using that to print your name in the back.
* A few other things to try:
  * Add another `%d` somewhere, but don't give it a number in the back. Compile.
  * Add another printf. Use a combination of `\n` and no `\n` to see what happens.
