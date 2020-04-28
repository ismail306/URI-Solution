#include <stdio.h>
int main ()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    if (a>b && a> c && b>c)
{


     a=a;
     b=b;
     c=c;
}
   else if (a>b && a>c && c>b)

      {

       a=a;
        b=c;
        c=b;
      }

   else  if (b>a && b> c && a>c)

        a=b;
        b=a;
        c=c;


   if (a>=(b+c))

        printf ("NAO FORMA TRIANGULO\n");


    else if ((a*a)== (b*b)+(c*c))

    {
        printf ("TRIANGULO RETANGULO\n");

    }
    else if((a*a)> (b*b)+(c*c))
    {
        printf ("TRIANGULO OBTUSANGULO\n");

    }
   else if((a*a)< (b*b)+(c*c))
    {
        printf ("TRIANGULO ACUTANGULO\n");

    }

 if (a==b &&b==c &&c==a)
            printf ("TRIANGULO EQUILATERO\n");
    else if (a==b || b==c){
            printf ("TRIANGULO ISOSCELES\n");
    }
           /* if (b==c && (a!=b&& a!=c)){
            printf ("TRIANGULO ISOSCELES\n");}
            if (a==c && (b!=a&& b!=c)){
            printf ("TRIANGULO ISOSCELES\n");}*/
    return 0;
}
