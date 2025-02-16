#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

const char *WORD = "cat";
const char *REPLACEMENT = "dog";
const int WORD_LEN = 3;

void convert_word(char *string, int index)
{
    for (int i = 0; i < strlen(REPLACEMENT); i++)
    {
        string[index + i] = isupper(string[index + i])
            ? toupper(REPLACEMENT[i])
            : tolower(REPLACEMENT[i]);
    }
}

bool is_taboo_word(char *string, int index)
{
    for (int i = 0; i < strlen(WORD); i++)
    {
        if (tolower(string[index + i]) != tolower(WORD[i]))
        {
            return false;
        }
    }

    return true;
}

int main(void)
{
    char *string = get_string("Type something: ");
    int len = strlen(string);

    for (int i = 0; i < len - (WORD_LEN - 1); i++)
    {
        if (is_taboo_word(string, i))
        {
            if ((i == 0 && string[i + WORD_LEN] == ' ') ||             // check for 'cat ' at the beginning
                (i == len - WORD_LEN && string[i - 1] == ' ') ||       // check for ' cat' at the end
                (string[i - 1] == ' ' && string[i + WORD_LEN] == ' ')) // check for ' cat ' in the middle
            {
                convert_word(string, i);
                i += WORD_LEN;
            }
        }
    }

    printf("Don't say that, say: %s", string);

    return 0;
}
