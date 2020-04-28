#include<stdio.h>
int main()
{  int g=1;
float a,b;
while(g==1){

    scanf ("%f",&a);
    while(a<0 ||a>10)
    {printf("nota invalida\n");
     scanf("%f",&a);
    }
    scanf ("%f",&b);


     while( b<0 || b>10)
     {
         printf("nota invalida\n");
     scanf("%f",&b);
    }
    printf("media = %0.2f\n",(a+b)/2.0);
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d",&g);

       while (g<1|| g>2)

       {
           printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d",&g);
       }
        if(g==2)
        break;
    if (g==1)
        continue;

}

        return 0;
}
