#include <stdio.h>

int main() {
    int x;
    printf("Enter n integer: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &x);
    printf("You Entered: %d", x);
    return 0;
}
