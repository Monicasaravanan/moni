#include<stdio.h>
#include<string.h>
int main()
{
int i,j,n,m,count=0; 
char s1[50],s2[50];
gets(s1);
gets(s2);
n=strlen(s1);
m=strlen(s2);
if(n==m)
{
for(i=0;i<n;i++)
{
if(s1[i]==s2[i])
{
count=count+0;
}
else
{
count=count+1;
}
}
if(count==1)
{
printf("\nyes");
}
else
{
printf("\nno");
}
}
else
{
printf("\nno");
}
return 0;
}
