#include <stdio.h>

int max_no_of_ones(int);

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Max number of consecutive 1's in binary representationg: %d\n", max_no_of_ones(num));
    return 0;
}

int max_no_of_ones(int num)
{

    int count = 0;
    int max_count = 0;
    while (num > 0)
    {
        if (num & 1)
        {
            count++;
            if (count > max_count)
            {
                max_count = count;
            }
        }
        else
        {
            count = 0;
        }
        num >>= 1;
    }
    return max_count;
}