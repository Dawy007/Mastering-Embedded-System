#include <stdio.h>
int main()
{
    float num[100];
    float sum = 0.0;
    int n;
    printf("Enter the Number of Data: ");
    fflush(stdout);
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter Number:");
        fflush(stdout);
        scanf("%f", &num[i]);
        sum += num[i];
    }
    printf("%.1f", sum);
    return 0;
}
