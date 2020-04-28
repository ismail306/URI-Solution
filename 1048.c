#include <stdio.h>
int main()
{
    float a;
    scanf ("%f",&a);

    if (a>=0 && a<=400)
    {
        printf ("Novo salario: %0.2f\n",a+(a*0.15));
        printf ("Reajuste ganho: %0.2f\n",a*0.15);
        printf("Em percentual: 15 %%\n");
    }
    else if (a>400 && a<=800)
    {
        printf ("Novo salario: %0.2f\n",a+(a*0.12));
        printf ("Reajuste ganho: %0.2f\n",a*0.12);
        printf("Em percentual: 12 %%\n");
    }
    else if (a>800 && a<=1200)
    {
        printf ("Novo salario: %0.2f\n",a+(a*0.10));
        printf ("Reajuste ganho: %0.2f\n",a*0.10);
        printf("Em percentual: 10 %%\n");
    }
    else if (a>1200   && a<=2000)
    {
        printf ("Novo salario: %0.2f\n",a+(a*0.07));
        printf ("Reajuste ganho: %0.2f\n",a*0.07);
        printf("Em percentual: 7 %%\n");
    }
    else
    {
        printf ("Novo salario: %0.2f\n",a+(a*0.04));
        printf ("Reajuste ganho: %0.2f\n",a*0.04);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}
