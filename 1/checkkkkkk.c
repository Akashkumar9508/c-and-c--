#include <stdio.h>
void main()
{
	int x=10;
	int z=x++ + ++x + ++x;
	printf("%d ",z);
//	printf("%d \n",--x);// x =9 print  x = 9
//	printf("%d ",x--);// print x = 9 , x =8
	//printf("\n %d",(x++ + ++x)); // 8 (9) +(10)10 = 18
	//printf("\n %d",(x++ - x++ + --x)); // 10(11) - 11(12) + (11) 11= 10
}