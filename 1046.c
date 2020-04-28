#include<stdio.h>
int main()
{
int i,j;
scanf ("%d%d",&i,&j);
if(i==j)
printf ("O JOGO DUROU 24 HORA(S)\n");
  else if (i<j)
printf ("O JOGO DUROU %d HORA(S)\n",(j-i));
else
printf ("O JOGO DUROU %d HORA(S)\n",24-(i-j));

return 0;
}



