#include <stdio.h>
#include <string.h>
int main()
{
    char sen[100];
    char c;
    int counter = 0;
    printf("Enter a String: ");
    fflush(stdout);
    fgets(sen, sizeof(sen), stdin); // used instead of gets as gets causes crashes if the user enters a string larger than size
    sen[strcspn(sen, "\n")] = '\0'; // used to remove the new line made from fgets function as it will be used as the next scan input if not removed
    printf("Enter a Character to Find Frequency: ");
    fflush(stdout);
    scanf("%c", &c);
    for (int i = 0; sen[i] != '\0'; i++)
    {
        if (sen[i] == c)
            counter++;
    }
    printf("Frequency of %c = %d", c, counter);
    return 0;
}