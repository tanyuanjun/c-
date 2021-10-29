#include<stdio.h>
#include<math.h>
int main()
{
    float rate,capital,deposit;
    int n,c;
    printf("please input your capital:");
    scanf("%f",&capital);
    printf("how long:");
    scanf("%d",&n);
    printf("please input the rate:");
    scanf("%f",&rate);
    printf("choose your plan");
    scanf("%d",&c);
    switch(c)
    {
        case 1:for(int i=1;i<=n;i++)
    {
        deposit=capital*(1+rate);
        capital=deposit;
    }
    printf("total=%.2f",deposit);break;
    case 2: deposit=capital*(1+n*rate);  printf("total=%.2f",deposit); break;
    default:printf("error");break;
    }

    return 0;
}
