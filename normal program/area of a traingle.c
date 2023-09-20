#include<stdio.h>
void main()
{
	float a,s,b,c,area;
	printf("enter the traingle");
	scanf("%f%f%f",&a,&b,&c);
	s= (a+b+c)/2.0;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area of traingle = %.2f",area);
}