/*write a program to check if two boxes are the same*/

#include <stdio.h>  
struct hinh_hop{int l, h, w;};
int main()
{
    {
        struct hinh_hop box;
        printf("Nhap 3 canh vao day: ");
        scanf("%d %d %d", &box.l, &box.h, &box.w );
        int s = box.l * box.h * box.w;

        struct hinh_hop box1;
        printf("Nhap 3 canh vao day: ");
        scanf("%d %d %d", &box1.l, &box1.h, &box1.w );
        int s1 = box1.l * box1.h * box1.w;
        
        if(s1 == s ){
        printf("Bang nhau");
        }
        else{
        printf("Khong bang");
    }
    }
}