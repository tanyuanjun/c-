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
    printf("25��%d��10��%d����5��%d����1��%d��\n",i,j,k,x);
    return 0;

}
