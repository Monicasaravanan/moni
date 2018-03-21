#include<stdio.h>
int main()
{
int a,b,c,sum=0,i;
int ap;
scanf("%d%d%d",&a,&b,&c);
ap=a;
for(i=0;i<c;i++)
{
sum=sum+ap;
ap=ap+b;
}
printf("%d",sum);
return 0;
}
