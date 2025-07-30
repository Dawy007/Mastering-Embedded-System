#include <stdio.h>
int main()
{
    int x;
    int fac = 1;
    printf("Enter an integer: ");
    fflush(stdout);
    scanf(" %d", &x);
    if (0 < x)
    {
        for (int i = 1; i <= x; i++)
        {
            fac *= i;
        }
        printf("Factorial = %d", fac);
    }
    else if (0 == x)
        printf("Factorial = 0");
    else
        printf("Error!!!Factorial of a Negative Number Doesn't Exist");
    return 0;
}
