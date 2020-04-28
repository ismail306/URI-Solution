#include<stdio.h>
int main ()
{
double X, a;
int Y, b;
scanf ("%lf",&a);
b=a;
X=a*100;
Y=X;
printf ("NOTAS:\n");

printf ("%d nota(s) de R$ 100.00\n",b/100);
b=b%100;
printf ("%d nota(s) de R$ 50.00\n",b/50);
b=b%50;
printf ("%d nota(s) de R$ 20.00\n",b/20);
b=b%20;
printf ("%d nota(s) de R$ 10.00\n",b/10);
b=b%10;
printf ("%d nota(s) de R$ 5.00\n",b/5);
b=b%5;
printf ("%d nota(s) de R$ 2.00\n",b/2);

printf ("MOEDAS:\n");
b=b%2;
printf ("%d moeda(s) de R$ 1.00\n",b/1);
Y=Y%100;
printf ("%d moeda(s) de R$ 0.50\n",Y/50);
Y=Y%50;
printf ("%d moeda(s) de R$ 0.25\n",Y/25);
Y=Y%25;
printf ("%d moeda(s) de R$ 0.10\n",Y/10);
Y=Y%10;
printf ("%d moeda(s) de R$ 0.05\n",Y/5);
Y=Y%5;
printf ("%d moeda(s) de R$ 0.01\n",Y/1);
return 0;
}
