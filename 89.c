#include<stdio.h>
#include<string.h>
int main()
{
int n,i,j;
int temp=0;
char s[50];
gets(s);
n=strlen(s);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(s[i]>s[j])
{
temp=s[i];
s[i]=s[j];
s[j]=temp;
}
}
}
printf("%s",s);
return 0;
}
