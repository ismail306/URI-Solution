#include <stdio.h>

int main()
{
 int a, b;
 double c, res;

 scanf("%d %d %lf", &a, &b, &c);
 res = b * c;
 scanf("%d %d %lf", &a, &b, &c);
 res += b * c;
 printf("VALOR A PAGAR: R$ %.2lf\n", res);

 return 0;
}

