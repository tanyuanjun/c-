#include<stdio.h>
int main()
{
    long long int u=51274,n=128765;
    int a=3,b=4,c=5;
    float x=1.2,y=2.4,z=-3.6;
    char c1='a',c2='b';
    printf("a=%d   b=%d   c=%d\n",a,b,c);
    printf("x=%.5f,y=%.6f,z=%.6f\n",x,y,z);
    printf("x+y=%5.2f y+z=%.2f  z+x=%.2f\n",x+y,y+z,z+x);
    printf("u=%d   n=%9d\n",u,n);
    printf("%c or %d\n",c1,c1);
    printf("%c or %d\n",c2,c2);
    return 0;

}
