#include<stdio.h>
#include<conio.h>
void main()
{
int i=1,sum=0,n;
printf("enter the total number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("the sum is %d",sum);
getch();
}
