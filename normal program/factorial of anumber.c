#include<stdio.h>
void main()
{
	int n,i,fact=1;
	printf("enter anumber \n");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		fact=fact*i;
		
	}
	printf("%d",fact);
}