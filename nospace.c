#include<stdio.h>
int main()
{
int i,count=0;
char s[100];
gets(s);
for(i=0;s[i]!=0;i++)
{
if(s[i]==' ')
count=++count;
else
count=count;
}
printf("no. of spaces are:%d",count);
return 0;
}
