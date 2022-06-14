#include <stdio.h>
#include <string.h>
// #include<windows.h>
 
struct Customer   //STRUCTURE DECLARATION
{
    char roomnumber[10];
    char name[20];
    char address[25];
    char phonenumber[15];
}s;
 
int main(){ 
 
    FILE *f;
    int i;
    if((f=fopen("add_customer.txt","r"))==NULL)
        exit(0);
    system("cls");
    printf("----------------------------------------------------\n");
    printf("ROOM    ");
    printf("NAME\t ");
    printf("\tADDRESS ");
    printf("\tPHONENUMBER ");
    printf("\n---------------------------------------------------");
 
    while(fread(&s,sizeof(s),1,f)==1){
        // printf("ROOMNUMBER :\t%s\n",s.roomnumber);
        // printf("NAME:\t%s\n",s.name);
        // printf("ADDRESS:\t%s\n",s.address);
        // printf("PHONENUMBER:\t%s\n",s.phonenumber);    
        printf("\n%s \t%s \t\t%s \t%s",s.roomnumber,s.name, s.address, s.phonenumber);        
    }
    printf("\n");
    fclose(f);
    getch();
}