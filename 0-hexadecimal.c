#include <stdio.h>

int main()
{
  for (int i = 0; i < 16; ++i)
  {
    for (int j = 0; j < 16; ++j)
    {
      printf("%02x  ", 16 * i + j);
    }
    printf("\n");
  }
}
