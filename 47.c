#include<stdio.h>
int main()
{
	int a[5];
	int n,i;
	int min,max;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
	max=a[0];
    if(max<a[i])
	
		max=a[i];
		
	}
	for(i=0;i<n;i++)
	{
	min=a[0];
	if(min>a[i])
	
		min=a[i];
		
	}
	printf("%d %d",min,max);
	return 0;
}
	
		
