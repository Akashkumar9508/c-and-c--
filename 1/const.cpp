#include <iostream>
using namespace std;
class A{
	public:
	A()
	{
		cout<<"I am a constructor";
	}
	void show()
	{
		cout<<"\nIt is a function";
	}
	A(int a,int b)
	{
		cout<<"\nSum is = "<<a+b;
	}
	A(float r)
	{
		cout<<"\n Area of circle is = "<<(3.14*r*r);
	}

};
int main()
{
	A a1;
	a1.show();
	A b1(20,30);
	A c1(7.0);
}