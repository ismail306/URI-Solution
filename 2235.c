
#include<stdio.h>
int main ()
{
    int a,b,c;
    scanf("%d%d %d",&a,&b,&c);
if (c >= a || (a+c)==b || (a+b)==c || (b+c)==a || a==b && b==c)
    printf("S\n");
    else
            printf("N\n");

    return 0;
}
