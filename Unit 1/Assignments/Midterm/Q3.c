#include <stdio.h>
int primeNumbers();
int main()
{
    primeNumbers();
    return 0;
}
int primeNumbers()
{
    int a, b;
    printf("Enter Two Numbers(Intervals): ");
    fflush(stdout);
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    printf("Prime Numbers Between %d and %d are: ", a, b);
    for (int i = a; i <= b; i++)
    {
        if (i < 2)
            continue;
        int isprime = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isprime = 0;
                break;
            }
        }
        if (isprime)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}