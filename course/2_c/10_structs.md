# Structures (structs)

Structs are a way to hold multiple pieces of data. It's a grouping, or a record.

```c

struct myStruct {
  int num;
  char c;
  float f;
};

```

To declare a variable containing the struct, do:

```c

struct myStruct myStructVar;

```

To access a field inside the struct variable, use the dot notation:

```c

myStructVar.num = 10;
myStructVar.c = 'a';

printf("%d %c\n", myStructVar.num, myStructVar.c);

```

Use the `typedef` keyword in front to make a struct into a type (like an int, or float). It doesn't change anything, just makes it shorter to type.

```c

typedef struct myStruct {
  int i;
} myStruct;

myStruct structVar;

```

We can make an array of structs. 

```c

myStruct structArray[20];

structArray[0].i = 10;

```

## Exercise 1

Define an example struct. Put an integer, a float, and a char in it. Make an array out of the struct. Write a program that fills the array with sample data, then print it out.

Tip: you can initialize a struct's values when you create it:

```c
typedef struct S {
  int i;
  float f;
} S;

S s1 = { 0, 1.23 }
```

## Exercise 2

Test passing in a struct variable into a function. Change the struct variable inside the function, and check what happens to the struct variable inside and outside the function. The struct should not change.

Test return on a struct from a function.

## Exercise 3

Use the `sizeof()` function to check how big something is. So for example, `sizeof(char)` will give you 1 byte. Check the other data types to see. Finally, check `sizeof()` on a struct to see what happens. It should give you a sum of all the fields inside the struct.

## Project 1

Define a struct that holds the contact for a person, like an address book entry. Come up with fields that are useful.

Write a sample application that writes and reads the struct. Use header files to define the struct, then a main application that uses the struct.

## Project 2

Create an application that holds a set of 2D geometric shapes. The most basic building block is a point, then lines.

Create structs that define points and lines. Then create a struct that holds geometric shapes. Create functions that calculates some information from these geometric shapes. For example, how many points and perimeter.

The point of this project is to put structs inside other structs.

Distance between 2 points = sqrt((x2 - x1)^2 + (y2 - y1)^2))
