#include <stdio.h>
#include <stdlib.h>//standard library - FILE ,System()
void main()
{
	//int n;
	//printf("Enter a num : ");
	//scanf("%d",&n);
	FILE *fptr;
	fptr=fopen("D:\\Aruna.txt","w");
	fprintf(fptr,"21st feb se exam hai");
} 