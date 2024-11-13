#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 16

typedef struct Person
{
  char name[MAX_NAME_LENGTH];
  int age;
  struct Person *next;
} Person;

Person* createPerson(const char* name, int age) {
  Person* newPerson = (Person*)malloc(sizeof(Person));
  if (newPerson == NULL) {
    return NULL;
  }
  strncpy(newPerson->name, name, MAX_NAME_LENGTH - 1);
  newPerson->name[MAX_NAME_LENGTH - 1] = '\0';
  newPerson->age = age;
  newPerson->next = NULL;
  return newPerson;
}

Person* addPerson(Person* head, const char* name, int age) {
  Person* newPerson = createPerson(name, age);
  if (newPerson == NULL) {
    return head;
  }
  if (head == NULL) {
    return newPerson;
  }
  Person* current = head;
  while (current->next != NULL) {
    current = current->next;
  }
  current->next = newPerson;
  return head;
}

void printPerson(Person *p)
{
  printf("%s (%d)", p->name, p->age);
}

void printPersonList(Person *l)
{
  while (l != NULL)
  {
    printf(" -> ");
    printPerson(l);
    l = l->next;
  }
  printf(".\n");
}

Person *insertPersonSorted(Person *head, const char* name, int age) {
  Person* newPerson = createPerson(name, age);
  if (newPerson == NULL) {
    return head;
  }
  if (head == NULL) {
    return newPerson;
  }
  if (age < head->age) {
    newPerson->next = head;
    return newPerson;
  }
  Person* current = head;
  while (current->next != NULL && current->next->age < age) {
    current = current->next;
  }
  newPerson->next = current->next;
  current->next = newPerson;
  return head;
}

int main(int argc, char *argv[])
{
  Person *personlist = calloc(1, sizeof(Person));
  personlist = createPerson("Kwik", 3);
  personlist = addPerson(personlist, "Kwek", 5);
  personlist = addPerson(personlist, "Kwak", 7);
  printPersonList(personlist);
  printf("\n");

  personlist = insertPersonSorted(personlist, "Kwuk", 4);
  printPersonList(personlist);
  printf("\n");
}
