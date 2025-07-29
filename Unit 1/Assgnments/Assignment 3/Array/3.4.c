#include <stdio.h>
int main()
{
    int n, l;
    float e;
    float mat[100];
    printf("Enter Number of Elements: ");
    fflush(stdout);
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &mat[i]);
    }
    printf("Enter Element to Be Inserted: ");
    fflush(stdout);
    scanf("%f", &e);
    printf("Enter the location: ");
    fflush(stdout);
    scanf("%d", &l);
    for (int i = n; i >= l; i--)
    {
        mat[i] = mat[i - 1];
    }
    mat[l - 1] = e;
    for (int i = 0; i <= n; i++)
    {
        printf("%.1f  ", mat[i]);
    }
    return 0;
}
