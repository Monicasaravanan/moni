#include<stdio.h>
#include<string.h>
int main()
{
char s[50];
int n,i;
gets(s);
n=strlen(s);
for(i=0;i<n;i++)
{
if(i%2==0)
{
printf("%c",s[i]);
}
}
printf(" ");
for(i=0;i<n;i++)
{
if(i%2==1)
{
printf("%c",s[i]);
}
}
return 0;
}
