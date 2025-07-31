#include <stdio.h>

void myfun();
int main()
{
    char result = myfun();
    printf("Result: %c\n", result);
    return 0;
}
void myfun(int arr[])
{
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Size of array: %d\n", size);
    return 10;
}