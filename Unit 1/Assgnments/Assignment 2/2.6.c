#include <stdio.h>
int main() {
    int x;
    int sum = 0;
    printf("Enter an integer: ");
    fflush(stdout);
    scanf(" %d", &x);
    for (int i =1; i <= x; i++)
    {
        sum += i;
    }
    printf("Sum = %d", sum);
    return 0;
}
