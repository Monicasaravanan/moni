#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the numbers:");
scanf("\n%d%d",&a,&b);
c=a+b;
if(c%2==0)
{
printf("even");
}
else
{
printf("odd");
}
return 0;
}
