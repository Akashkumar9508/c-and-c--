#include<stdio.h>
void main()
{
	int n1,n2 ;
	printf("enter the first number: ");
	scanf("%d",&n1);
	printf("enter the second number:");
	scanf("%d",&n2);
	if(n1==n2)
	printf("both are same");
	else if (n1>n2)
	printf("%d is greater" ,n1);
	else
	printf("%d is greater",n2);
}
