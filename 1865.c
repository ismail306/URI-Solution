#include<stdio.h>
#include<string.h>
int main()
{
    int a,i,n;
    char ch [200];
    scanf("%d",&a);
    for (i=0;i<a;i++)
    {
          scanf("%s",ch);
        scanf("%d",&n);

        if(ch[0]=='T' && ch[1]=='h' && ch[2]=='o' && ch[3]=='r')
        printf ("Y\n");
        else
        printf ("N\n");
    }
    return 0;
}
//
