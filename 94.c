#include<stdio.h>
int main()
{
int n,i,k;
int a[50];
scanf("%d%d",&n,&k);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
if(i==k)
{
printf("%d",a[i]);
}
}
return 0;
}
