#include <iostream>
using namespace std;
class Sum{
	public:
		int a;
		int b;
			Sum(int p,int q)
			{
				a=p;
				b=q;
			}
			Sum operator +()
			{
				a=-a;
				b=-b;
			}
			void show()
			{
				cout<<"\nValue of a is = "<<a;
				cout<<"\nValue of b is = "<<b;
			}
};
int main()
{
	Sum s1(20,30);
	s1.show();
	+s1;
	s1.show();
}