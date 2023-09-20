#include <stdio.h>
void main()
{
	int a[5],i,sum=0,max,min;
	printf("Enter array elements : \n");
	for(i=0;i<=4;i+=1)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("Sum of the given elements is = %d",sum);
	max=a[0];
	for(i=1;i<=4;i+=1)
	{
		if(a[i]>max)
		max=a[i];
	}
	printf("\n\n\nMaximum is = %d",max);
	min=a[0];
	for(i=1;i<=4;i+=1)
	{
		if(a[i]<min)
		min=a[i];
	}
	printf("\n\n\nMinimum is = %d",min);
	
	
	
	
	
	
	
	
	
	
	
	
}