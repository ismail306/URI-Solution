#include<stdio.h>
int main()
{
int j=0,i,a;
scanf("%d",&a);
for(i=0;i<1000;i++)
{
    printf("N[%d] = %d\n",i,j);
    j++;
    if (j==a)
        j=0;
}

return 0 ;
}
