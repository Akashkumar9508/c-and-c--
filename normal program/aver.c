//Average of an array 
#include<stdio.h>
void main()
{
	int a[5],sum=0,i,average=0;
	printf("Enter elements of array = \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
	sum=sum+a[i];
	printf("Array[%d]=%d    sum is = %d\n",i,a[i],sum);
	
	}
	printf("Sum is = %d",sum);


}