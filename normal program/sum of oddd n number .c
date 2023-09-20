 #include<stdio.h>
 void main()
 {
 	int i,n,sum;
 	printf("enter a number:= ");
 	scanf("%d",&n);
 	printf("odd number is =\n");
 	for(i=1;i<=n;i++)
 	{
 		printf("%d \n",2*i-1);
 		sum=sum+(2*i-1);
	 }
	 {
	 	printf("the sum of odd natural number up %d term= %d\n",n,sum);
	 }
	
 }