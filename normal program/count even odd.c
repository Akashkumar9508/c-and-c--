#include<stdio.h>
void main()
{
	int a,b,c,d,e,odd=0,even=0;
	printf("Enter any five number = ");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	if(a%2==1)
	odd+=1;
	else 
	even+=1;
	
	if(b%2==1)
	odd+=1;
	else 
	even+=1;
	
	if(c%2==1)
	odd+=1;
	else 
	even+=1;
	
	if(d%2==1)
	odd+=1;
	else 
	even+=1;
	
	if(e%2==1)
	odd+=1;
	else 
	even+=1;
	
	printf("Total even no are = %d",even);
	printf("Total odd no are = %d",odd);
	
}