#include<stdio.h>
int main()
{ long long int  fibo[60],a=0,b=1;
    int n,i,j,m;

    for(i=0;i<61;i++)
    {
        if (i<=1)
            fibo[i]=i;
        else{
            fibo[i]=a+b;
            a=b;
            b=fibo[i];

        }
    }
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%d",&m);
        printf("Fib(%d) = %lld\n",m,fibo[m]);

    }
    return 0;
}
