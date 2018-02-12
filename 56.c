#include<stdio.h>
int main()
{
int i,count=0;
char s[100];
printf("enter the string:");
scanf("%s",&s[i]);
for(i=0;s[i]!='\0';i++)
{
if((s[i]>='0' && s[i]<='9') || (s[i]>='a' && s[i]<='z'))
{
	count=1;
}
}
if(count==1)
{
printf("\nyes");
}
else
{
printf("\nno");
}
return 0;
}
