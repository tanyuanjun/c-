#include<stdio.h>
#define NUMBER 4
int main()
{
    int i,j,n,tem;
    int v[NUMBER];

    for(j=0;j<NUMBER;j++)
    {
        printf("v[%d]=",j);
        scanf("%d",&v[j]);
    }
    printf("�����ִ�С��������");
    for(j=0;j<NUMBER;j++)
    {
        for(i=j+1;i<NUMBER;i++)
        {
            if(v[i]<v[j])
               {
                tem=v[j];
                v[j]=v[i];
                v[i]=tem;
                }
        }
    }
    for(j=0;j<NUMBER;j++)
    {
        printf("v[%d]=%d       ",j,v[j]);
    }
    return 0;
}
