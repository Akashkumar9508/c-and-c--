#include <iostream>
using namespace std;
class A{
	protected:
		void show(){
			cout<<" + 10000";
		}
};
class B:public A{
	public:
		void disp()
		{
			show();
		}
};
int main()
{
	B b1;
	b1.disp();
}