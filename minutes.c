#include<stdio.h>
int main()
{
int m1,h,m2;
printf("enter the minutes:");
scanf("%d",&m1);
h=m1/60;
m2=m1%60;
printf("%d %d",h,m2);
return 0;
}
