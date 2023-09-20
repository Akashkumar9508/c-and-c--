#include <stdio.h>
int sum(int *x,int *y)
{
	return *x+*y;
}
void main()
{
	int p=20,q=30;
	
	printf("Sum is = %d",sum(&p,&q));
}