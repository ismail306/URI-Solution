#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,x,y,count=0;
    scanf("%d",&a);
          int c[a];
    for(x=0;x<a;x++){
       scanf("%d",&c[x]);
    }
    for(x=0;x<a;x++){
       if (c[x] > 1)
        count ++;

    }
       printf("%d\n",count);

    return 0;
}

