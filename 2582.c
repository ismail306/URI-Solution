#include<stdio.h>
int main()
{
    int a,b,n,i;
        scanf("%d",&n);
 for(i=1;i<=n;i++){
    scanf("%d %d",&a,&b);
   if (a+b==0)
    printf("PROXYCITY\n");
else if (a+b==1)
    printf("P.Y.N.G.\n");
else if (a+b==2)
    printf("DNSUEY!\n");
else if (a+b==3)
    printf("SERVERS\n");
else if (a+b==4)
    printf("HOST!\n");
else if (a+b==5)
    printf("CRIPTONIZE\n");
else if (a+b==6)
    printf("OFFLINE DAY\n");
else if (a+b==7)
    printf("SALT\n");
else if (a+b==8)
    printf("ANSWER!\n");
else if (a+b==9)
    printf("RAR?\n");
    else if (a+b==10)
    printf("WIFI ANTENNAS\n");
 }
   return 0;
}

