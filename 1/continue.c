#include <stdio.h>
void main()
{
	int a;
	for(a=2;a<=20;a+=2)
	{
		if(a==8||a==14)
		continue;
		else
		printf("%d\t",a);
	}
}