#include<math.h>
#include <stdio.h>
int main()
{
    int n,i,a,ara[10];
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {

   printf("N[%d] = %d\n",i,n);
   n=n+n;
    }
    return 0;
}
