//Array under function
#include<stdio.h>
int arr()
{
		int a[5],i;
	printf("Enter elements of array = \n");
	for(i=0;i<=5;i++)
	{
		scanf("%d",&a[i]);
	}
	 printf("your array are :-\n");
	for(i=0;i<=5;i++)
	{
		printf("%d\n",a[i]);
	}
	return 1;
}
void main()
{
   
	arr();
	return;
}
