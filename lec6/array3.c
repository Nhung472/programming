/*int 10 ints, sum it*/

#include <stdio.h>  
void main() 
{
    int arr[10];
    int i;
    int sum=0;
 
    printf("\nC Program to add 10 numbers using arrays : \n\n");
    for(i = 0; i<10;i++) 
    {     
        printf("Enter no. %d   : \n",i+1);
        scanf("%d",&arr[i]);   
    }
    
    for(i = 0; i<10;i++) 
    {
        sum = sum + arr[i];
    }
    printf("Sum : %d",sum);
}