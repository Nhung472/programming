#include <stdio.h>
#define ROW 2
#define COL 3
int main()
{
    int arr[ROW][COL];
    for(int i=0; i<ROW; i++)
        for(int j=0; j<COL; j++)
        {
            printf("Enter arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\nEntered 2D array is: \n\n");
    for(int i=0; i<ROW; i++)
    {
        for(int j=0; j<COL; j++)
        {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}