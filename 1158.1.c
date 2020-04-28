#include<stdio.h>
int main()
{
    int i,a,b,c,j,s=0,n=0;
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        scanf("%d%d",&b,&c);
    while(n<=c)
{
    if(b%2!=0)
    {s=s+b;
    n++;}
    b++;
}
printf("%d",&s);
    }
    return 0;
}


