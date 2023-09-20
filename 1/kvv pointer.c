#include <stdio.h>
void main()
{
	int x[5]={23,34,54,65,32};
	int *ptr;
	ptr=&x[1];
	printf("Value of *ptr+3 = %d",*(ptr+3));
}