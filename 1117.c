#include<stdio.h>
int main()
{
    int n=0;
    double a, c=0;

  {
    while(1){
       scanf("%lf",&a);

    if(a>0 && a<=10)
       {c=c+a;
       n++;
       if (n==2)
        break;
       }


    else{
             printf("nota invalida\n");}

   }
          printf("media = %0.2lf\n",c/2);
  }
   return 0;
}
