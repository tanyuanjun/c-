#include<stdio.h>
int main()
{
    int x;
    do
    {
        printf("�������ѧ���ɼ�x���жϵȼ�");
        scanf("%d",&x);
        if(x>100||x<0)
        {
            printf("��Ч�ɼ������������롣\n");
        }
    }while(x>100||x<0);p
    if(90<=x&&x<=100)     putchar('A');
    if(80<=x&&x<=89)     putchar('B');
    if(70<=x&&x<=79)      putchar('C');
    if(60<=x&&x<=69)      putchar('D');
    if(0<=x&&x<=60)      putchar('E');

    return 0;
}
