#include<stdio.h>
int main()
{
int n,rev=0,integer;
printf("enter the number to check whether it is palindrome are not:");
scanf("%d",&n);
integer=n;
while(integer>0)
{
rev=rev*10;
rev=rev+integer%10;
integer=integer/10;
}
if(n==rev)
{
printf("%d is a palindrome,n);
}
else
{
printf("%d is not a palindrome,n);
}
return 0;
}
