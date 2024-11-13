#include <stdio.h>

int main(int argc, char *argv[])
{
  // We have a string
  char sample[] = "Hello world!";
  printf("sample: %s\n", sample);

  // We can get a pointer to that same string
  char *p = sample;
  printf("p as string: %s\n", p);

  // A pointer can be incremented
  p += 1;
  printf("p incremented: %s\n", p);
  printf("p as address: 0x%x\n", p);

  // A pointer can be followed
  *p += 1;
  printf("*p incremented: %s\n", p);
  printf("sample: %s\n", sample);

  // Reset
  *p -= 1;
  p -= 1;
  printf("\nRESET; sample: %s\n\n", sample);

  // Again: a pointer can be followed...
  char *q = p + 1;
  printf("q as address: 0x%x\n", q);
  printf("follow the pointer: what char is there: %c\n", *q);

  // ... and you can also get the address of something in memory
  char *addrOfSample4 = &sample[4];
  printf("q as address: 0x%x\n", addrOfSample4);
  printf("follow the pointer: what char is there: %c\n\n", *addrOfSample4);

  // Iterating using pointers; good code?
  p = sample;
  char c;
  while ((c = *p++))
  {
    printf("%c ", c);
  }
  printf("\n\n");

  // Assignment: use a loop and pointer dereference to capitalize a string
  char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
  printf("alphabet: %s\n", alphabet);
  for (char *p = alphabet; *p; p++)
  {
    *p -= 32;
  }
  printf("alphabet: %s\n\n", alphabet);
}
