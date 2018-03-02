#include<stdio.h>
int main()
{
int a,b,c;
int i,flag=0;
printf("enter two numbers:");
scanf("%d%d",&a,&b);
c=a*b;
for(i=1;i<c;i++)
{
if(c==(i*i))
{
flag=1;
break;
}
}
if(flag==1)
{
	printf("yes");
}
else
{
	printf("no");
}
return 0;
}
