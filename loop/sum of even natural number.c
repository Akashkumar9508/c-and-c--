//sum of n even natural number//
#include<stdio.h>
int main()
{
	int n ,i ,sum=0;
	printf("enter a term if a number :=\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			sum=sum+i;
		}
	}
	printf("the sum of even number is %d",sum);
}