#include <stdio.h>
void main()
{
	int x,y;
	
	printf("Enter first num : ");
	scanf("%d",&x);
	printf("Enter sec num : ");
	scanf("%d",&y);
	 printf("Value of x before swapping is = %d",x);
	 printf("\nValue of y before swapping is = %d",y);
	 x=x+y;
	 y=x-y;
	 x=x-y;
	printf("Value of x after swapping is = %d",x);
	 printf("\nValue of y after swapping is = %d",y);
}