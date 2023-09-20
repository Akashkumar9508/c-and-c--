//to check a number is even or odd //
#include<stdio.h>
void main()
{
	int a ;
	printf(" enter a number \n");
	scanf("%d",&a);
	if (a/2==0)
	{
		printf("%d is even number ",a);
	}
	else
	{
		printf("%d is odd ",a);
	}
}