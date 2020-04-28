#include<stdio.h>
int main()
{
    int d,m,y;
    char c,e;
    scanf("%d%c%d%c%d",&d,&c,&m,&e,&y);
    printf("%02d/%02d/%02d\n",m,d,y);
    printf("%02d/%02d/%02d\n",y,m,d);
    printf("%02d-%02d-%02d\n",d,m,y);
}
