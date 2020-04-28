#include<stdio.h>
int main()
{
    double s=0.0,k[12][12];
    int i,j;
    char ch[2];
    scanf("%s",ch);
    for(i=0;i<12;i++)
    {
    for(j=0;j<12;j++)
        {
            scanf("%lf",&k[i][j]);
            if(j>=11-(i-1) && j<=i-1)
                s=s+k[i][j];
        }
    }
    if(ch[0]=='S')
    printf("%0.1lf\n",s);
  else  if(ch[0]=='M')
    printf("%0.1lf\n",s/30.00);
   return 0;
}

