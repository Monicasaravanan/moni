#include<stdio.h>
int main()
{
int rem,pro=1;
int n;
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
pro=pro*rem;
n=n/10;
}
printf("product:%d",pro);
return 0;
}
