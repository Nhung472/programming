#include <stdio.h>

int main()
{
    char key;
    printf("Type something (q to quit): ");
    do
    {
        scanf("%c", &key);
        if (key == 'Q' || key =='q')
        break;
    } while (1);
}