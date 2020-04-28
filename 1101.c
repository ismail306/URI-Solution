#include<stdio.h>
int main()
{
    int a,b,i,sum;
    scanf("%d%d",&a,&b);
    while(a!=0 && a>0 && b!=0 && b>0)
    {
        if(a>b)
        { sum=0;
            for(i=b;i<=a;i++)
               {
                sum=sum+i;
                printf("%d ",i);}
            printf("Sum=%d\n",sum);
        }
        else if(a<b)
        { sum=0;
            for(i=a;i<=b;i++){
                sum=sum+i;
                printf("%d ",i);}
            printf("Sum=%d\n",sum);
        }
            scanf("%d%d",&a,&b);

    }
    return 0;
}
