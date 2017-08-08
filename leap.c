#include<stdio.h>
#include<conio.h>
void main()
{
int yr;
clrscr();
printf("enter the year:");
scanf("%d",&yr);
if(yr%4==0)
{
printf("leap year");
}
else
{
printf("non leap year");
}
getch();
}
