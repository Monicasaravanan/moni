#include <stdio.h>
int main() 
{
int n,i;
int flag=0;
printf("enter the number:");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
flag=1;
break;
}
}
if(flag==1)
{
printf("not prime");
}
else
{
printf("prime");
}
return 0;
}
