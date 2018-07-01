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
