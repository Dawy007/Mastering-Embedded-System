#include <stdio.h>

int base, exponent;

long long power(int b, int e);

int main()
{
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);
    printf("%d^%d = %lld\n", base, exponent, power(base, exponent));
    return 0;
}

long long power(int b, int e)
{
    if (e == 0)
        return 1;
    else
        return b * power(b, e - 1);
}