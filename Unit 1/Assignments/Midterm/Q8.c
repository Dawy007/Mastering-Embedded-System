#include <stdio.h>

void reverse(int[], int);

int main()
{
    int arr[100], size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    reverse(arr, size);
}
void reverse(int arr[], int size)
{
    if (size <= 0)
    {

        return;
    }
    printf("%d ", arr[size - 1]);
    reverse(arr, size - 1);
}