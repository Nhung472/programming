#include <stdio.h>
#include <string.h>
int main()
{
    char message[100];
    fgets(message, sizeof(message), stdin);

    printf("%s", message);
    printf("The length of the string is %d\n", message);

    for (int i=0)
    return 0;
}