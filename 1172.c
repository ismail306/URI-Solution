#include<stdio.h>
int main()
{
    int ara[10],i;

        for(i=0;i<10;i++)
        {
            scanf("%d",&ara[i]);
            if(ara[i]<=0)
                printf("X[%d] = 1\n",i);
            else
                printf("X[%d] = %d",i,ara[i]);
        }


    return 0;
}
