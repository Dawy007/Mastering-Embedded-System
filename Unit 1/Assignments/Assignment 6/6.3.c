#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    char *ptr = str;
    printf("Input a String: ");
    fgets(str, sizeof(str), stdin);
    ptr += strlen(str);
    for (int i = strlen(str); i >= 0; i--, ptr--)
    {
        printf("%c", *ptr);
    }
    return 0;
}