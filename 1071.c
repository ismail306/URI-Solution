#include <stdio.h>
int main ()
{
    int in=0,out=0,a,n,i;
    scanf("%d",&n);
    int arra[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arra[i]);
    }
    for(i=0;i<n;i++)
    {
       if(arra[i]>=10 &&arra[i]<=20)
        in++;
        else
            out++;

    }
    printf("%d in\n",in);
     printf("%d out\n",out);
return 0;
}
