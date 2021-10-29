#include<stdio.h>
int main()
{
    char c1,c2;
    int a1,a2;
    printf("please input two numbers a1,a2:");
    scanf("%d,%d",&a1,&a2);
    c1=a1;
    c2=a2;
    printf("the result of character input:\n");
    printf("%c,%c\n",c1,c2);
    printf("the result of number input:\n");
    printf("%d,%d\n",c1,c2);
    return 0;
}
