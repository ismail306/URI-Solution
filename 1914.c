#include<stdio.h>
#include<string.h>

int main()
{
    long long int a,b,c;
    char f1[201],p1[10],f2[201],p2[10];
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s %s %s %s",f1,p1,f2,p2);
        scanf("%lld %lld",&a,&b);
        c=a+b;

    if(p1[0]== 'P')   {
if (c%2==0)
    printf ("%s\n",f1);
else

    printf ("%s\n",f2);
    }
    else
    {

if (c%2==0)
    printf ("%s\n",f2);
else

    printf ("%s\n",f1);
    }
    }
    return 0;
}
