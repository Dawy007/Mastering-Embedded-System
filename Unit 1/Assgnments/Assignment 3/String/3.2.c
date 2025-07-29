#include <stdio.h>
#include <string.h>
int main()
{
    char sen[100];
    int i = 0;
    printf("Enter a String: ");
    fgets(sen, sizeof(sen), stdin);
    sen[strcspn(sen, "\n")] = '\0';
    while (sen[i] != '\0')
        i++;
    printf("Lenght of String: %d", i);
    return 0;
}
