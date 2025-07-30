#include <stdio.h>
int main()
{
    int n, l;
    float e;
    float arr[100];
    printf("Enter No of Elements: ");
    fflush(stdout);
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
    }
    printf("Enter Element to be Searched: ");
    fflush(stdout);
    scanf("%f", &e);
    for (int i = 0; i < n; i++)
    {
        if (e == arr[i])
            printf("Number Found at the Locatio: %d", i + 1);
    }
    return 0;
}