#include <stdio.h>
int main()
{
    int n,i,C=0,R=0,S=0,a,t;
    char b,x='%';
    double p,q,r;
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        scanf("%d %c",&a,&b);
        if (b == 'C')C = C + a;
        else if (b == 'R')R = R + a;
        else if (b == 'S')S = S + a;
    }
    t = R+C+S;
    p =(C*100.00)/t;
    q =(R*100.00)/t;
    r =(S*100.00)/t;
    printf("Total: %d cobaias\n",t);
    printf("Total de coelhos: %d\n",C);
    printf("Total de ratos: %d\n",R);
    printf("Total de sapos: %d\n",S);
    printf("Percentual de coelhos: %.2f %c\n",p,x);
    printf("Percentual de ratos: %.2f %c\n",q,x);
    printf("Percentual de sapos: %.2f %c\n",r,x);
    return 0;
}
