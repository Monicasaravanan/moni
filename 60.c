#include<stdio.h>
int main()
{
int i,n,c;
int a=1,b=0;
printf("enter the numbers:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
c=a+b;
a=b;
b=c;
printf("%d",c);
}
return 0;
}
