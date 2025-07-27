#include <stdio.h>

int main() {
    int x,y,temp;
    printf("Enter Value of a: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &x);
    printf("Enter Value of b: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &y);
    temp = x;
    x=y;
    y=temp;
    printf("After Swapping, value of a = %d\r\n", x);
    printf("After Swapping, value of b = %d", y);
    return 0;
}
