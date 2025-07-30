#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter Value of a: ");
    fflush(stdout);
    scanf("%d", &x);
    printf("Enter Value of b: ");
    fflush(stdout);
    scanf("%d", &y);
    x = x * y;
    y = x / y;
    x = x / y;
    printf("After Swapping, value of a = %d\r\n", x);
    printf("After Swapping, value of b = %d\r\n", y);
    return 0;
}
