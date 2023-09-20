#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	char x[100];
	ofstream of;
	of.open("aruna.txt");
	
	cout<<"Enter your name : ";
	cin.getline(x,100);
	
	of<<x<<endl;
	cout<<"Enter your age ";
	cin>>x;
	cin.ignore();
	of<<x<<endl;
	
}