#include <stdio.h>
int main()
{
    int n, i,im=0,po=0,ne=0,count=0;

    for(i=1;i<=5;i++)
    {
        scanf ("%d",&n);
    if(n%2==0)
        count++;
        if(n%2!=0)
            im++;
        if(n>0)
            po++;
        if (n<0)
            ne++;
    }
printf("%d valor(es) par(es)\n",count);
printf("%d valor(es) impar(es)\n",im);
printf("%d valor(es) positivo(s)\n",po);
printf("%d valor(es) negativo(s)\n",ne);
    return 0;
}

