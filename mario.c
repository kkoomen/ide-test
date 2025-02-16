#include <stdio.h>

int main(int argc, char *argv[]) {
    argc = 3;
    argv = test_argv;

    printf("argc: %d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("argv[%d]: %s\n", i, argv[i]);
    }
    return 0;
}