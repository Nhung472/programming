#include <stdio.h>
#include <string.h>
int main()
struct box {int w, h, l;};
{
    struct box infor;
    printf("Nhap kich thuoc");
    scanf("%d %d %d", &infor.w, &infor.h, &infor.l); 
    int volumn = infor.w*infor.h*infor.l;
    printf("The tich hinh hop: %d", volumn);
}