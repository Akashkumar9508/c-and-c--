/*string -  it  is a group of character followed by null character
			Vivek\0
				\0= null character*/
#include <stdio.h>
#include <string.h>
void main( )
{
	char c[100];
	printf("Enter a string : ");
	scanf("%s",&c);
	
	printf("Length of string is  =%d",strlen(c));
	printf("\n\n\nReverse of string is =%s",strrev(c));
}