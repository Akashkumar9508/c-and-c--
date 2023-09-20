#include<stdio.h>
void main()
{
	float CL,R,M,E,C,P,H,MU,T,TP;
	char name;
	printf("enter your name.=\n");
	scanf("%c",&name);
	printf("enter your roll no.=\n");
	scanf("%f",&R);
	printf("enter your Class.=\n");
	scanf("%f",&CL);
	printf("enter your english marks=\n");
	scanf("%f",&E);
	printf("enter your chemistry marks=\n");
	scanf("%f",&C);
	printf("enter your physics marks=\n");
	scanf("%f",&P);
	printf("enter your hindi marks=\n");
	scanf("%f",&H);
	printf("enter your music marks=\n");
	scanf("%f",&MU);
	T=(M+E+C+P+H+MU);
	printf("\n total sum of marks=%.2f",T);
	TP=(T/6);
	printf("\n total percent is=%.2f",TP);
	if(TP>=90)
	{
	printf("\n you have got A+ grade.");
	printf("\n excellent.");
	printf("\n division = first.");
	}
	else if(TP>=60)
	{
	printf("\n you have got A grade.");
	printf("\n pass.");
	printf("\n division = first.");
	}
	else if(TP>=45)
	{
	printf("\n you have got B+ grade.");
	printf("\n Avrage.");
	printf("\n division = Second.");
	}
	else if(TP>=30)
	{
	printf("\n you have got C Grade.");
	printf("\n below avrage.");
	printf("\n division = Third.");
	}
	else
	{
	printf("\n you are fail.");
	}
	
	
}
