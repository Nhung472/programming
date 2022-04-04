#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool is_active;
    scanf("%d", &is_active);
    printf(is_active? "Activate is true: ":"Activate is false" );
    return 0;
}