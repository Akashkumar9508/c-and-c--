#include <iostream>
using namespace std;
class Abc{
	public:
	virtual void show()
	{
		cout<<"Hello BCA sem 1";
	}
};
class Bcd:public Abc{
	public:
	void show()
	{
		cout<<"Hello BcA : Sem 2";
	}
};
int main(){
	Bcd b1;
	b1.show();
}