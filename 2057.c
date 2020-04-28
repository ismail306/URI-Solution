#include<stdio.h>

int main()
{
    int a,b,c,x;
    scanf("%d %d %d",&a,&b,&c);
        x=a+b+c;
        if (x<0)
    printf("%d\n",24+(x));

    else if (x<24)
    printf("%d\n",x);

else if (x==24)
    printf("0\n");
  else  if (x>24)
    printf("%d\n",x-24);


    return 0;
}



