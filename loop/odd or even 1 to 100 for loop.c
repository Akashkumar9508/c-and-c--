//an odd or even number between 1 to 100//
#include<stdio.h>
void main()
{
	int n;
	for(n=1;n<=25;n++)
	{
		if(n%2==0)
		{
			printf("%d is even \n",n);
		}
		else
		{
			printf("%d is odd\n",n);
		}
	}
}