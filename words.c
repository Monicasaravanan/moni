#include<stdio.h>
int main()
{
int i,count=0;
char s[100];
gets(s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' ')
{
count++;
}
}
printf("the number of words are:%d",count+1);
return 0;
}
