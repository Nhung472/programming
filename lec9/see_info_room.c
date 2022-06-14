#include <stdio.h>
#include <string.h>
#include<windows.h>
 
struct Customer   //STRUCTURE DECLARATION
{
    char roomnumber[10];
    char name[20];
    char address[25];
    char phonenumber[15];
}s;
 
int main(){     
    system("cls");
    FILE *f;
    char roomnumber[20];
    int flag=1;
    f=fopen("add_customer.txt","r+");
    if(f==NULL) exit(0);

    printf("Enter Room number of the customer to search its details: \n");
    scanf("%s", roomnumber);
    while(fread(&s,sizeof(s),1,f)==1){
        if(strcmp(s.roomnumber,roomnumber)==0){
            flag=0; //founded
            printf("\n\tRecord Found\n ");
            printf("\nRoom Number:\t%s",s.roomnumber);
            printf("\nName:\t%s",s.name);
            printf("\nAddress:\t%s",s.address);
            printf("\nPhone number:\t%s",s.phonenumber);
            // flag=0;
            break;
        }
    }
    if(flag==1){    
        printf("\n\tRequested Customer could not be found!");
    }
    getch();
    fclose(f);
}