#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
   if (a==0)
    printf("E\n");

   else if (a>=1 && a<=35)
    printf("D\n");
   else if (a>=36&& a<=60)
    printf("C\n");
   else if (a>=61&& a<=85)
    printf("B\n");
   else if (a>=86&& a<=100)
    printf("A\n");
   return 0;
}
