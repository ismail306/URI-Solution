#include <stdio.h>
int main ()
{
    int a,b,c;
    scanf ("%d%d%d",&a,&b,&c);
    if (a<b && a< c && b<c)

        printf ("%d\n%d\n%d\n",a,b,c);

    else if (a<b && a<c && c<b)

        printf ("%d\n%d\n%d\n",a,c,b);
    else  if (b<a && b< c && a<c)
        printf ("%d\n%d\n%d\n",b,a,c);
    else if (b<a && b<c && c<a)

        printf ("%d\n%d\n%d\n",b,c,a);
    else if (c<b && c< a && b<a)
        printf ("%d\n%d\n%d\n",c,b,a);
    else

        printf ("%d\n%d\n%d\n",c,a,b);

    printf ("\n%d\n%d\n%d\n",a,b,c);
    return 0;

}
