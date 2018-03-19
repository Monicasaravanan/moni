#include<stdio.h>
#include<string.h>
int main()
{
int i,n;
char s[50];
int len;
gets(s);
scanf("%d",&n);
len=strlen(s);
for(i=n;i<len;i++)
{
printf("%c",s[i]);
}
return 0;
}
