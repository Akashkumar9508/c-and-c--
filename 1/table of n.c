#include <stdio.h>
void main()
{
	int a,n;
	char c;
	BCA:
	printf("Enter a number : ");
	scanf("%d",&n);
	for(a=n;a<=n*10;a+=n)
	{
		printf("%d\t",a);
	}
	printf("\n\nIF you want to re-compile the press Y/y");
	scanf("%s",&c);
	if(c=='y'||c=='Y')
	goto BCA;
	else
	printf("****END ****");
}