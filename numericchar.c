#include<stdio.h>
int main()
{
char s[100];
int count=0;
printf("enter string:");
gets(s);
while(s[i]!='\0')
{
if(s[i]>'0'&&s[i]<'9')
count++;
i++;
}
printf("%d",count);
return 0;
}
