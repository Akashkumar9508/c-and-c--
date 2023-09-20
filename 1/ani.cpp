#include <iostream>
using namespace std;
int main()
{
	int a[2][2],b[2][2],r,c;
	cout<<"enter the 1st matrix ";
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			cin>>a[r][c];
		}
	}
	cout<<"enter the 2nd matrix ";
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			cin>>b[r][c];
		}
	}
	cout<<"sum is =\n";
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			cout<<a[r][c]+b[r][c]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}