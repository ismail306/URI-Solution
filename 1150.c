#include<stdio.h>
int main()
{
    int i,x,z,y,a=1,c=0,sum=0;
     scanf("%d",&x);
     scanf("%d",&y);
      while(y<=x){
        scanf("%d",&y);
      }
      for(i=x;i<y;i++)
      {
        c=c+i;


        if(c>y)
            break;
        a++;
      }
    printf("%d\n",a);

return 0;
}

