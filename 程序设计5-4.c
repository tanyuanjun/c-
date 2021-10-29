#include<stdio.h>
int main()
{
    int x;
    do
    {
        printf("请输入该学生成绩x以判断等级");
        scanf("%d",&x);
        if(x>100||x<0)
        {
            printf("无效成绩，请重新输入。\n");
        }
    }while(x>100||x<0);p
    if(90<=x&&x<=100)     putchar('A');
    if(80<=x&&x<=89)     putchar('B');
    if(70<=x&&x<=79)      putchar('C');
    if(60<=x&&x<=69)      putchar('D');
    if(0<=x&&x<=60)      putchar('E');

    return 0;
}
