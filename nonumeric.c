#include<stdio.h>
int main()
{
int i,count=0;
char s[100];
gets(s);
for(i=0;s[i]!=0;i++)
{
if(s[i]>='0' && s[i]<='9')
count++;
}
printf("no. of numeric characters  ar:%d",count);
return 0;
}
