#include<stdio.h>
#include<string.h>
int main()
{
int n,i=0;
char s[50];
scanf("%[^\n]s",s);
n=strlen(s)
for(i=0;str[i]!='\0';i++)
{
if(i==0)
s[i]=toupper(s[i]);
if(str[i]=='')
s[i+1]=toupper(s[i+1]);
}
printf("%s",s);
return 0;
}
