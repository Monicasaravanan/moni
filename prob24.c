#include <stdio.h>
int main()
{
int a[10];
int i, j,n,t,m;
scanf("%d", &n);
for (i = 0; i <n; i++)
{
scanf("%d", &a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
t= a[i];
a[i]=a[j];
a[j]=t;
}
}
}
m=n-2;
{
printf("%d\n",a[m]);
}
return 0;
}
