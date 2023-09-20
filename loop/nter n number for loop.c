//display first n term natural number//
#include<stdio.h>
void main()
{
	int a,n;
	printf("enter a term of a number:=");
	scanf("%d",&n);
	printf("...........................................................................\n");
	printf("the natural number between 1 and %d is =??\n",n);
	for(a=1;a<=n;a=a+1)
	{
		printf("%d\n",a);
	}
}