/*百钱买百鸡问题。鸡翁一，值钱五，鸡母一，值钱三，鸡雏三，值钱一，百钱买百鸡，问鸡翁、鸡母、鸡雏各几何？
输出各种鸡翁、鸡母、鸡雏的数量，依次由小到大，每种情况各占一行,每行三个数之间用一个空格隔开。*/

#include "stdio.h"

int main()
{
    int a=5,b=3,c=1;
    for(a=0;a<=20;a++)
    for(b=0;b<=33;b++)
    for(c=0;c<100;c+=3)
    {
        if(5*a+3*b+1*c/3==100&&a+b+c==100)
        printf("%d %d %d\n",a,b,c);
    }
    return 0;
}