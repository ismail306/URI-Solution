#include <stdio.h>
int main()
{
  int i,ara[99],max,pos;
  for(i=0;i<5;i++)
    scanf("%d",&ara[i]);
    max=ara[0];
    for(i=1;i<5;i++){
    if(max<ara[i])
       max=ara[i];
    if(max==ara[i])
 pos=i+1;
    }
    printf("%d\n",max);
    printf("%d\n",pos);
    return 0;

}
