//Inheritance example
#include <iostream>
using namespace std;
class University
{
	public:
		void info()
		{
			cout<<"University is p.c of student";
		}
};
class College
{
	public:
		void get()
		{
			cout<<"College is parent class of Student\n";
		}	
};

class Student:public College,public University
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
	s1.get();
	s1.info();
}