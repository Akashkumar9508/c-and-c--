//to print weekdays//
#include<stdio.h>
void main()
{
	int a;
	printf("enter a between 1 to 7\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			{
				printf("sunday");
			}
			break;
			case 2:
				{
					printf("monday");				
				}
				break;
				case 3:
					{
						printf("tuesday");
					}
					break;
					case 4:
						{
							printf("wednesday");
						}
						break;
						case 5:
							{
								printf("thursday");
							}
							break;
							case 6:
								{
									printf("friday");
								}
								break;
								case 7:
									{
										printf("saturday");
									}
									break;
									default:
										{
											printf("enter number between 1 to 7.");
										}
			
			
			
		
	}
}