#include <stdio.h>
#include <cs50.h>

int main(int argc, char **argv)
{
    for (int i = 0; i < argc; i++) {
        printf("[%d] %s\n", i, argv[i]);
    }
    
    return 0;
} 