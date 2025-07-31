#include <stdio.h>

void last_index(int a[], int n)
{
    int last_index = n - 1;
    printf("The number is: %d\n", a[last_index]);
    printf("Result: %d\n", last_index);
}

int main()
{
    int a[100], n;
    printf("Input size of array: ");
    scanf("%d", &n);
    printf("Enter elements:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    last_index(a, n);

    return 0;
}
