#include<stdio.h>
int main()
{
int a,b,c;
int ans;
printf("enter a,b,c values:");
scanf("%d%d%d",&a,&b,&c);
ans=(a*b)%c;
printf("ans:%d",ans);
return 0;
}
