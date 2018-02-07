#include<stdio.h>
#include<string.h>
int main()
{
char s1[100],s2[100];
int n,m;
gets(s1);
gets(s2);
n=strlen(s1);
m=strlen(s2);
if(m==n)
{
printf("%s",s1);
}
else if(m>n)
{
printf("%s",s2);
}
else if(n>m)
{
printf("%s",s1);
}
else
{
printf("invalid");
}
return 0;
}
