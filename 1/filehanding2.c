#include <stdio.h>
#include <stdlib.h>
void main()
{
	int a,b,s;
	FILE *fp;
	printf("Enter first num : ");
	scanf("%d",&a);
	printf("Enter sec num : ");
	scanf("%d",&b);
	s=a+b;
	printf("Sum is = %d",s);
	fprintf(fp,"%d %d %d",a,b,s);
	fclose(fp);
}