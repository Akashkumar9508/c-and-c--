#include<stdio.h>
void main()
{
	int S,E,i,sum=0;
	printf("enter a starting number\n");
	scanf("%d",&S);
	printf("enter a end number\n");
	scanf("%d",&E);
	printf("\n\n\n\n");
	printf("number divided by 9 are :=");
	for(i=S;i<=E;i+=1);
	{
		if(i%9==0)
		{
			printf("%d",i);
			
			sum+=1;
		}
	}
	printf("\nthe sum of number between starting and end are:=%d ",sum);
}