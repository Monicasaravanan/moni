#include<stdio.h>
#include<stdio.h>
int main()
{
int i,n;
printf("enter the number:");
scanf("%d",&n)
for(i=n+1;i<30;i++)
{
if(i%n==0)
{
printf("%d",i);
}
}
return 0;
}
