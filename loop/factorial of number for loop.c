//factorial of a number//
#include<stdio.h>
void main()
{
	int n ,i, f=1;
	printf("enter a number :=");
	scanf("%d",&n);
	for(i=n;i>=1;i=i-1)
	{
		f=f*i;
	}
	printf("factorial is %d",f);
}