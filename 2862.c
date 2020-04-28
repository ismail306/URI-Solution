#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    for (i=1;i<=a;i++){
        scanf("%d",&j);
    if (j<=8000)
        printf("Inseto!\n");
    else
        printf("Mais de 8000!\n");
}
return 0;
}
