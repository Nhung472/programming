#include <stdio.h>

void printCompanyInfo() 
{
    printf("Company **************\n");
    printf("address *********************\n");
    printf("Phone ****************** \n");
    printf("Email ****************** \n");
}
int sumFirst10Numbers(void) 
{
    int sum = 0; int i;
    for(i = 1; i <= 10; ++i) sum += i;
    return sum;
}
int main()
{
    printCompanyInfo();
    printf("sumFirst10Numbers: %d\n",sumFirst10Numbers());
    return 0;
}