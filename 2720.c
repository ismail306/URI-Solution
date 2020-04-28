#include<stdio.h>
int main ()
{
    int a1,b1,c1,a2,b2,c2,a=0,b=0,c=0;
    scanf ("%d%d%d%d%d%d",&a1,&b1,&c1,&a2,&b2,&c2);
    if (a2>a1)
       a=a2-a1;
if (b2>b1)
       b=b2-b1;
if (c2>c1)
       c=c2-c1;
       printf("%d\n",a+b+c);
       return 0;
}
