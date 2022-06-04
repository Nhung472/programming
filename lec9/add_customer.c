/*Write a program to add customers.
Each customer needs to have informations about “room_number, name, address, phone_number” entered from the keyboard.
Save customer information to a file txt.*/

#include <stdio.h>
#include <string.h>
#include <windows.h>
 
struct Customer   //STRUCTURE DECLARATION
{
    char roomnumber[10];
    char name[20];
    char address[25];
    char phonenumber[15];
}s;
 
int main(){     
    FILE *f;
    f = fopen("add_customer.txt","a+"); //w
    while(1){
        system("cls");            
        printf("\n Enter Room number:\n");
        scanf("\n%s",s.roomnumber);

        printf("Enter Name:\n");
        scanf("%s",s.name);
        printf("Enter Address:\n");
        scanf("%s",s.address);
        printf("Enter Phone Number:\n");
        scanf("%s",s.phonenumber);

        fwrite(&s,sizeof(s),1,f);        
        printf("\n\n1 Room is successfully booked!!");
        printf("\n Press esc key to exit,  any other key to add another customer detail:");        
        if(getchar()==27)  //27 = ESC
            break;    
        fflush(stdin);        
    }
    fclose(f);
}  