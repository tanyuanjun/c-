#include<stdio.h>
int max(int a,int b,int c)
{
    int max;
    if(a<b)
        if(b<c)
    {
        printf("max=%d\n",c);
    }
        else
        {
            printf("max=%d\n",b);
        }
    else if(a<c)
    {
        printf("max=%d\n",c);

    }
      else
      {
          printf("max=%d\n",a);
      }
      return max;
}
int main()
{
    int a,b,c,i;
    printf("please input three numbers:");
    scanf("%d,%d,%d",&a,&b,&c);
    i=max(a,b,c);
    printf("max=%d\n",i);
    return 0;
}
