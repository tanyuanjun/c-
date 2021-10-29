#include<stdio.h>
#include<math.h>
#define PI 3.1415926535
int main ()
{
    double r,h,v,vz,sr,c,s;
    printf("please input a raidii:");  scanf("%lf",&r);
    printf("please input a height:");  scanf("%lf",&h);
    c=2*PI*r;
    s=PI*r*r;
    sr=4*PI*r*r;
    v=4/3*PI*r*r*r;
    vz=s*h;
    printf("圆周长：          %.2f\n",c);
    printf("圆表面积：        %.2f\n",s);
    printf("圆球表面积：      %.2f\n",sr);
    printf("圆球体积：        %.2f\n",v);
    printf("圆柱体积：        %.2f\n",vz);
    return 0;
}
