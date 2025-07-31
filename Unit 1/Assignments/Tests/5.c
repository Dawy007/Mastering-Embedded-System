#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Ibrahim Eldawy";
    char username[100];
    printf("Enter your username: ");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = '\0';
    if (strcmp(str, username) == 0)
    {
        printf("Welcome, %s!\n", username);
    }
    else
    {
        printf("Access denied.\n");
    }
    return 0;
}