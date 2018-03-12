#include<stdio.h>
int main()
{
int a[50];
int n,i;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
if(i!=a[i])
{
printf("%d",i);
}
}
return 0;
}
