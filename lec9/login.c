/*Write a program to login into the system.
If the login is correct (name and password are correct), the message "WELCOME !!!! LOGIN IS SUCCESSFUL" will be displayed.
If the login is wrong (incorrect username or password), the message "SORRY !!!!  LOGIN IS UNSUCCESSFUL" is displayed */

#include <stdio.h>
#include <string.h>
#include <windows.h>
int main(){
    int num =0;
    char UserName[30];
    char PassWord[20];
   
    while (num <3){
        system("cls");  
        printf("UserName: ");        
        scanf("%s", &UserName);
        printf("Password: ");  
        int i = 0;
        while (i < 10){
            PassWord[i]=getch();
            if (PassWord[i]==13) break; //13 --> ENTER
            else printf("*");
            i++;
        }
        PassWord[i]='\0';
        if ((strcmp(UserName,"user")==0) && (strcmp(PassWord,"pass")==0)){
            printf("WELCOME !!!! LOGIN IS SUCCESSFUL\n");
            break;
        }              
        else {
            printf("\nSORRY !!!!  LOGIN IS UNSUCCESSFUL");
            num++;
            getch();
        }
    }              
}