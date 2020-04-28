#include<stdio.h>
int main()
{
    int a=0,c,n,b=1,fibo;
    scanf("%d",&n);
    for(c=0;c<n-1;c++)
    {
       if(c<=1)
        fibo=c;

       else
       {
           fibo=a+b;
           a=b;
           b=fibo;

       }
       printf("%d ",fibo);
    }
if(c=n-2)
      {
           fibo=a+b;
           a=b;
           b=fibo;


       printf("%d\n",fibo);}
    return 0;
}
