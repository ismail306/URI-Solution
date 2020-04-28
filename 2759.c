#include<stdio.h>
int main()
{
    char a,b,c,tem;
    scanf("%c %c %c",&a,&b,&c);
    int i;
    for (i=1;i<=3;i++)
    {
        printf ("A = %c, B = %c, C = %c\n",a,b,c);
        tem=a;
        a=b;
        b=c;
        c=tem;
    }
    return 0;
}
