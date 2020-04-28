#include <stdio.h>
int main ()
{
int n,c=0,r=0,s=0,a,b,i;
char ch;
scanf("%d",&n);
//int ara[n];
for(i=0;i<n;i++)
   {
scanf("%d %c",&a,&ch);
//arr2[i]=arr[i];

  if(ch=='C')
    c=c+a;
  else if(ch=='R')
  r=r+a;
  else if(ch=='S')
  s=s+a;
   }

   printf ("%d",c);
   printf ("%d",r);
   printf ("%d",s);


return 0;
}
