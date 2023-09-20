#include <iostream>
using namespace std;
class Abc{
	private:
		void show()
		{
			cout<<"Hello BCA ";
		}
	protected:
		void info()
		{
			show();//runtime
		}
		public:
		void disp()
		{
			info();//runtime
		}
};
int main()
{
	Abc a1;
	a1.disp();//compile time 
}