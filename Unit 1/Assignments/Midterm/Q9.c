#include <stdio.h>
#include <string.h>

void reverse_words(char str[]);

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    reverse_words(str);

    return 0;
}

void reverse_words(char str[])
{
    int len = strlen(str);
    char words[10][100];
    int word_count = 0, i = 0, j = 0;

    for (int k = 0; k <= len; k++)
    {
        if (str[k] == ' ' || str[k] == '\0')
        {
            words[word_count][j] = '\0';
            word_count++;
            j = 0;
        }
        else
        {
            words[word_count][j++] = str[k];
        }
    }

    for (int k = word_count - 1; k >= 0; k--)
    {
        printf("%s", words[k]);
        if (k > 0)
            printf(" ");
    }
    printf("\n");
}
