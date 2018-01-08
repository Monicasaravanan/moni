#include<stdio.h>
#include<conio.h>
void main()
{
int base,power;
long long result=1;
clrscr();
printf("enter the base and power values:");
scanf("%d",&base,&power);
while(power!=0)
{
result result*=base;
--power;
}
printf("ans=%d",result);
getch();
}
