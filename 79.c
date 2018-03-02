#include<stdio.h>
int main()
{
int a,b,c;
int i;
printf("enter two numbers:");
scanf("%d%d",&a,&b);
c=a*b;
for(i=1;i<c;i++)
{
if(c==(i*i))
{
printf("yes");
}
}
return 0;
}
