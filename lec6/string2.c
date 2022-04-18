#include <stdio.h>
#include <string.h>
int main()
{
    char first_name[100] = "John",
        last_name[100] = "Doe",
        full_name[100];

    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);
    printf("%s", full_name);
    return 0;
}