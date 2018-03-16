#include<stdio.h>
int main()
{
int n,k;
int a[50],i,flag=0;
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==k)
{
flag=1;
break;
}
}
if(flag==1)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
