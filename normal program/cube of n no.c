#include<stdio.h>
void main()
{
	int n,i;
	printf("enter a number:=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("the number is %d and cube of %d =%d\n",i,i,(i*i*i));
	}
}