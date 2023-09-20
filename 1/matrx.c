#include <stdio.h>
#define R 3
#define C 3
void main()
{
	int a[10][10],r,c;
	printf("Enter matrix elements : \n");
	for(r=0;r<R;r+=1)
	{
		for(c=0;c<C;c+=1)
		{
			scanf("%d",&a[r][c]);
		}
	}
	printf("matrix elements : \n");
	for(r=0;r<R;r+=1)
	{
		for(c=0;c<C;c+=1)
		{
			printf("%d ",a[r][c]);
		}
		printf("\n");
	}
}