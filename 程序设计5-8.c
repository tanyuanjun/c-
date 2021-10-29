#include<stdio.h>
int main()
{
    long int i;
    double b1,b2,b4,b6,b10,bonus;
    int x;
    printf("利润是i：");
    scanf("%d",&i);
    b1=0.1*100000;
    b2=b1+100000*0.075;
    b4=b2+0.05*000000;
    b6=b4+200000*0.03;
    b10=b6+400000*0.15;
    x=i/100000;
    switch(x)
    {
        case 0:bonus=i*0.1;break;
        case 1:bonus=b1+(i-100000)*0.075;break;
        case 2:bonus=b2+(i-200000)*0.05; break;
        case 3:bonus=b2+(i-200000)*0.05; break;
        case 4:
        case 5:bonus=b4+(i-200000)*0.03;break;
        case 6:
        case 7:
        case 8:
        case 9:bonus=b6+(i-400000)*0.15;break;
        case 10:bonus=b10+(i-1000000)*0.01;break;
    }
    printf("奖金是%10.2f\n",bonus);
    return 0;

}
