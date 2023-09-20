#include<stdio.h>
void main()
{
	int p,r,t;
	printf("enter the princile:=");
	scanf("%d",&p);
	
	printf("enter the rate:=");
	scanf("%d",&r);
	
	printf("enter the time in year:=");
	scanf("%d",&t);
	printf("the simple interest is %d",(p*r*t)/100);
}