#include<stdio.h>
#include<string.h>

int main()
{
    char source[] = "Test";
    char* target = strdup(source); 
    printf("%s\n", target);
    printf("%s\n", target);
    return 0;
}