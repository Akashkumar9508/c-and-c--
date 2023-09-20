//Factorial using recursion
#include<stdio.h>
int fact(int n);
void main()
{
	long int n;
	printf("Enter any number = ");
	scanf("%d",&n);
	printf("Factorial of %d is = %d",n,fact(n));
}
int fact(int n)
{
	if(n==1)
	return 1;
	else
	return n*fact(n-1);
}