#include<stdio.h>
int main()
{
float intrest,p,r;
int t,result;
scanf("%f %d %f",&p,&t,&r);
intrest=(p*t*r)/100;
result=floor(intrest);
printf("%d",result);
return 0;
}
