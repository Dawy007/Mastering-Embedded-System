#include <stdio.h>

void swap_arrays(int a[], int b[], int *size_a, int *size_b)
{
    int max_size = *size_a > *size_b ? *size_a : *size_b;

    for (int i = 0; i < max_size; i++)
    {
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
    int temp_size = *size_a;
    *size_a = *size_b;
    *size_b = temp_size;
}

int main()
{
    int a[100], b[100], x, y;
    printf("Enter the size of the first array: ");
    scanf("%d", &x);
    printf("Enter elements of the first array:\n");
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the size of the second array: ");
    scanf("%d", &y);

    printf("Enter elements of the second array:\n");
    for (int i = 0; i < y; i++)
    {
        scanf("%d", &b[i]);
    }
    swap_arrays(a, b, &x, &y);
    printf("First array after swap: ");
    for (int i = 0; i < x; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("Second array after swap: ");
    for (int i = 0; i < y; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}