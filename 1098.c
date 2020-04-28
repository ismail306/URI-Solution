
#include<stdio.h>
int main()
{
  float i,j;
  for(i=0.0;i<=2.0;i=i+0.2)

    for(j=1.0;j<=3.0;j++)
        if (i==0.0|| i==1.0|| i==2.0)
    printf("I=%.0f J=%0.0f\n",i,j+i);
    else if (i+j==3.0|| i+j==4.0 ||i+j==5.0)
    printf("I=%.0f J=%0.0f\n",i,j+i);
    else
         printf("I=%.1f J=%0.1f\n",i,j+i);
    return 0;
}
