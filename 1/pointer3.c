#include <stdio.h>
void main()
{
	int x,y;
	int *p1,*p2;
	printf("Enter first num : ");
	scanf("%d",&x);
	printf("Enter sec num : ");
	scanf("%d",&y);
	p1=&x;
	p2=&y;
	printf("Sum of the given num is = %d",*p1+*p2);
}