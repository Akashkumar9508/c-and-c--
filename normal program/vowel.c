#include<iostream>
using namespace std;
class vowel
{
	public:
		char a;
		cout<<"enter a char";
		cin>>a;
		void disply()
		{
		switch(c)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		  			printf("vowel");
		  			break;
		  			default:
		  			printf("consonant");
	}
  }
};
int main()
vowel s;
s.disply();
