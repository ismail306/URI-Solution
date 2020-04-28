#include<stdio.h>
int main()
{
    int c=0, n,a,i;
    scanf("%d%d",&a,&n);
   if(a<n){
    for(i=1;i<=n;i++)
    {
printf("%d ",i);
if(c==a){
        c=0;
    printf("\n");}
    }
//   }

return 0;
}


