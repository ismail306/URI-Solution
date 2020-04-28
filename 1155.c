#include<stdio.h>
int main()
{
    int a,i;
    float sum=0;
    for(i=1;i<=100;i++)
    {
        sum=sum+(float)1/i;
    }
    printf("%0.2f\n",sum);
    return 0;
}
