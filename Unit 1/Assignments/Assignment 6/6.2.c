#include <stdio.h>

int main()
{
    char c = 'A';
    char *ptr = &c;

    for (int i = 0; i < 26; i++)
    {
        printf("%c ", *ptr);
        (*ptr)++;
    }

    return 0;
}