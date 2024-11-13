#include <stdio.h>
#include <string.h>

void showStringInfo(char str[])
{
  printf("String: %s\n", str);
  printf("Length: %lu\n", strlen(str));
  printf("Characters:\n");
  for (int i = 0; i < strlen(str); ++i) // change < to <=
  {
    char c = str[i];
    printf("  %i: %c (%d / 0x%x)\n", i, c, c, c);
  }
  printf("\n");
}

int main(int argc, char *argv[])
{
  char sample[] = "ABC abc";
  showStringInfo(sample);

  for (int i = 0; i < strlen(sample); ++i) {
    sample[i] += 1;
  }
  showStringInfo(sample);
}
