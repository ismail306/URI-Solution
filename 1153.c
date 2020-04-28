#include<stdio.h>
int main()
{
    int a,i,p=1;
    scanf("%d",&a);
    for(i=a;i>=1;i--)
    {
        p=p*i;
    }
    printf("%d\n",p);
    return 0;
}
