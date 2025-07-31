#include <stdio.h>

double sqrt(double);

int main()
{
    double number;
    printf("Enter a number: ");
    scanf("%lf", &number);
    double result = sqrt(number);
    if (result != -1)
    {
        printf("Square root of %.2f is %.5f\n", number, result);
    }
    else
    {
        printf("Invalid input for square root calculation.\n");
    }
    return 0;
}

double sqrt(double x)
{

    if (x < 0)
    {
        printf("Error: Negative input for square root.\n");
        return -1;
    }
    else if (x == 0 || x == 1)
    {
        return x;
    }
    else
    {
        double precision = 0.000000001;
        double sqrt_result = x;
        while ((sqrt_result * sqrt_result - x) > precision || (sqrt_result * sqrt_result - x) < -precision)
        {
            sqrt_result = (sqrt_result + x / sqrt_result) / 2;
        }
        return sqrt_result;
    }
}
