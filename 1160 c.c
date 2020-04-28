#include<stdio.h>
int main()
{
    int i,PA,PB,k,l,j=0,T;
    double G1,G2;
    scanf("%d",&T);
    for(i = 0; i < T;i++){

            l=0;
    scanf("%d %d %lf %lf",&PA,&PB,&G1,&G2);
    while(PA<=PB){
        PA= PA + PA*(G1/100);
        PB = PB + PB*(G2/100);
        j++;
        if(j>100){
            printf("Mais de 1 seculo.\n");
            break;
        }
    }
    if(j <= 100)printf("%d anos.\n",j);
    }
    return 0;
}
