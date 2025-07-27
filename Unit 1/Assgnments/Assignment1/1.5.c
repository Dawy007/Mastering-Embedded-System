#include <stdio.h>

int main() {
    char x;
    printf("Entyer a character: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%c", &x);
    printf("ASCII Value of %c is: %d", x,x);
    return 0;
}
