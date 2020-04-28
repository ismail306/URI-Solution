#include <stdio.h>
int main ()
{
    int s;
    scanf ("%d",&s);

    printf ("%d:%d:%d\n",s/3600,(s%3600)/60,s%60);
    return 0;
}
