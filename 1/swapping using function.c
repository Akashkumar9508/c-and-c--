#include <stdio.h>
void swap(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n\n\n \nValue of x after swapping is = %d",a);
	printf("\nValue of y after swapping is = %d",b);
}
void main()
{
	int x,y;
	printf("Enter first num : ");
	scanf("%d",&x);
	printf("Enter sec num : ");
	scanf("%d",&y);
	printf("Value of x before swapping is = %d",x);
	 printf("\nValue of y before swapping is = %d",y);
	 swap(x,y);

}