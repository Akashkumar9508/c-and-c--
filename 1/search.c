#include <stdio.h>
void main()
{
	int a[10]={23,24,45,65,45,87,97,43,32,21};
	int i,n;
	printf("Enter the element want to search : ");
	scanf("%d",&n);
	for(i=0;i<=9;i+=1)
	{
		if(a[i]==n)
		{
			printf("Elements position is = %d",i);
			break;
		}
	}
	if(i==10)
	{
		printf("Element doesn't exist");
	}
}