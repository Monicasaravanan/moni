#include<stdio.h>
int main()
{
char s[100];
int i,count=1;
gets(s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' ')
{
count=count+1;
}
}
printf("the number of words in given sentence is %d",count);
return 0;
}
