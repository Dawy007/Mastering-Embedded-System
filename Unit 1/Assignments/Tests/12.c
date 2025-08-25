#include <stdio.h>

void main()
{
    short num[3][2] = {{3, 6}, {9, 12}, {15, 18}};
    printf("%d %d", *(num + 1)[1], **(num + 2));
}