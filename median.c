#include<stdio.h>
int main()
{
int arr[50],i,j,k,size,temp;
printf("enter the size:");
scanf("%d",&size);
printf("the elements are:");
for(i=1;i<=size;i++)
{
scanf("%d",&arr[i]);
}
for(j=1;j<=size;j++)
{
for(k=j+1;k<=size;k++)
{
if(arr[j]>=arr[k])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
printf("%d",arr[j/2]);
return 0;
}
