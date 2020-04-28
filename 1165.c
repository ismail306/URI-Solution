#include<stdio.h>
int main()
{
    int i,n,j,a,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    { c=0;
       scanf("%d",&a);
       for(j=2;j<a;j++)
       {
       if(a%j==0)
         {
            c++;
           break;
         }
       }
         if(c==0)
          printf("%d eh primo\n",a);

       else
         printf("%d nao eh primo\n",a);

       }
return 0;
}
