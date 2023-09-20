//result using class //
#include<iostream>
using namespace std;
class Result
{
	public:
		char name[10];
		int roll;
		float math;
		float english;
		float science;
		float hindi;
		float music;
		float total_marks;
		float total_percent;
		void input()
		{
			cout<<"enter your good name:- ";
			cin>>name;
			cout<<"enter your roll number:- ";
			cin>>roll;
			cout<<"enter your marks in math:-";
			cin>>math;
			cout<<"enter your marks in english:- ";
			cin>>english;
			cout<<"enter your marks in science:- ";
			cin>>science;
			cout<<"enter your marks in hindi:- ";
			cin>>hindi;
			cout<<"enter your marks in music:- ";
			cin>>music;
		}
		void main()
		{
			total_marks=math+english+science+hindi+music;
			total_percent=(total_marks/500)*100;
		}
		void output()
		{
			if(total_percent>=90)
			{
				cout<<"\n\n\n\n";
				cout<<"congratulation you are the brillient sudent\n ";
				cout<<"your total markes is = "<<total_marks;
				cout<<"\nyour total percent is = "<<total_percent;
				cout<<"\nand,\n you have got A+ gread\n";
				cout<<"and,\n Our school proud on you..........";
			}
			else if(total_percent>=60)
			{
				cout<<"\n\n\n\n";
				cout<<"congratulation you are the avrage sudent\n ";
				cout<<"your total markes is = "<<total_marks;
				cout<<"\nyour total percent is = "<<total_percent;
				cout<<"\nand,\n you have got A gread\n";
				cout<<"and,\n Our school proud on you..........";
			
			}
			else if(total_percent>=40)
			{
				cout<<"\n\n\n\n";
				cout<<"congratulation you are the Normal sudent\n ";
				cout<<"your total markes is = "<<total_marks;
				cout<<"\nyour total percent is = "<<total_percent;
				cout<<"\nand,\n you have got B gread\n";
				cout<<"and,\n Please work hard at home..........";
			}
			else if(total_percent>=30)
			{
				cout<<"\n\n\n\n";
				cout<<"congratulation you are the below avrage sudent\n ";
				cout<<"your total markes is = "<<total_marks;
				cout<<"\nyour total percent is = "<<total_percent;
				cout<<"\nand,\n you have got C gread\n";
				cout<<"and,\n Please work hard at home..........";
			
			}
   
	}
};
