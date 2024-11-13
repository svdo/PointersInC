#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char sample[] = "ABC abc";
  printf("String: %s\n", sample);
  printf("Length: %lu\n", strlen(sample));
  printf("Characters:\n");
  for (int i = 0; i < strlen(sample); ++i) { // change < to <=
    char c = sample[i];
    printf("  %i: %c (%d / 0x%x)\n", i, c, c, c);
  }
}
