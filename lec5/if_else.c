#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age>16)
        printf("You can drive.\n");
    else    
        printf("You are not old enough to drive.\n");

    return 0;
    
}