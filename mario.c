#include <stdio.h>

int main(int argc, char *argv[]) {
    char *test_argv[] = {"program_name", "test1", "test2", NULL};
    argc = 3;
    argv = test_argv;

    printf("argc: %d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("argv[%d]: %s\n", i, argv[i]);
    }
    return 0;
}