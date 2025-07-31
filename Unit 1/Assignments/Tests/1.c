#include <stdio.h>

int clear_bit(int x, int n)
{
    return x & ~(1 << n);
}

int main()
{
    int x, n;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Bit position: ");
    scanf("%d", &n);
    printf("result: %d\n", clear_bit(x, n));
    return 0;
}
