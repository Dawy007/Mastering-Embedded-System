#include <stdio.h>

int sum(int);

int main()
{
    printf("Enter a number: ");
    int num;
    scanf("%d", &num);
    printf("Sum of digits: %d\n", sum(num));
    return 0;
}

int sum(int x)
{
    if (x == 0)
        return 0;
    else
        return (x % 10) + sum(x / 10);
}