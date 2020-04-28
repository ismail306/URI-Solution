#include<stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d",&a)!=EOF){
        scanf("%d %d",&b,&c);
        if(a>b && b<=c)printf(":)\n");
        else if(a<b && b>=c)printf(":(\n");
        else if(a<b && b<c && (b-a)>(c-b))printf(":(\n");
        else if(a<b && b<c && (b-a)<=(c-b))printf(":)\n");
        else if(a>b && b>c && (a-b)>(b-c))printf(":)\n");
        else if(a>b && b>c && (a-b)<=(b-c))printf(":(\n");
        else if(a==b){
                if(b<c)printf(":)\n");
                else printf(":(\n");
        }
    }
    return 0;
}
