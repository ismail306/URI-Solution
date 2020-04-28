#include <stdio.h>
int main()
{


    int code,num;

    scanf("%d %d",&code,&num);
    switch (code)
    {
    case 1:
    {

        printf ("Total: R$ %0.2f\n",4.00*num);
        break;
    }

    case 2 :
    {

        printf ("Total: R$ %0.2f\n",4.50*num);
        break;
    }

    case 3 :
    {

        printf ("Total: R$ %0.2f\n",5.00*num);
        break;
    }

    case 4 :
    {

        printf ("Total: R$ %0.2f\n",2.00*num);
        break;
    }
    case 5:
    {

        printf ("Total: R$ %0.2f\n",1.50*num);
        break;
    }
    }
    return 0;
}
