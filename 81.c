#include<stdio.h>
int main()
{
int x,y;
printf("enter the number in first clan:");
scanf("%d",&x);
printf("enter the number in second clan:");
scanf("%d",&y);
if(x>y)
{
printf("the difference is :%d",x-y);
}
else
{
printf("the difference is :%d",y-x);
}
return 0;
}
