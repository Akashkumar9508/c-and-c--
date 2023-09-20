#include <stdio.h>
void main()
{
	int a[5],odd[6],even[6],i,x=0,y=0;
	printf("Enter any five number = ");
	for(i=0;i<=4;i+=1)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		{
			even[x]=a[i];
			x+=1;
		}
		else
		{
			odd[y]=a[i];
			y+=1;	
		}
		
	}
	printf("Total even no are = %d and the are {",x);
	for(i=x-1;i>=0;i-=1)
	{
		printf(" %d ",even[i]);
	}
	printf("}\n\nTotal odd no are = %d and they are {",y);
	for(i=y-1;i>=0;i-=1)
	{
		printf(" %d ",odd[i]);
	}
	printf("}");	
}