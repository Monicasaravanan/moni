#include <stdio.h>
int main() 
{
int n,k,i,res=1;
scanf("%d%d",&n,&k);
for(i=1;i<=k;i++)
{
res=res*n;
}
printf("%d",res);
return 0;
}
