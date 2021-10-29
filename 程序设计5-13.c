#include<stdio.h>
int main()
{
    int a,b,i,sum=0;
    do
    {
         printf("please input a integer number:");
         scanf("%d",&a);
         if(a<1000||a>=10000)
            printf("please input another number conforming the rule");
    }while (a<1000||a>=10000);
    printf("the every character in this number is:");
    for(b=0;b<4;b++)
    {
        i=a%10;
        printf("%d",i);
        a=a/10;
        sum=sum+i;
    }
    printf("sum=%d",sum);
    return 0;


}
