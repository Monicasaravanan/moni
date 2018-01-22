#include<stdio.h>
int main()
{
int arr[50],i,largest,size;
printf("enter the size");
scanf("%d",&size);
printf("enter the elements:");
for(i=0;i<size;i++)
scanf("%d",&arr[i]);
largest=arr[0];
for(i=1;i<size;i++)
{
if(largest<arr[i])
largest=arr[i];
}
printf("the largest value is:%d",largest);
return 0;
}
