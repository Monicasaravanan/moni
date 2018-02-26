#include<stdio.h>
#include<string.h>
int main()
{
char s[10];
int i,n,m;
gets(s);
printf("enter the number:");
scanf("%d",&m);
n=strlen(s);
for(i=0;i<m;i++)
{
printf("%c",s[i]);
}
return 0;
}
