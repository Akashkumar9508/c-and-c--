#include <iostream>
using namespace std;
class Leader
{
	public:
	Leader()
	{
		cout<<"\nConstructor executed"	;
	}	
	~Leader()
	{
		cout<<"\nConstructor destroyed";
	}
};
int main()
{
	Leader l1,l2,l3,l4,l5;
}


