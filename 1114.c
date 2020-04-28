#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    while(a!=2002)
    {
        printf("Senha Invalida\n");


        scanf("%d",&a);
    }

    printf("Acesso Permitido\n");
    return 0;
}


