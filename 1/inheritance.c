//Inheritance example
#include <iostream>
using namespace std;
class Teacher
{
	public:
		void show()
		{
			cout<<"Hello Parent class \n";
		}
};
class Student:public Teacher
{
	public:
		void disp()
		{
			cout<<"Hello child class \n";
		}
};
int main()
{
	Student s1;
	s1.disp();
	s1.show();	
}