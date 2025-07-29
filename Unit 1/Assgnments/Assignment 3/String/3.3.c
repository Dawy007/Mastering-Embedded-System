#include <stdio.h>
#include <string.h>
int main()
{
    char sen[100];
    printf("Enter a String: ");
    fgets(sen, sizeof(sen), stdin);
    sen[strcspn(sen, "\n")] = '\0';
    int i = strlen(sen);
    printf("Reverse String is: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", sen[j]);
    }
    printf("\n");
    return 0;
}
