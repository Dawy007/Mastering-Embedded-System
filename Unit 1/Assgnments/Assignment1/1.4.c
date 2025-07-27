#include <stdio.h>

int main() {
    float x,y,multi;
    printf("Entyer Two Numbers: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%f %f", &x,&y);
    multi = x * y;
    printf("Sum: %f", multi);
    return 0;
}
