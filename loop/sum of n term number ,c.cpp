//sum of n number //
#include<stdio.h>
int main()
{
	int n,i, sum=0;
	printf("enter a term of number :=");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		sum=sum+i;
	}
	printf("the sum is %d",sum);
}