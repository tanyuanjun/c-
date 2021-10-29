#include<stdio.h>
int main()
{
    int a,b;
    do
    {
        printf("请输入一个最大数位小于等于万位的数字a:");
        scanf("%d",&a);
        if(a>99999||a<0)
        {
            printf("invalid number!please conform the request!\n");
        }
    }while(a>99999||a<0);
    if(a>9999&&a<=99999)    printf("这是一个五位数%d\n",a);
    if(a>999&&a<=9999)    printf("这是一个四位数%d\n",a);
    if(a>99&&a<=999)    printf("这是一个三位数%d\n",a);
    if(a>9&&a<=99)    printf("这是一个二位数%d\n",a);
    if(a>=0&&a<=9)   printf("这是一个一位数%d\n",a);
    printf("这个数的倒序写法是：");
    while(a>0)
    {
        printf("%d",a%10);
        a=a/10;
    }
    return 0;
}
