#include<stdio.h>
int main()
{
    int n,i;
    scanf ("%d",&n);
    while(n!=0)
    {
        for(i=1;i<n;i++){
            printf("%d ",i);
           }
         printf("%d\n",n);
        scanf ("%d",&n);
    }
    return 0;
}
