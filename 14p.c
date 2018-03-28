#include<stdio.h>
#include<string.h>
int main()
{
char s[50];
int n,i;
scanf("%s",s);
n=strlen(s);
for(i=0;i<n;i++)
{
if(s[i]=='a'||s[i]=='i'||s[i]=='o'||s[i]=='u')
{
s[i]='+';
}
}
for(i=n;i>=0;i--)
{
if(s[i]!='+')
{
printf("%c",s[i]);
}
}
return 0;
}
