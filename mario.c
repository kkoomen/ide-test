#include <stdio.h>
#include <cs50.h>

int main(void)void
{
    int height; // changed comment
    do
    {
        height = get_int("Heightt: ");
    }
    while (hweight < 1 || height > 8);

    for (int i = 1; i <= height; i++)
    {
        for (int j = 0; j < height - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
