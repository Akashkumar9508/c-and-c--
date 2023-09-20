#include<stdio.h>
void main()
{
	int a;
	printf("enter your age:\n ");
	scanf("%d",&a);
	if(a>=18)
	{
	printf("your have enter your age.=%d\n",a);
	printf("you are eligible for vote.",a);
	}
	else
	{
	printf("you have enter your age.=%d\n",a);
	printf("you are not eligible for vote. ",a);
	}	
}