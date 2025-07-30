#include <stdio.h>

int main()
{
    float MA[2][2];
    float MB[2][2];
    printf("Enter the Elements of the 1st Matrix\r\n");
    fflush(stdout);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter A%d%d: ", i, j);
            fflush(stdout);
            scanf("%f", &MA[i][j]);
        }
    }
    printf("Enter the Elements of the 2st Matrix\r\n");
    fflush(stdout);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter B%d%d: ", i, j);
            fflush(stdout);
            scanf("%f", &MB[i][j]);
        }
    }
    printf("Sum of Matrix:\r\n ");
    printf("%.1f\t%.1f\n%.1f\t%.1f\n", MA[0][0] + MB[0][0], MA[0][1] + MB[0][1], MA[1][0] + MB[1][0], MA[1][1] + MB[1][1]);

    return 0;
}
