#include<stdio.h>
int main ()
{
    long long int i,a,rem;
    scanf("%lld",&a);
    while(a>=1){
    rem=a%10;
    a=a/10;
    printf ("%lld",rem);
    }
    printf("\n");
    return 0;
}
