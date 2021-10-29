#include<stdio.h>
#include<math.h>
int main()
{
    float y,x;
    printf("请输入一个x：");
    scanf("%lf",&x);
    if(x<0&&x!=3)
    {
        y=power(x,2)+x-6;
    }
    else if(x<=10&&x!=2&&x!=3)
    {
        y=power(x,2)-5*x+6;
    }
          else
          {
              y=power(x,2)-x-1;
          }
    printf("y=%.5f",y);
    return 0;
}




double power(double x,int n)           //幂函数调用看这里
{
    int i;
    double tem=1.0;
    for(i=1;i<=n;i++)
    {
        tem=tem*x;
    }
    return tem;
}
