//Inheritance example
#include <iostream>
using namespace std;
class University
{
	public:
		void info()
		{
			cout<<"University is the only Normal class";
		}
};
class College: public University
{
	public:
		void get()
		{
			cout<<"College is parent class of Teacher and child class of University\n";
		}	
};
class Teacher: public College
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
	s1.get();
	s1.info();
}