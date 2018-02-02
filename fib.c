#include<stdio.h>
int main()
{
int a=0,b=1,n;
int sum,i;
scanf("%d",&n);
for(i=0;i<n;++i)
{
sum=a+b;
a=b;
b=sum;
printf("%d",sum);
}
return 0;
}
