#include<stdio.h>
int main()
{
int a,b,c;
printf("\n enter two numbers:");
scanf("\n%d%d",&a,&b);
c=a-b;
if(c%2==0)
{
printf("EVEN");
}
else
{
printf("ODD");
}
return 0;
}
