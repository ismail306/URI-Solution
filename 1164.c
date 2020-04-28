#include<stdio.h>
int main()
{
   int i,j,a,n,s;
   scanf("%d",&n);
   for(j=1;j<=n;j++)
   {    s=0;
      scanf("%d",&a);
       for(i=1;i<a;i++)
       {
           if(a%i==0){

         s=s+i;
           }
       }
       if(s==a)
       printf("%d eh perfeito\n",a);
       else
        printf("%d nao eh perfeito\n",a);
   }


    return 0;
}
