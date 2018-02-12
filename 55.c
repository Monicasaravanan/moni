#include<stdio.h>
int main()
{
int n,m;
int mul;
printf("enter the values of n and m:");
scanf("%d%d",&m,&n);
mul=m*n;
if(mul%2==0)
printf("EVEN");
else
printf("ODD");
return 0;
}
