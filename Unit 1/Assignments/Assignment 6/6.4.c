#include <stdio.h>

int main()
{
    int arr[15] = {0};
    int n;
    int *ptr;
    printf("Input the number of elements to store in the array(Max 15): ");
    scanf("%d", &n);
    printf("Input %d Elements of the array:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Element-%d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    ptr = arr + n - 1;
    printf("\nThe elements of the array in reverse order are:\n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("Element-%d: %d\n", i + 1, *ptr);
        ptr--;
    }

    return 0;
}