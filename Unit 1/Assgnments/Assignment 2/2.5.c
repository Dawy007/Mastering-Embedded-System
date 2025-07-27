#include <stdio.h>
int main() {
    char x;
    printf("Enter a character: ");
    fflush(stdout);
    scanf(" %c", &x);
    if (('A' <= x && 'Z' >= x) || (('a' <= x && 'z' >= x))){
        printf("%c is an Alphabet", x);
    }
    else  printf("%c is not an Alphabet", x);
    return 0;
}
