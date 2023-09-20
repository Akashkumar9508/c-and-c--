//to cheak char is vowel or consunent//
#include<stdio.h>
void main()
{
	char c;
	printf("enter a character\n");
	scanf("%c",&c);
	switch(c)
	{
		case'A':
		case'U':
		case'I':	5
		case'O':
		case'E':
		case'a':
		case'u':
		case'i':
		case'o':
		case'e':
			printf("%c is vowel",c);
			break;
			default:
				printf("%c is consonunt",c);
	}
}