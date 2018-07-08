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

# Exercise 1

Define a struct that holds the contact for a person, like an address book entry. Come up with fields that are useful.

Write a sample application that writes and reads the struct. Use header files to define the struct, then a main application that uses the struct.
