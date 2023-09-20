#include <iostream>
using namespace std;
template <typename t1>t1  sum(t1 a,t1 b)
{
	return a+b;
}
int main()
{
	int p=25,q=35;
	cout<<"Sum is = "<<sum(p,q);
	cout<<"\nSum is = "<<sum(25.76,45.65);
}