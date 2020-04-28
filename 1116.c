#include<stdio.h>
int main()
{
    int i,a,b,n;
    float s;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    scanf("%d%d",&a,&b);

       if(b==0)
    printf("divisao impossivel\n");

else{
        s=(float)a/b;
printf("%0.1f\n",s);}
    }
    return 0;
}


