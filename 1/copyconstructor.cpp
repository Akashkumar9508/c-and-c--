#include <iostream>
using namespace std;
class Leader
{
	public:
		int n1;
		int n2;
		Leader(int num1,int num2)
		{
			cout<<"Sumn is = "<<num1+num2; 
		}	
		Leader(Leader &t)
		{
			n1=t.n1;
			n2=t.n2;
			cout<<"\nAfter Copy Constructor\nSub is = "<<n1-n2;
		}
};
int main()
{
	Leader l1(20,30);
	Leader l2(l1);
}