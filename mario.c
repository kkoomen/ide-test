#include<stdio.h>
#include<string.h>

int main()
{
    char source[] = "GeeksForGeeks";

    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char* target = strdup(source); 

    printf("%s\m", target);
    return 0;
}