#include <stdio.h>

int max_no_of_ones(int);

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Number of 1's in binary representation: %d\n", max_no_of_ones(num));
    return 0;
}

int max_no_of_ones(int num)
{

    static int count;
    if (num % 2 == 1)
    {
        count++;
        max_no_of_ones(num >> 1);
    }
    else if (num > 0)
    {
        max_no_of_ones(num >> 1);
    }
    return count;
}