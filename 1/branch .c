#include <stdio.h>
void main()
{
	int ch;
	float c,f;
	printf("Press 1 :  Celsius to farenheit ");
	printf("\nPress 2 : Farenheit to celsius ");
	
	printf("\nEnter your choice : ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			//f=1.8*c+32.0
				printf("Enter celsius : ")	;
				scanf("%f",&c);
				printf("Farenheit is = %f",(1.8*c+32.0));
				break;
		case 2:
			//c=(f-32.0)/1.8
				printf("Enter farenheit : ")	;
				scanf("%f",&f);
				printf("celsius is = %f",((f-32.0)/1.8));
				break;
			default:
				printf("Wrong choice ");
	}
}



