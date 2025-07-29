#include <stdio.h>
int main()
{
    float mat[100][100];
    int r, c;
    printf("Enter Number of Rows and Columns of the Matrix: ");
    fflush(stdout);
    scanf("%d %d", &r, &c);
    printf("Enter Elements of the Matrix: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter Element a%d%d: ", i + 1, j + 1);
            fflush(stdout);
            scanf("%f", &mat[i][j]);
        }
    }
    printf("Entered Matrix: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%.1f\t", mat[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of Matrix: \n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%.1f\t", mat[j][i]);
        }
        printf("\n");
    }
    return 0;
}
