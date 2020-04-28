#include<stdio.h>

int main()
{
    int a,b,x,y,count=0;
    scanf("%d",&a);
          int c[4];
    for(x=0;x<5;x++){
       scanf("%d",&c[x]);
    }
    for(y=0;y<5;y++){
       if (a==c[y])
        count ++;

    }
       printf("%d\n",count);

    return 0;
}


