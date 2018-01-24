#include<stdio.h>
int main()
{
int h,m,m1,m2,h1,h2;
printf("enter the hours and minutes:");
scanf("%d",&h1);
scanf("%d",&m1);
printf("enter the hours and minutes:");
scanf("%d",&h2);
scanf("%d",&m2);
h=(h1-h2);
m=(m1-m2);
printf("%d %d",h,m);
return 0;
}
