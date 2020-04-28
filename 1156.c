#include<stdio.h>
int main()
{
int a=1,i;
    float s=0;
    for(i=1;i<=39;i=i+2)
    {

        s=s+(float)i/a;
        a=a*2;
    }
    printf("%0.2f\n",s);
    return 0;
}

