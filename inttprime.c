#include<stdio.h>
int main(void)
{
int i,j,count,m,n;
scanf("%d%d",&m,&n);
for(i=m;i<n;i++)
{
count=0;
for(j=1;j<100;j++)
{
if(i%j==0)
count++;
}
if(count==2)
printf("%d is prime",i);
}
return 0;
}
