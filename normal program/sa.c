//maxium between two number using switch case//
#include<stdio.h>
void main()
{
	int a,b;
	printf("enter number 1 and number 2\n");
	scanf("%d%d",&a,&b);
	//now using switch case//
	switch(a<b)
	{
		//for true//
		case 0:
			{
				printf("%d is greater than %d",a,b);
			}
			break;
			//for false//
			case 1:
				{
					printf("%d is greater than %d",b,a);
					
				}
				break;
				default:
					{
						printf(" both are equal . thankyou.....");
					}
	}
	
	
}