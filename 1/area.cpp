#include <iostream>
using namespace std;

class A{
	public:
	int area(int s)
	{
		return s*s;
	}
	double area(double r)
	{
		return 3.14*r*r;
	}
};
int main()
{
	A a1;
	
	cout<<"Area of square is : "<<a1.area(5)<<endl;
	cout<<"Area of circle is : "<<a1.area(5.0);
}