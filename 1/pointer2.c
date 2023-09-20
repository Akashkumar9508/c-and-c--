#include <stdio.h>
void main()
{
	int c=5,*p;
	p=&c;
	c=10;
	printf("Value of c is = %d",c);
	printf("Address of c is = %d",*p);
}