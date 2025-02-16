#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <cs50.h>

int main(void)
{
    char *string = get_string("Type something: ");

    for (int i = 0; i < strlen(string); i++)
    {
        int ch = string[i];
        string[i] = i % 2 == 0 ? tolower(string[i]) : toupper(string[i]);
    }

    printf("Spongebob says: %s\n", string);
    return 0;
}
