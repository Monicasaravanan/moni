#include<stdio.h>
int main()
{
    int n,temp,sum=0,a;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        a=n%10;
        sum=sum+a*a*a;
        n=n/10;
    }
    if(sum==temp)
    {
        printf("yes");
    }
    else
    {
        printf("No");
    }
    return 0;
 
}
