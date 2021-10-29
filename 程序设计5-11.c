#include<stdio.h>
int main()
{
    int a,b;
    float x,y;
    char c1,c2;
    printf("please input two integer numbers a,b:");
    scanf("%d,%d",&a,&b);
    printf("please input two float numbers x,y:");
    scanf("%f,%f",&x,&y);
    printf("please input two characters c1,c2:");
    scanf(" %c%c",&c1,&c2);
    printf("a=%d b=%d\n",a,b);
    printf("x=%.1f y=%.2f\n",x,y);
    printf("%c%c",c1,c2);
    return 0;
}
