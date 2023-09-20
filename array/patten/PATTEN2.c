#include<stdio.h>
void main()
{
	int r,c,i;
	char a[5]={'A','B','C','D','E'};
	for(r=1;r<=5;r++)
	{
		i=0;
		for(c=5;c>=r;c--)
		{
			printf(" ");
		}
		for(c=1;c<=r;c++);
		{
			printf("%c",a[i]);
			i++;
		}	
	}
}
