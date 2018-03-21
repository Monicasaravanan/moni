#include<stdio.h>
int main()
{
int i;
char s[50];
scanf("%[^\n]s",s);
for(i=0;s[i]!='\0';i++)
{
if(i==0)
{
s[i]=toupper(s[i]);
}
if(s[i]==' ')
{
s[i+1]=toupper(s[i+1]);
}
}
printf("%s",s);
return 0;
}
