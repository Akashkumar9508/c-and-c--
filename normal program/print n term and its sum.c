#include<stdio.h>
void main()
{
	int n,i,sum;
	printf ("enter a term of number:= ");
	scanf("%d",&n);
	printf("the number between  :=\n");
	for(i=1;i<=n;i++)
	{
		printf("%d\n",i);
		sum=sum+i;
		
	}
	printf("the sum of %d number is =%d",n,sum);
}