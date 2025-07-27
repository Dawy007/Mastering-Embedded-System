#include <stdio.h>
int main()
{
    char o;
    float x, y, res;
    printf("Enter an Operator either + or - or * or / : ");
    fflush(stdout);
    scanf(" %c", &o);
    printf("Enter Two Operands: ");
    fflush(stdout);
    scanf("%f %f", &x, &y);
    if ('+' == o)
        res = x + y;
    else if ('-' == o)
        res = x - y;
    else if ('*' == o)
        res = x * y;
    else if ('/' == o)
        res = x / y;
    else
        printf("Error Not a valid operator");
    printf("%f %c %f = %f", x, o, y, res);

    return 0;
}
