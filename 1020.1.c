#include <stdio.h>
int main ()
{
    int d;
    scanf ("%d",&d);

    printf ("%d %d %d\n",d/365,(d%365)/30,(d%360)%30);
    /*printf ("%d mes(es)\n",(d%365)/30);
    printf ("%d dia(s)\n",(d%365)%30);*/
    return 0;
}
