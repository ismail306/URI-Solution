#include<stdio.h>
int main()
{
    int a;
    while(scanf("%d",&a)!=EOF)
    {

        if (a%400==0 || (a%100!=0 && a%4 ==0))
           {

           printf("This is leap year.\n");
       if (a%15==0)
            printf("This is huluculu festival year.\n");
           if (a%55==0)
            printf("This is bulukulu festival year.\n");
            }

            else if (a%15==0)
            printf("This is huluculu festival year.\n");

            else
                printf("This is an ordinary year.\n");
    }
    return 0;
}
