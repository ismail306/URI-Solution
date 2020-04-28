#include<stdio.h>
int main()
{
    int n,i=1;
    double a, c=0;


    while(i==1){
            n=0;
       scanf("%lf",&a);

    if(a>0 && a<=10)
       {c=c+a;
       n++;
       if(n==2)
       {   printf("media = %0.2lf\n",c/2);
           printf("novo calculo (1-sim 2-nao)\n");
           scanf("%d",&i);
       }
       }


    else{
             printf("nota invalida\n");}

  }
   return 0;
}
