#include <iostream>
using namespace std;
class Abc{
	public:
	int sum(int a,int b)
	{
		return a+b;		
	}
	int sub(int a,int b)
	{
		return a-b;		
	}
	int mult(int a,int b)
	{
		return a*b;		
	}
	float div(float a,float b)
	{
		return a/b;		
	}
};
int main()
{
	Abc a1;
	int choice,p,q;
	cout<<"Press 1 : Sum of two number ";
	cout<<endl<<"Press 2 : Sub between two number ";
	cout<<endl<<"Press 3 : Multiplication between two number ";
	cout<<endl<<"Press 4 : Quotient between two number ";
//	cout<<endl<<"Press 2 : Sub between two number ";
	cout<<"\nEnter your choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"Enter first num : ";
			cin>>p;
			cout<<"Enter sec num ";
			cin>>q;
				cout<<"Sum is = "<<a1.sum(p,q)<<endl;
			break;
		case 2:
				cout<<"Sub is = "<<a1.sub(80,30)<<endl;
			break;
		case 3:
			cout<<"Enter first num : ";
			cin>>p;
			cout<<"Enter sec num ";
			cin>>q;
				cout<<"Multiply is = "<<a1.mult(p,q)<<endl;
			break;
		case 4:
				cout<<"Quotient is = "<<a1.div(20,8)<<endl;
			break;
		default:
			cout<<"Invalid choice ";
	}

}