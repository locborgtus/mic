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
