#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    while(a!=0 && b!=0)
    {
       if(a<0 && b>0)
    printf("segundo\n");
else if(a>0 && b<0)
    printf("quarto\n");
else if(a>0&&b>0)
    printf("primeiro\n");
   else
    printf("terceiro\n");

    scanf("%d%d",&a,&b);
    }
    return 0;
}



