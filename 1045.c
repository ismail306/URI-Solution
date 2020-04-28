#include <stdio.h>
int main ()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    if (a<b)
    {
     a=b;
     b=a;
    }
    if (b<a)
    {
        b=a;
        a=b;

    }
    if (a<c)
    {
        a=c;
        c=a;

    }
    if (a>=(b+c))
    {
        printf ("NAO FORMA TRIANGULO\n");

    }
    if ((a*a)== (b*b)+(c*c))

    {
        printf ("TRIANGULO RETANGULO\n");

    }
     if((a*a)> (b*b)+(c*c))
    {
        printf ("TRIANGULO OBTUSANGULO\n");

    }
    if((a*a)< (b*b)+(c*c))
    {
        printf ("TRIANGULO ACUTANGULO\n");

    }

 if (a==b &&b==c &&c==a)
            printf ("TRIANGULO EQUILATERO\n");
    if (a==b && (c!=a&& c!=b)){
            printf ("TRIANGULO ISOSCELES\n");
    }
            if (b==c && (a!=b&& a!=c)){
            printf ("TRIANGULO ISOSCELES\n");}
            if (a==c && (b!=a&& b!=c)){
            printf ("TRIANGULO ISOSCELES\n");}
    return 0;
}
