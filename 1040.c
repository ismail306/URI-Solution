#include<stdio.h>
int main ()
{
    float a,b,c,d,e,avg1,avg2;
    scanf ("%f%f%f%f",&a,&b,&c,&d);
    avg1=((a*2)+(b*3)+(c*4)+(d*1))/10;
    printf ("Media: %0.1f\n",avg1);
    if (avg1>=7)
        printf ("Aluno aprovado.\n");
    else if (avg1<5)
        printf ("Aluno reprovado.\n");
    else if (avg1>=5 && avg1 <=6.9)
    {


        printf ("Aluno em exame.\n");

        scanf("%f",&e);


        printf ("Nota do exame: %0.1f\n",e);

    avg2=(e+avg1)/2;
    if (avg2>=5.0)
    {

        printf ("Aluno aprovado.\n");}
    else if (avg2<=4.9)
        printf ("Aluno reprovado.\n");

    printf ("Media final: %0.1f\n",avg2);
    }

return 0;
}
