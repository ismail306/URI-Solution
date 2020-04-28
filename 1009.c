#include <stdio.h>
int main ()
{
   double a,b;
   char name;
    scanf("%lf%lf",&a,&b);
    scanf ("%c",&name);
    printf ("TOTAL = R$ %0.2lf\n",a+b*0.15);
    return 0;
}
