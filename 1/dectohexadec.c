	#include <stdio.h>
	void main()
	{
		int a[100],i=0;
		int n,r;
		printf("Enter a decimal number : ");
		scanf("%d",&n);
		while(n>0)
		{
			r=n%16;
			a[i]=r;
			i+=1;
			n=n/16;
		}
		printf("HD number is = ");
		for(i=i-1;i>=0;i-=1)
		{
			if(a[i]>9)
			printf("%c",a[i]+55);
			else
			printf("%d",a[i]);
		}	
		
	}