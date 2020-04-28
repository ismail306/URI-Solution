#include<stdio.h>
int main()
{
    int i,a,b,c,j,s,n=0;
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        scanf("%d%d",&b,&c);
      if(b%2!=0)
      {s=0;
    for(j=1;j<=c;j++)
       {

s=s+b;
b=b+2;


        }
         printf("%d\n",s);}
          else

      { b=b+1;
          s=0;
    for(j=1;j<=c;j++)
       {
            s=s+b;
b=b+2;

        }
         printf("%d\n",s);}
    }
    return 0;
}

