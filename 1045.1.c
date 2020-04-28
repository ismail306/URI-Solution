#include<stdio.h>
int main()
{
    double a,b,c,d,e,f;
    scanf("%lf %lf %lf",&a,&b,&c);
    d=a*a;
    e=b*b;
    f=c*c;
    if(a>=(b+c))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    if(d==(e+f))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    if(d>(e+f))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if(d<(e+f))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(a==b==c)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    if(a==b && (c!=a && c!=b))
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    if(a==c && (b!=a && b!=c))
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    if(b==c && (a!=b && a!=c))
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}
