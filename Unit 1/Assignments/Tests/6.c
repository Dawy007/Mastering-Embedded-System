#include <stdio.h>
#include <string.h>
int strint_to_int(const char *str)
{
    int result = 0;
    while (*str)
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    return result;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character
    printf("You entered: %s\n", str);
    printf("Converted to integer: %d\n", strint_to_int(str));
    return 0;
}