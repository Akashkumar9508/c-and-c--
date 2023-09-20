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
	 printf("Value of x before swapping is = %d",*p1);
	 printf("\nValue of y before swapping is = %d",*p2);
	 *p1=*p1+*p2;//x=100+200 = 300
	 *p2=*p1-*p2;//y=300-200 = 100
	 *p1=*p1-*p2;;//x=300-100 = 200
	printf("\n\n\n \nValue of x after swapping is = %d",*p1);
	 printf("\nValue of y after swapping is = %d",*p2);
}











