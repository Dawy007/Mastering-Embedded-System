#include <stdio.h>
int main() {
    float x;
    printf("Enter a Number: ");
    fflush(stdin);
    fflush(stdout);
    scanf(" %f", &x);
    if (0 > x){
        printf("%f is Negative", x);
    }
    else if (0 < x){
        printf("%f is Positive", x);
    }
    else  printf("You Entered Zero");
    return 0;
}
