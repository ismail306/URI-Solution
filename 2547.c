#include<stdio.h>
int main()
{
    int a,b,c,n,i,count;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF){
            count=0;
    for(i=1;i<=a;i++){
        scanf("%d",&n);
    if(n>=b && n<=c)
        count++;}
        printf("%d\n",count);}
        return 0;
}
