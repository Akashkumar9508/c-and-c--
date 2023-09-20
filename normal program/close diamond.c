#include<stdio.h>
void main()
{
	int r,c;
		for(r=5;r>=2;r--)
	{
		for(c=1;c<=r;c++)
		{
			printf("* ");
		}
		for(c=1;c<2*(5-r);c++)
		{
			printf("  ");
		}
		for(c=1;c<=r;c++)
		{
			if(r==5 && c==5);
			else
			{
				printf("* ");
			}
		}
		printf("\n");
	}
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf("* ");
		}
		for(c=1;c<2*(5-r);c++)
		{
			printf("  ");
		}
		for(c=1;c<=r;c++)
		{
			if(r==5 && c==5);
			else
			{
				printf("* ");
			}
		}
		printf("\n");
	}
}