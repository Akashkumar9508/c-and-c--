//wap in c to read 10 number from your keyboard and find the sum of them//
#include<stdio.h>
int main()
{
	int n,i ,sum=0;
	printf("enter 10 number :=\n");
	for (i=1;i<=10;i++)
	{
		scanf("%d",&n);
		sum=sum+n;
	}
	printf("sum of 10 number is %d \n",sum);
}
