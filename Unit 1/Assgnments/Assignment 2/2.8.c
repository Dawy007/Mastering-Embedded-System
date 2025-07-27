#include <stdio.h>
int main()
{
    char o;
    float x, y;
    printf("Enter an Operator either + or - or * or / : ");
    fflush(stdout);
    scanf(" %c", &o);
    printf("Enter Two Operands: ");
    fflush(stdout);
    scanf("%f %f", &x, &y);
    switch (o)
    {
    case '+':
        printf("%.1f + %.1f = %.1f", x, y, x + y);
        break;
    case '-':
        printf("%.1f - %.1f = %.1f", x, y, x - y);
        break;
    case '*':
        printf("%.1f * %.1f = %.1f", x, y, x * y);
        break;
    case '/':
        printf("%.1f / %.1f = %.1f", x, y, x / y);
        break;

    default:
        printf("Error Not a valid operator");
        break;
    }

    return 0;
}
