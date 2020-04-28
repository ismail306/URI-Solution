#include<stdio.h>
int main()
{
    float a,b,c;
    scanf ("%f%f%f",&a,&b,&c);
    printf("TRIANGULO: %0.3f\n",0.5*a*c);
    printf("CIRCULO: %0.3f\n",3.14159*c*c);
    printf("TRAPEZIO: %0.3f\n",0.5*(a+b)*c);
    printf("QUADRADO: %0.3f\n",b*b);
    printf("RETANGULO: %0.3f\n",a*b);

    return 0;
}
