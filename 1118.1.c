#include<stdio.h>
int main()
{

 float a,b,s;
 int x;
 scanf("%f%f",&a,&b);
 scanf("%d",&x);
 while(x==1){
 if(a<0 && b<0){
        while(1){
        printf("nota invalida\n");
        scanf("%f%f",&a,&b);}
 }
        else
            {
                s=(a+b)/2;

                printf("media = %0.2f\n",s);
        }
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d",&x);
 }



    return 0;
}
