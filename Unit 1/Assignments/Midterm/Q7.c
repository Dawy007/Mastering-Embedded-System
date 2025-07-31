#include <stdio.h>

void sum100(int);
int main()
{
    sum100(100);

    return 0;
}

void sum100(int x)
{
    static int sum = 0;
    sum = sum + x;
    x--;
    if (x > 0)
    {
        sum100(x);
    }
    else
    {
        printf("Sum = %d\n", sum);
    }
}