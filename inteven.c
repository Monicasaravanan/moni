#include<stdio.h>
int main()
{
int l,h,i,f;
printf("enter the two intervals:");
scanf("%d%d",&l,&h);
printf("even number between given interval is:");
for(i=1;i<=h;i++)
{
f=i%2;
if(f==0)
{
printf("%d",i);
}
}
return 0;
}
