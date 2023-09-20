#include <iostream>
using namespace std;
class Sum{
	public:
		int num1;
		int num2;
		void add()
		{
			cout<<"Enter first num : ";
			cin>>num1;
			cout<<"Enter sec num : ";
			cin>>num2;
			cout<<"Sum is = "<<(num1+num2);
		}
		void sub()
		{
			cout<<"Enter first num : ";
			cin>>num1;
			cout<<"Enter sec num : ";
			cin>>num2;
			cout<<"Sum is = "<<(num1-num2);
		}
};
int main()
{
	cout<<"Hello";
	Sum s1;
	s1.add();
	s1.sub();
}