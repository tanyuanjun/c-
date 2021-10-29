#include<stdio.h>
#include<math.h>
int main()
{
    int h=10;
    double x1,x2,x3,x4,y1,y2,y3,y4,x,y,d1,d2,d3,d4;
    x1=2;
    x2=-2;
    x3=2;
    x4=-2;
    y1=2;
    y2=2;
    y3=-2;
    y4=2;
    printf("请输入一个坐标（x，y）：");
    scanf("&f,%f",&x,&y);
    d1=(x-x4)*(x-x4)+(y-y4)*(y-y4);
    d2=(x-x1)*(x-x1)+(y-y1)*(y-y1);
    d3=(x-x2)*(x-x2)+(y-y2)*(y-y2);
    d4=(x-x3)*(x-x3)+(y-y3)*(y-y3);
    if(d1>1&&d2>1&&d3>1&&d4>1)   h=0;
    printf("该点的高度是%d\n",h);
    return 0;
}
