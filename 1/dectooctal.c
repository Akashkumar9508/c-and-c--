#include <stdio.h>
void main()
{
	int a[100],i=0;
	int n,r;
	printf("Enter a decimal number : ");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%8;
		a[i]=r;
		i+=1;
		n=n/8;
	}
	printf("Octal number is = ");
	for(i=i-1;i>=0;i-=1)
	{
		printf("%d",a[i]);
	}
}