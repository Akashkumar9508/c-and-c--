#include <iostream>
using namespace std;
int main()
{
	int a[11]={1,1,2,3,5,8,13,21,34,55,89};
	int u,l;
	u=a[6]/10;
	l=a[10]%10;
	cout<<"Sum is ="<<u+l;
}