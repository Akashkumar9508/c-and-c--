#include <iostream>
using namespace std;
int main()
{
	int f=0,s=1,next,a[11],u,l,i=0;
	while(s<=100)
	{
		a[i]=s;
		i+=1;
		cout<<s<<"\t";
		next=f+s;
		f=s;
		s=next;
	}
	l=a[10]%10;
	u=a[6]/10;
	cout<<"\nSum is = "<<l+u;
}