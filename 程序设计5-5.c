#include<stdio.h>
int main()
{
    int a,b;
    do
    {
        printf("������һ�������λС�ڵ�����λ������a:");
        scanf("%d",&a);
        if(a>99999||a<0)
        {
            printf("invalid number!please conform the request!\n");
        }
    }while(a>99999||a<0);
    if(a>9999&&a<=99999)    printf("����һ����λ��%d\n",a);
    if(a>999&&a<=9999)    printf("����һ����λ��%d\n",a);
    if(a>99&&a<=999)    printf("����һ����λ��%d\n",a);
    if(a>9&&a<=99)    printf("����һ����λ��%d\n",a);
    if(a>=0&&a<=9)   printf("����һ��һλ��%d\n",a);
    printf("������ĵ���д���ǣ�");
    while(a>0)
    {
        printf("%d",a%10);
        a=a/10;
    }
    return 0;
}
