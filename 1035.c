#include <stdio.h>
int main ()
{

    int a,b,c,d,sum1,sum2;
    scanf ("%d%d%d%d",&a,&b,&c,&d);
    sum1=c+d;
    sum2=a+b;
    if ((b>c) && (d>a) && (sum1>sum2) && (c>0) && (d>0) &&(a%2==0) )
    {

        printf ("Valores aceitos\n");
    }
    else
        printf  ("Valores nao aceitos\n");



    return 0;
}
