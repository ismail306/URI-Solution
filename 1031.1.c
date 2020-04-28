#include <stdio.h>
int main ()
{

  float i, j,sum=0;
  scanf ("%f",&j);
  for(i=1;i<=j;i++){
       sum=sum+(1/i);
        if (j==1)
        printf ("\n1+");
 else
    printf ("1\%0.2f +",i);
  }
  printf ("%0.2f\n",sum);



    return 0;
}
