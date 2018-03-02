#include<stdio.h>
#include<string.h>
int main()
{
char s[100];
int n,i,flag=0;
gets(s);
n=strlen(s);
for(i=0;i<n;i++)
{
if(s[i]!=s[n-i-1])
{
flag=1;
break;
}
}
if(flag==1)
{
printf("not palindrome");
}
else
{
printf("palindrome");
}
return 0;
}
