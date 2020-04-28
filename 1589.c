#include<stdio.h>
int main()
{ long double a;
    int j,i,n;
    scanf("%LE",&a);
    for (i=1;i<=a;i++)
    {
        scanf("%d%d",&n,&j);

             printf("%d\n",n+j);
    }
    return 0;
}
