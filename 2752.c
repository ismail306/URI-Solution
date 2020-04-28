#include<stdio.h>
#include<string.h>
int main()
{
    char s[50]={"AMO FAZER EXERCICIO NO UPI"};
   printf("<% s>\n",s);
   printf("<% 30s>\n",s);
   printf("<% .20s>\n",s);
   printf("<% -20s>\n",s);
   printf("<% -30s>\n",s);
   printf("<% .30s>\n",s);
   printf("<% 30.20s>\n",s);
   printf("<% -30.20s>\n",s);
   return 0;
}
