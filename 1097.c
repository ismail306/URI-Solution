#include<stdio.h>
int main()
{
    int i,n,a,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&a,&b);
        if (a>=b)
            printf("YES\n");
            else
                printf("NO\n");
    }
    return 0;
}
