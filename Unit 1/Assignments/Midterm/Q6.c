#include <stdio.h>

int unique_numbers(int arr[], int size);

int main()
{
    int arr[100], size, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Unique Element: %d\n", unique_numbers(arr, size));
    return 0;
}

int unique_numbers(int arr[], int size)
{
    int result = 0;
    for (int i = 0; i < size; i++)
    {
        result ^= arr[i];
    }
    return result;
}