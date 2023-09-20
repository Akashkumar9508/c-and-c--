#include<stdio.h>
void main()
{
	int n;
	printf("enter a no. of day \n");
	scanf("%d",&n);
		switch(n)
		{
			case 1:
				printf("sunday");
				break;
			case 2:
				printf("monday");
				break;
			case 3:
				printf("tuesday");
				break;
			case 4:
				printf("wednsday");
				break;
			case 5:
				printf("thursday");
				break;
			case 6:
				printf("friday");
				break;
			case 7:
				printf("saturday");
				break;
				default:
				printf("enter a no between 1 to 7");
				
		}
}