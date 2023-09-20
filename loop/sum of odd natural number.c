//to print n term odd naural number//
#include<stdio.h>
void main()
{
	int n,i,sum=0;
	printf("hi there ,I am hear for calculating odd natural number that you give ,please give a term of number ......\n");
	printf(".......................................................................................\n");
	printf("enter a term of number :=");
	scanf("%d",&n);
	printf("the odd number is \n");
	for(i=1;i<=n;i++)
	{
		printf("%d \n",2*i-1);
		sum=sum+(2*i-1);
	}
	printf("wow it's so easy ,the sum of odd natural number is %d.",sum);
	
}