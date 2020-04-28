#include<stdio.h>
int main()
{
    int n=0,a,i=0;

    while(1)
        {
            scanf("%d",&a);
            i++;
            if(a<0)
                break;
            n=n+a;
        }
        printf("%0.2f",(float)n/(i-1));
        return 0;

}
