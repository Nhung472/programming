/*convert lowercase to uppercase*/

#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i;
    printf("Nhap chuoi: ");
    gets(str);
    for (i = 0; str[i]!='\0'; i++) 
    {
        if(str[i] >= 'a' && str[i] <= 'z') 
        {
            str[i] = str[i] - 32;
        }  
    }
    printf("\nChuoi in hoa = %s", str);
    return 0;
}