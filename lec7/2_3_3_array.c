#include<stdio.h>
void main()
{
    int i, j, k;
    int a[2][2][3];
    for (i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            for ( k = 0; k < 3; k++)
            {
            printf("Nhap phan tu [%d][%d][%d]: ", i, j, k);
            scanf("%d", &a[i][j][k]);
            }
    printf("%d\t", a[i][j][k]);
        }
    printf("\n");
    }
    printf("\n");
}