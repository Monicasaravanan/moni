#include<stdio.h>
int main()
{
int a[50],i,n;
int sum=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
sum=sum+a[i];
}
printf("%d",sum);
return 0;
}
