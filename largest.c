#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter the numbers a,b,c:");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("a is largest");
}
else if(b>c)
{
printf("b is largest");
}
else
{
printf("c is largest");
}
getch();
}
