#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

#define Area(r) (M_PI * r * r)
int main()
{

    float radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = Area(radius);
    printf("The area of the circle is: %f\n", area);
    return 0;
}