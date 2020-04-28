#include<stdio.h>
int main()
{
int i,j,k,l,h,m;
scanf ("%d%d%d%d",&i,&j,&k,&l);
h=k-i;
m=l-j;
if (h<0)

    h=24+(k-i);

if (m<0)
{


    m=60+(l-j);
    h--;
}
if(i==k&&j==l )
printf ("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");//,24-(((i*60)+j)-((k*60)+l)),(((i*60)+j)-((k*60)+l))%60);
  else
printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);


return 0;
}


