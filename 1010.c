#include <stdio.h>
int main ()
{
    int a,b,l,m;
    float sum,c,o;
    scanf ("%d%d%f",&a,&b,&c);
    scanf ("%d%d%f",&l,&m,&o);

sum=(b*c)+(m*o);
printf ("VALOR A PAGAR: R$ %0.2f",sum);
    return 0;
}
