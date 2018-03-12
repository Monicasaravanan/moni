#include<stdio.h>
int main()
{
int vol,sa;
int l,b,h;
scanf("%d%d%d",&l,&b,&h);
vol=l*b*h;
sa=2*((l*b)+(b*h)+(h*l));
printf("\nvolume:%d\t surface area:%d\n",vol,sa);
return 0;
}
