#include <iostream>
using namespace std;
int main()
{
	char str[50];
	cout<<"Enter a string : ";
	cin>>str;
	for(int r=0;r<strlen(str);r+=1)
	{
		for(int c=0;c<=r;c+=1)
		{
			cout<<str[c]<<"  ";
		}
		cout<<endl;
	}
}