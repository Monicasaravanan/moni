#include<stdio.h>
int main()
{
int x,y;
printf("enter the number:");
scanf("%d",&x);
y=x+1;
while(y!=0)
{
if(y%10==0)
{
printf("%d",y);
break;
}
y++;
}
return 0;
}
