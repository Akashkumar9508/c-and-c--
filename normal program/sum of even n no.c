#include<stdio.h>
void main()
{
	int n,i,sum;
	printf("enter a number =");
	scanf("%d",&n);
	for(i=2;i<=n;i+=2)
	{
		if(n%2==0)
		{
			sum=sum+i;
		}
	}
	{
		printf("%d",sum);
	}
}