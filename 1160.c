#include<stdio.h>
int main()
{
    int n,a,b,i,j;
    float c,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    { j=0;

      scanf ("%d%d%f%f",&a,&b,&c,&d);

      while(a<=b){
      a=a+a*(c/100);
      b=b+b*(d/100);

          j++;
      if (j>100){
        printf("Mais de 1 seculo.\n");
        break;}
      }
      if (j<=100)
      printf("%d anos.\n",j);

    }

    return 0;
}
