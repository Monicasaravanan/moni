#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
int i,n,a[50],t=0,res;
char rn[50];
scanf("%s",rn);
n=strlen(rn);
for(i=0;i<n;i++)
{
if(rn[i]=='I')
{
a[i]=1;
}
else if(rn[i]=='V')
{
a[i]=5;
}
else if(rn[i]=='X')
{
a[i]=10;
}
else if(rn[i]=='L')
{
a[i]=50;
}
else if(rn[i]=='C')
{
a[i]=100;
}
else if(rn[i]=='D')
{
a[i]=500;
}
else
{
printf("invalid");
}
for(i=0;i<n;i+=2)
{
if(a[i]<a[i+1])
{
res=a[i+1]-a[i];
}
else
{
res=a[i]+a[i+1];
}
}
t=res+t;
}
printf("\n%d",t);
getch();
}
