#include <stdio.h>

void reverse();

int main()
{
    reverse();
    return 0;
}

void reverse()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int reversed = 0;
    while (num > 0)
    {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    printf("Reversed Number: %d\n", reversed);
}