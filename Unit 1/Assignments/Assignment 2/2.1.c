#include <stdio.h>
int main()
{
    int x;
    printf("Enter an integer you want to check: ");
    fflush(stdout);
    scanf("%d", &x);
    if (0 == x % 2)
        printf("%d is Even", x);
    else
        printf("%d is Odd", x);
    return 0;
}
