#include <stdio.h>
struct Scomplex
{
    float real;
    float imag;
};
struct Scomplex sum(struct Scomplex c2, struct Scomplex s2);

int main()
{
    struct Scomplex c1, c2, result;
    printf("For 1st Complex Number\nEnter Real and Imaginary Respectively:\n");
    scanf("%f %f", &c1.real, &c1.imag);
    printf("For 2nd Complex Number\nEnter Real and Imaginary Respectively:\n");
    scanf("%f %f", &c2.real, &c2.imag);
    result = sum(c1, c2);
    printf("Sum = %.2f + %.2fi\n", result.real, result.imag);
    return 0;
}

struct Scomplex sum(struct Scomplex c1, struct Scomplex c2)
{
    struct Scomplex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}