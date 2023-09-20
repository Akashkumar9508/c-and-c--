#include<stdio.h>
void main()
{
	char i='A';
	int R ,C;
	for(R=1;R<=6;R++)
	{
		for(C=1;C<=R;C++)
		{
			printf("       %c",i);
			i++;
		}
		printf("\n");
	}
}