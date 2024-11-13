#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  // This is ok:
  char str[] = "Hello world!";
  char *p = str;
  printf("%s\n", p);

  // This is also ok:
  char *q = "Hello world!";
  printf("%s\n", q);

  char *input = (char *)malloc(16);
  for (int i = 0; i < 16; ++i)
  {
    input[i] = 'a' + i;
  }
  input[16] = 0;
  printf("%s\n", input);

  // First run like this:
  // cc -o 4-dynamic-allocation 4-dynamic-allocation.c && ./4-dynamic-allocation
  // Then:
  // DYLD_INSERT_LIBRARIES=/usr/lib/libgmalloc.dylib ./4-dynamic-allocation
}
