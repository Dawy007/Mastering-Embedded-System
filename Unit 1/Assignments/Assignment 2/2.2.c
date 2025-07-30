#include <stdio.h>
#include <ctype.h>
int main()
{
    char x, lower;
    printf("Enter an alphabet: ");
    fflush(stdout);
    scanf(" %c", &x);
    lower = tolower(x);
    if ('a' == lower || 'e' == lower || 'i' == lower || 'o' == lower || 'u' == lower)
        printf("%c is vowel", x);
    else
        printf("%c is consonant", x);
    return 0;
}
