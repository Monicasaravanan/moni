#include <stdio.h>
int main()
{
int n,i;
int x,y,z;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
x=pow(2,i);
if(x>n)
{
y=i;
break;
}
}
z=pow(2,y);
printf("%d",z);
return 0;
}
