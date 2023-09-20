#include <stdio.h>
int swap(int *x,int *y)
{
	*x=*x+*y;//50
	*y=*x-*y;//20
	*x=*x-*y;//30
}
void main()
{
	int p=20,q=30;
	printf("\nValue of p before swapping is = %d",p);
	printf("\nValue of q before swapping is = %d",q);
	swap(&p,&q);
	printf("\n\nValue of p after swapping is = %d",p);
	printf("\nValue of q after swapping is = %d",q);
}