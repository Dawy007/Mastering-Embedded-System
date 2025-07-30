#include <stdio.h>
int factorial(int y);
int fac = 1;
int main()
{
    int x;
    printf("Enter a positive Integer: ");
    fflush(stdout);
    scanf("%d", &x);
    printf("Factorial of %d is : %d", x, factorial(x));
    return 0;
}

int factorial(int y)
{
    if (y == 0 || y == 1)
        return 1;
    else
        return y * factorial(y - 1);
}