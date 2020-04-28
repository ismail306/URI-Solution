#include<stdio.h>
int main()
{
    int n=0,a,i=1;
scanf("%d",&a);
    while(a>=0)
        { n=n+a;
            scanf("%d",&a);
            i++;
        }
        printf("%0.2f\n",(float)n/(i-1));
        return 0;

}
