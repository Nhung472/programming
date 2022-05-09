#include <stdio.h>
#define MAX_SiZE 100
int main()
{
    int arr[MAX_SiZE], N, i;
    int *ptr = arr;
    printf("Enter size of array: ");
    scanf("%d", &N);
    printf("Enter elements: \n");
    for (i=0; i<N; i++)
    {
        scanf("%d", ptr);
        ptr++;
    }
    ptr =arr;
    printf("Array elements: ");
    for (i=0; i<N; i++)
    {
        printf("%d, ", *ptr);
        ptr++;
    }
    return 0;
}