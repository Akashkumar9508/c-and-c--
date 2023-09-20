#include <iostream>
using namespace std;
class Complex{
	public:
		int real;
		int imag;
		public:
			Complex(int r,int i)
			{
				real=r;
				imag=i;
			}
			Complex operator +(Complex obj)
			{
				Complex res;
				res.real=real+obj.real;//5
				res.imag=imag+obj.imag;
				return res;
			}
			void print()
			{
				cout<<"\n"<<real<<" + "<<imag<<"i\n";
			}
};
int main(){
	Complex c1(2,5);
	c1.print();
	Complex c2(3,6);
	c2.print();
	Complex c3=c1+c2;
	c3.print();
}





