#include <stdio.h>
void main()
{
	int a,n;
	printf("Enter a number : ");
	scanf("%d",&n);
	for(a=n;a<=n*10;a+=n)
	{
		printf("%d\t",a);
	}
}