#include<stdio.h>
int main()
{
int arr[50],i,smallest,size;
printf("enter the size:");
scanf("%d",&size);
for(i=0;i<size;i++)
scanf("%d",&arr[i]);
smallest=arr[0];
for(i=1;i<size;i++)
{
if(smallest>arr[i])
smallest=arr[i];
}
printf("%d",smallest);
return 0;
}
