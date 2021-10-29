#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    do
    {
        printf("please input a:");
        scanf("%d",&a);
        if(a>=1000||a<=0)
        {
            printf("invalid number\nplease input another number a:");
        }
    }while(a>=1000||a<=0);
    printf("输入成功！\n");
    b=sqrt(a);
    printf("a的平方根是：%d",b);
    return 0;
}
