#include<stdio.h>
int main()
{
  int n,i,j,a,b,sum;
  scanf("%d",&n);
  for(j=1;j<=n;j++)
  { sum=0;
      scanf("%d%d",&a,&b);

      if(a<b)
      {
          for(i=a+1;i<b;i++)
            {
                if(i%2!=0)
            sum=sum+i;}
          printf("%d\n",sum);}

          else if(b<a)
      {
          for(i=b+1;i<a;i++)
            {
                if(i%2!=0)
            sum=sum+i;}
          printf("%d\n",sum);}
      else
        printf ("0\n");

  }
  return 0;
}
