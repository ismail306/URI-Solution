#include<stdio.h>
#include<string.h>
int main ()
{
    int i=0,j=0;
    char ch [100];
    gets(ch);
    while(ch[i]!='\0'){
        if(ch[i]>=48 && ch[i]<=57)
     printf("%c",ch[i]);
    else{
        printf("\n");
        j++;
        if(j==4)
            break;
    }
    i++;
    }
return 0;
}
