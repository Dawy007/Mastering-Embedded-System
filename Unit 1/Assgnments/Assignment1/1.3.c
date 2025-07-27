#include <stdio.h>

int main() {
    int x,y,sum;
    printf("Entyer Two integers: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d %d", &x,&y);
    sum = x + y;
    printf("Sum: %d", sum);
    return 0;
}
