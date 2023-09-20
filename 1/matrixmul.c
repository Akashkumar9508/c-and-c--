#include <stdio.h>
void main()
{
	int A[2][2],B[2][2],M[2][2],r,c;
	printf("Enter first  matrix elements :\n ");
	for(r=0;r<=1;r+=1)
	{
		for(c=0;c<=1;c+=1)
		{
			printf("A[%d][%d] = ",r,c);
			scanf("%d",&A[r][c]);
		}
	}
	printf("Enter sec  matrix elements :\n ");
	for(r=0;r<=1;r+=1)
	{
		for(c=0;c<=1;c+=1)
		{
			printf("B[%d][%d] = ",r,c);
			scanf("%d",&B[r][c]);
		}
	}
	printf(" first  matrix elements are :\n");
	for(r=0;r<=1;r+=1)
	{
		for(c=0;c<=1;c+=1)
		{
			printf("%d ",A[r][c]);
		}
		printf("\n");
	}
	printf(" sec  matrix elements are :\n");
	for(r=0;r<=1;r+=1)
	{
		for(c=0;c<=1;c+=1)
		{
			printf("%d ",B[r][c]);
		}
		printf("\n");
	}
		//multiply logic
		for(r=0;r<=1;r+=1)
		{
			for(c=0;c<=1;c+=1)
			{
				M[r][c]=0;
				for(int m=0;m<=1;m+=1)
				{
					M[r][c]=M[r][c]+A[r][m]*B[m][c];
				}
			}
		}
	printf(" Multiply  matrix elements are :\n");
	for(r=0;r<=1;r+=1)
	{
		for(c=0;c<=1;c+=1)
		{
			printf("%d ",M[r][c]);
		}
		printf("\n");
	}	
}
//initialise matrices and row and column
//input first matrix 
//input sec matrix
//display first
//display sec
//mul logic
// print multiply matrix