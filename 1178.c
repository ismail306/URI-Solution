#include<stdio.h>
int main()

{
    double i,a,j;
    scanf("%lf",&a);
    j=a;
    for(i=0;i<=99;i++)
    {
       printf("N[%0.0lf] = %0.4lf\n",i,j) ;
       j=j/2;

    }
    return 0;
}
