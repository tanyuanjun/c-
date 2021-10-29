#include<stdio.h>
int main()
{
    int a=1;
    int b=5;
    int c=10;
    int d=25;
    int money;
    int i,j,k,x,y;
    printf("please give a number you want as the symbol of money:");
    scanf("%d",&money);
    i=money/25;
    money=money%25;
    j=money/10;
    money=money%10;
    k=money/5;
    money=money%5;
    x=money/1;
    printf("25分%d，10分%d个，5分%d个，1分%d个\n",i,j,k,x);
    return 0;

}
