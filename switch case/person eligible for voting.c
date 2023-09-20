//to check a person is eligible for voting//
#include<stdio.h>
void main()
{
	char name;
	int age;
	printf("enter your name \n");
	scanf("%s",&name);
	printf("enter your age \n");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("%s you are eligible for voting",name);
	}
	else
	{
		printf("%s you are not eligible for voting");
	}
	
}