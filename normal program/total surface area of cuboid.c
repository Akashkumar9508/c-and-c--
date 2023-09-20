//total surface area of cuboid//
#include<stdio.h>
void main()
{
	float l,b,h;
	printf("enter length ,breth and hight:-");
	scanf("%f%f%f",&l,&b,&h);
	printf("The total surface area of cuboid is %f",2*(l*b+b*h+h*l));
}