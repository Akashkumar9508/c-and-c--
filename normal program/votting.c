#include<stdio.h>
void main()
{

	int n2;
	char name;
	
	printf("enter your name: ");
	scanf("%s",&name);
	printf("enter your age : ");
	scanf("%d",&n2);
	if(n2>=18)
	{
		printf("%c you are eligible for voting",name);
		
	}
	else
	{
		printf("%c you are not eligible for voting",name);
	}

}