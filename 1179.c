#include<stdio.h>
int main()

{
    int a[15],i,j,n,m,k=0,l=0;
    for(n=0;n<15;n++)
    {
    scanf("%d",&a[n]);
    }
    for (i=0;i<15;i++)
    {
        if(a[i]%2==0)
            {printf("par[%d] = %d\n",k,a[i]);
            if (k==4)
                break;
        k++;
            }
    }
 for (j=0;j<15;j++)
    {
        if(a[j]%2!=0){
                if (l==5)
                l=0;
            printf("impar[%d] = %d\n",l,a[j]);

        l++;}

    }
for(m=0;m<15;m++)
{
  k=0;
  if(a[m]%2==0 && a[m]!=)
            {printf("par[%d] = %d\n",k,a[m]);
   k++;
}
}
    return 0;
}
