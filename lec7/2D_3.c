#include <stdio.h>
int main()
{
    int arr[2][3]={ {1, 4, 7},
                    {12, 152, 19}
        };
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}