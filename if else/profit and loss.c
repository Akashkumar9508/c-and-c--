//to find profit or loss//
#include<stdio.h>
void main()
{
	int sp,cp;
	printf("enter selling price \n");
	scanf("%d",&sp);
	printf("enter cost price \n");
	scanf("%d",&cp);
	if(sp>cp)
	{
		printf("profit by %d",sp-cp);
	}
	else
	{
		printf("loss by %d",cp-sp);
	}
}