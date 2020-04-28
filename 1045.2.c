#include<stdio.h>
int main()
{
    double A,B,C,D,E;
    scanf("%lf %lf %lf",&A,&B,&C);
    if (A < B){
        A = A + B;
        B = A - B;
        A = A - B;
    }
    if (A < C){
        A = A + C;
        C = A - C;
        A = A - C;
    }
    if (B < C){
        B = B + C;
        C = B - C;
        B = B - C;
    }
    D = A * A;
    E = (B * B) + (C * C);
    if(A >= B+C)printf("NAO FORMA TRIANGULO\n");
    else
        {if(D == E)printf("TRIANGULO RETANGULO\n");
        if(D > E)printf("TRIANGULO OBTUSANGULO\n");
        if(D < E)printf("TRIANGULO ACUTANGULO\n");
        if(A == B && B == C)printf("TRIANGULO EQUILATERO\n");
        else if(A == B || B == C || A == C)printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}


