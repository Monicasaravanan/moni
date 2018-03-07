#include<stdio.h>
#include<string.h>
int main()
{
int i,n;
char s[50];
scanf("%s",&s);
n=strlen(s);
for(i=0;i<n;i++)
{
if(s[i]>='0' && s[i]<='9')
{
printf("%c",s[i]);
}
}
return 0;
}
