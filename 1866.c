#include<stdio.h>
int main()
{
    int j,a,i,n;
    scanf("%d",&a);
    for (i=1;i<=a;i++)
    {
        scanf("%d",&n);
        if (n%2!=0)
            printf("1\n");
        else
             printf("0\n");
    }
    return 0;
}
