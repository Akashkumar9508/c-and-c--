//To creat a simple calcluator//
#include<stdio.h>
void main()
{
	char S;
	float n1,n2,R;
	printf("welcome to simple calculator made by akash kumar....\n");
	printf(".....................................................\n");
	printf("enter [number 1]   and [oprator(-,+,*,/,%)]   and [number 2].\n");
	/*input two number and oprator from user*/
	scanf("%f %c %f",&n1,&S,&n2);
	
	switch(S)
	{
		case '+':
			{
				R=n1+n2;
			}
			break;
			case '-':
				{
					R=n1-n2;
				}
				break;
				case '*':
					{
						R=n1*n2;
					}
					break;
					case '/':
						{
							R=n1/n2;
						}
						break;
						
	
	default:
	{
		printf("enter a oprator in(-,+,*,/,%)");
							}						
	}
	printf("you enter %.1f %c %.1f the answer is =%.2f",n1,S,n2,R);
	
}