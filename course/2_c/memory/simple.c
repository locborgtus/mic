// Problem: Create a Person struct with dynamic memory for the name and write functions to create and free a Person.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Person {
  char* name;
  int age;
} Person;

Person* createPerson(char *name, int age) {
  Person* p = (Person *) malloc(sizeof(Person));

  if (!p) return NULL;

  p->name = (char *) malloc(strlen(name) + 1);
  strcpy(p->name, name);
  p->age = age;

  return p;
}

void printPerson(Person* p) {
  if (!p) {
    printf("Invalid person to print\n");
    return;
  }

  printf("Person: name: %s, age: %d\n", p->name, p->age);
}

void freePerson(Person* p) {
  if (!p) return;

  // free memory in order of allocation
  free(p->name);
  free(p);
}

int main() {
  Person* p = createPerson("Simon", 46);
  printPerson(p);
  freePerson(p);
  return 0;
}
