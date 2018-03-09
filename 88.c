#include<stdio.h>
int main()
{
int m,n,gcd,lcm;
int a,b;
int rem=0;
printf("enter the first number:");
scanf("%d",&m);
printf("enter the second number:");
scanf("%d",&n);
a=m;
b=n;
do
{
rem=m%n;
if(rem==0)
break;
m=n;
n=rem;
}while(rem!=0);
gcd=n;
lcm=(a*b)/gcd;
printf("the lcm is:%d",lcm);
return 0;
}
