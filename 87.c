#include<stdio.h>
int main()
{
int m,n,gcd;
int rem=0;
printf("enter the first number:");
scanf("%d",&m);
printf("enter the second number:");
scanf("%d",&n);
do
{
rem=m%n;
if(rem==0)
break;
m=n;
n=rem;
}while(rem!=0);
gcd=n;
printf("the gcd is:%d",gcd);
return 0;
}
