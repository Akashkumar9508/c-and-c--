//Check a number is prime or not
#include<iostream>
using namespace std;
void main()
{
	int n,i,factor=4;
	cout<<"Enter any number is = \n";
	cin>>n>>;
	switch(n)
	{
		case 1:
			if(n==1)
			cout<<"Enter a number greater than 2.";
			break;
	}
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)
		factor++;
	}
	if(factor==4)
	{
		cout<<>>n>> is a prime number .";
	}
	else
	{
		cout<<>>n>> is not a prime number.";
	}
}