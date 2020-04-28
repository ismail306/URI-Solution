#include<stdio.h>
int main()
{
  int i,n,a;
    scanf("%d",&n);
    while(n!=0)
    {
        if(n%2==0){
    a=0;
     for(i=1;i<=5;i++)

     {
       a=a+n;
       n=n+2;
     }
     printf("%d\n",a);
        }
        else {
            a=0;
           n++;
            for(i=1;i<=5;i++)

     {
       a=a+n;
       n=n+2;
     }
 printf("%d\n",a);
        }
        scanf("%d",&n);
    }



    return 0;
}

