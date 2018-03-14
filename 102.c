#include<stdio.h>
int main()
{
int a,b,n;
scanf("%d",&n);
while(n!=1)
{
a=n%2;
b=n/2;
printf("%d",b);
n=a;
break;
}
return 0;
}
