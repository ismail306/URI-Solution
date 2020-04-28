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
    if (a>b && a>c && c>b)
    {
        a=a;
        b=c;
        c=b;

    }
    if (b>a && b> c && a>c)
    {
        a=b;
        b=a;
        c=c;

    }
if (a >= b + c)

    {
        printf("NAO FORMA TRIANGULO\n");
    }

    else if (a * a == b * b + c * c)

    {
        printf("TRIANGULO RETANGULO\n");
    }

    else if (a * a > b * b + c * c)

    {
        printf("TRIANGULO OBTUSANGULO\n");
    }

    else if (a * a < b * b + c * c)

    {
        printf("TRIANGULO ACUTANGULO\n");
    }



    if (a == b && b == c)

    {
        printf("TRIANGULO EQUILATERO\n");
    }

    else if (a == b || b == c)

    {
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;

}
