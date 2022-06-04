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
    system("cls");
    FILE *f,*t;
    int i=1;
    char roomnumber[20];
    if((t=fopen("temp.txt","w+"))==NULL)
        exit(0);
    if((f=fopen("add_customer.txt","r"))==NULL)
        exit(0);

    printf("Enter the Room Number to be deleted from the database: \n");
    scanf("%s",roomnumber);
 
    while(fread(&s,sizeof(s),1,f)==1){
        if(strcmp(s.roomnumber,roomnumber)==0){       
            i=0;
            continue;
        }
        else fwrite(&s,sizeof(s),1,t);
    }
    if(i==1){       
        printf("\n\n Records of Customer in this  Room number is not found!!");
        getch();
    }

    // printf("%d", i);
    if (i==0){
        remove("add_customer.txt"); //Deletes the file whose name is specified in filename.
        rename("temp.txt","add_customer.txt");
        printf("\n\nThe Customer is successfully removed....");
    }    
    getch();
    fclose(f);
    fclose(t);
    return 0;
}