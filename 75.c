#include<stdio.h>
#include<string.h>
int main ()
{
int n;
char s[50];
scanf("%s",s);
n=strlen(s);
if(n%2==0)
{
s[n/2]='*';
s[(n/2)-1]='*';
}
else
{
s[n/2]='*';
}
printf("%s",s);
return 0;
}
