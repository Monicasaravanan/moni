#include<stdio.h>
int main()
{
int i,x,y;
char ch;
for(i=0;i<4;i++)
{
scanf("%d %c %d",&x,&ch,&y);
}
if(ch=='/')
{
printf("%d",x/y);
}
else
{
printf("%d",x%y);
}
return 0;
}
