#include <stdio.h>

int reverse(int a[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d,", a[i]);
    }
    printf("\n");
    return 0;
}

int main()
{
    int a[100], n, i;
    printf("input size of array: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Reversed array: ");
    reverse(a, n);

    return 0;
}
