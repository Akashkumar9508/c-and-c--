#include<stdio.h>
void main()
{
	char a[6]={'A,','K','A','S','H','K'};
	int row ,col, i=0;
	for(row=1;row<=6;row++)
	{
		for(col=1;col<=6;col++)
		{
			printf("%c",a[i]);
			i++;
		}
		printf("\n");
	}
}