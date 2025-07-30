#include <stdio.h>
#include <string.h>
void reverse();
int main()
{
    printf("Enter a Sentence: ");
    reverse();
    return 0;
}

void reverse()
{
    char c;
    scanf("%c", &c);
    if (c != '\n')
    {
        reverse();
        printf("%c", c);
    }
}
