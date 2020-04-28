#include <stdio.h>
int main ()
{
int a,b,n,c;
scanf ("%d",&n);
for (a=1;a<=n;a++){
    for (c=n-1;c>=a;c--)
    {
        printf(" ");


    }
    for (b=1;b<=a;b++){
        printf ("%d",b);
    }


    printf ("\n");
}


return 0;
}
