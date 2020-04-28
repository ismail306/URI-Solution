
//MASTER COPY
#include<stdio.h>
int main()
{
    int i,j,n,a,u=0,v=0,x=0;
    char T;
    scanf("%d",&n);
    int q;
    for(i=0;i<n;i++){

          scanf("%d %c",&q,&T);

          if(T=='C'){
            u=u+q;
          }
          else if(T=='R'){
            v=v+q;
          }
          if(T=='S'){
            x=x+q;
          }
             }
printf("Total: %d cobaias\n",u+v+x);
printf("Total de coelhos: %d\n",u);
printf("Total de ratos: %d\n",v);
printf("Total de sapos: %d\n",x);
printf("Percentual de coelhos: %.2lf %%\n",(double)(u*100)/(u+v+x));
printf("Percentual de ratos: %.2lf %%\n",(double)(v*100)/(u+v+x));
printf("Percentual de sapos: %0.2lf %%\n",(double)(x*100)/(u+v+x));

return 0;


}
