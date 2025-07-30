#include <stdio.h>
int main()
{
    float x;
    printf("Enter a Number: ");
    fflush(stdout);
    scanf(" %f", &x);
    if (0 > x)
    {
        printf("%.1f is Negative", x);
    }
    else if (0 < x)
    {
        printf("%.1f is Positive", x);
    }
    else
        printf("You Entered Zero");
    return 0;
}
