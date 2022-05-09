#include <stdio.h>
void main()
{
    int i, j, k;
    int arr[2][3][4]={ {    {12, 36, 39, 48},
                            {63, 89, 38, 96},
                            {45, 78, 96, 75},
                        },
                        {   {45, 78, 96, 63},
                            {85, 63, 78, 12},
                            {89, 52, 36, 63},
                        }
                    };
    printf(":::3D array::: \n\n");
    for(i=0; i<2;i++)
    {
        for(j=0; j<3; j++)
        {
            for(k=0; k<4; k++)
            {
                printf("%d\t", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}