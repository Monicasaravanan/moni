#include<stdio.h>
#include<stdio.h>
int main()
{
int n,i,flag=0;
char s[50];
gets(s);
n=strlen(s);
for(i=0;i<n;i++)
{
if(s[i]==s[i+1])
{
flag=1;
break;
}
}
if(flag==1)
{
printf("not isogram");
}
else
{
printf("isogram");
}
return 0;
}
