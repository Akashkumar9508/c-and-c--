//to convert total second in hour,miniut,and second//
#include<stdio.h>
void main()
{
	float totalsecond,hour,miniut,second;
	printf("enter the total second=\n");
	scanf("%f",&totalsecond);
	hour=totalsecond/3600;
	miniut=totalsecond /60;
	second=totalsecond/60;
	printf("hour= %.2f,miniut= %.2f,second= %.2f",hour,miniut,second);
	
}