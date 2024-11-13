#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Hello World!\n\n");

    printf("Number of command line arguments: %d\n", argc);
    for (int i = 0; i < argc; ++i) {
        printf("    arg %d: %s\n", i, argv[i]);
    }

    printf("\nBye!\n\n");
}
