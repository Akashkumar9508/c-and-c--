#include<stdio.h>
void main()
{
	int a[5],i,sum=0;
	printf("enter the array element:= ");
	for(i=0;i<=5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the sum of array element is := ");
	for(i=0;i<=5;i++)
	{
		sum=sum+a[i];
	}
	printf("%d",sum);
}