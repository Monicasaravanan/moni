#include<stdio.h>
#include<string.h>
int main()
{
int i,j,u,v;
char s1[50],s2[50];
int flag=1,l1,l2;
scanf("%s%s",s1,s2);
l1=strlen(s1);
l2=strlen(s2);
if(l1==l2)
{
for(i=0;i<l1;i++)
{
for(j=i+1;j<l2;j++)
{
u=s1[i]-s1[j];
v=s2[i]-s2[j];
if(u==v)
{
flag=0;
}
else
{
flag=1;
break;
}
}
}
}
else
{
printf("no");
}
if(flag==0)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
