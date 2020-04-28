#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1000];
    int i,n,a,j;
while(gets(ch)!= EOF)
    {


    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%d",&a);
        printf("%c",ch[a-1]);
    }
    printf("\n");
    }
}

