#include<stdio.h>
#include<string.h>
int main ()
{
   char a[30],b[30],c[30];
    scanf("%s%s%s",&a,&b,&c);


    if (a== 'invertebrado' && b== 'inseto' && c== 'hematofago')
        printf ("pulga\n");
    if (a== 'invertebrado' && b== 'inseto' && c== 'herbivoro')
        printf ("lagarta\n");
    if (a== 'invertebrado' && b== 'anelideo' && c== 'hematofago')
        printf ("sanguessuga\n");
    if (a== 'invertebrado' && b== 'anelideo' && c== 'onivoro')
        printf ("minhoca\n");
    return 0;
}
