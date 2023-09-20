#include<stdio.h>
void main()
{
	int n;
	for(n=1;n<=10;n=n+1)
	{
		if(n%2==0)
		{
			printf("%d is even \n",n);	
		}
		else
		{
			printf("%d is odd \n",n);	
		}	
	}
}