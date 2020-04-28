#include<stdio.h>
int  main()
{
    float a,b,c;
    while(scanf("%f %f",&a,&b)!=EOF)
    {
        c=(b/2)*(b/2)*3.14;
printf("ALTURA = %0.2f\n",a/c);
printf("AREA = %0.2f\n",c);

    }
    return 0;
}
