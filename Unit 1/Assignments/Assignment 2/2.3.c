#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter Three Numbers: ");
    fflush(stdout);
    scanf("%d %d %d", &x, &y, &z);
    if (x >= y)
    {
        if (x >= z)
            printf("Largest Number = %d", x);
        else
            printf("Largest Number = %d", z);
    }
    else
    {
        if (y >= z)
            printf("Largest Number = %d", y);
        else
            printf("Largest Number = %d", z);
    }
    return 0;
}
