#include <stdio.h>
int sum(int *x,int *y)
{
	return *x+*y;
}
void main()
{
	int p,q;
	printf("Enter first num : ");
	scanf("%d",&p);
	printf("Enter sec num : ");
	scanf("%d",&q); 
	printf("Sum is = %d",sum(&p,&q));
}