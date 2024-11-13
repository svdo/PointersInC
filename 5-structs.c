#include <stdio.h>

const int MAX_NAME_LENGTH = 16;

typedef struct Person
{
  char name[MAX_NAME_LENGTH];
  int age;
} Person;

void printPerson(Person p)
{
  printf("%s (%d)\n", p.name, p.age);
}

int main(int argc, char *argv[])
{
  Person p = {.name = "Ikke", .age = 42};
  printPerson(p);

  Person ducklings[] = {
    { .name = "Kwik", .age = 3},
    { .name = "Kwek", .age = 4},
    { .name = "Kwak", .age = 5}
  };
  for (int i = 0; i < sizeof(ducklings)/sizeof(Person); ++i) {
    printPerson(ducklings[i]);
  }

  Person *firstDuck = &ducklings[0];
  for (int j = 0; j < MAX_NAME_LENGTH; ++j) { // change < to <= and observe the age
    firstDuck->name[j] = 'a';
  }
  for (int i = 0; i < sizeof(ducklings)/sizeof(Person); ++i) {
    printPerson(ducklings[i]);
  }
}
