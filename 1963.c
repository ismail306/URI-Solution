#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f%f",&a,&b);
    printf ("%0.2f%%\n",(b-a)*(100/a));
    return 0;
}
