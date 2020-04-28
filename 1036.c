#include <stdio.h>
#include <math.h>
int main ()
{
    float a,b,c,x,y;
    scanf ("%f%f%f",&a,&b,&c);
    x=(-b+sqrt ((b*b)-4*a*c))/(2*a);
     y=(-b-sqrt ((b*b)-4*a*c))/(2*a);
     if (a==0 || ((b*b)-(4*a*c))< 0 )
     printf ("Impossivel calcular\n");

        else{
printf ("R1 = %0.05f\n",x);
printf ("R2 = %0.05f\n",y);
     }

return 0;
}
