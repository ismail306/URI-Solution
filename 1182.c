#include<stdio.h>
int main()
{
    double n[12][12],s=0.0;
    int x,i,j;
    char ch[2];
    scanf ("%d",&x);
    scanf ("%s",ch);
    for (i=0;i<=11;i++)
    {
        for(j=0;j<=11;j++){
         scanf("%lf", &n[i][j]);
        if(j==x)
        s=s+n[i][j]  ;}
    }
    if (ch[0]=='S')
        printf("%0.1lf\n",s);

  else  if (ch[0]=='M')
        printf("%0.1lf\n",s/12.00);
        return 0;
}

